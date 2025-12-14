/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(32767, var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] = var_9;
                arr_8 [i_0] = (i_0 % 2 == 0) ? ((((((var_1 == 32744) / (arr_1 [i_0 + 1] [i_1 + 2]))) % ((((-32744 + 2147483647) >> (((arr_5 [i_0]) - 92)))))))) : ((((((var_1 == 32744) / (arr_1 [i_0 + 1] [i_1 + 2]))) % ((((-32744 + 2147483647) >> (((((arr_5 [i_0]) - 92)) - 102))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                {
                    arr_17 [i_2] [i_3] [i_4] [i_4] = (arr_11 [i_3]);

                    for (int i_5 = 3; i_5 < 16;i_5 += 1)
                    {
                        var_20 = (((-32767 - 1) ? 32756 : -32767));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_21 -= (((max(((min((arr_15 [i_6] [i_3]), (arr_6 [i_5] [i_2])))), 7523600707901145858)) > (10923143365808405757 && 10923143365808405757)));
                            var_22 = ((!(((var_17 + var_13) != var_0))));
                            arr_24 [i_2] [i_3] [i_4] [i_4] [i_5] [i_6] = (min(-32760, (arr_2 [i_4 - 2] [16])));
                            var_23 = (min(var_23, (((var_5 & ((29 >> (arr_18 [i_5 + 1] [i_5]))))))));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_24 = (var_10 * var_6);
                            var_25 = (max((((((max((arr_10 [i_2]), (-32767 - 1)))) && 0))), (~42)));
                            var_26 = (min(var_26, (((!(((~((min(var_15, (arr_9 [i_7] [i_7]))))))))))));
                        }
                        arr_27 [i_4] [i_4] [i_3] [i_2] = (((var_14 || -32745) * 1));
                    }
                }
            }
        }
    }
    #pragma endscop
}
