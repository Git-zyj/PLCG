/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] = (((min((min(1, (arr_7 [i_0] [i_1] [i_1] [i_2])), 1)))));
                    arr_10 [i_0] [i_0] [i_2] [i_0] &= (((min((arr_1 [i_2]), (var_1 & 1))) * ((~((var_14 ? (arr_1 [i_2]) : (arr_2 [i_0])))))));

                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        var_17 = (min(var_17, (((((!(var_0 << 7))) ? ((~(~var_10))) : (((((-9223372036854775807 - 1) >= 127)))))))));
                        var_18 = 1;
                        var_19 = ((-(!-1278636108497730561)));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((!(((1278636108497730561 ? (arr_3 [i_1]) : ((((arr_6 [i_1]) < var_15))))))));
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (max(var_11, 8379573015160860202));
                            var_20 = (min(var_20, (((var_5 >= (((~(arr_13 [i_0] [i_0] [i_0])))))))));
                            arr_20 [i_0] [i_3] [i_4] = (~14);
                        }
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_21 = (max(((((83 || var_7) < 15))), (((arr_12 [i_1] [i_1] [i_2] [i_5] [i_2] [i_2]) ? var_5 : (arr_13 [i_1 - 2] [i_1] [i_1])))));
                        var_22 = (max(var_22, (((~((((max(0, 197))) * (((!(arr_5 [i_2])))))))))));
                    }
                    var_23 &= ((((~(arr_12 [i_0] [i_1 - 1] [i_1] [i_1] [i_0] [i_2]))) & (((-(max(3, var_8)))))));
                }
            }
        }
        var_24 = (~65535);

        /* vectorizable */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_25 = (max(var_25, (((((-1278636108497730564 ? 1278636108497730563 : (arr_5 [i_0]))) & (arr_5 [i_6]))))));
            var_26 = (((arr_23 [i_6]) > 0));
            var_27 *= 95;
        }
    }
    var_28 = (max(((((var_14 ? var_7 : var_14)) & 65493)), -16996));
    #pragma endscop
}
