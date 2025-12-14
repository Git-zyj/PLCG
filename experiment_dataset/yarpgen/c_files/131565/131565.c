/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((max((min(32756, 18446744073709551615)), (((-((-31153 ? 105 : var_3))))))))));
                    var_13 -= ((((((arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) ? (((arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : var_4)) : (var_0 % 1)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_4] = var_7;
                                var_14 += -var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 -= (((((-((4294967271 << (248920946 - 248920924)))))) * var_9));
    var_16 = ((-var_5 ? 4294967269 : var_10));

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_18 [21] [i_5] = (arr_17 [i_5] [i_5]);
        arr_19 [i_5] = var_6;
        arr_20 [i_5] [i_5] = (((arr_15 [i_5]) <= 186));
        arr_21 [i_5] = (((arr_14 [i_5] [i_5]) <= 1));
    }
    var_17 = (var_8 & var_4);
    #pragma endscop
}
