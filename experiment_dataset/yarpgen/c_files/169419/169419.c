/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!(((var_9 ? var_11 : var_2))))));

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_14 = (min((max(0, (((arr_0 [i_0] [i_0]) <= (arr_1 [2]))))), (!15304475812306747235)));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            var_15 -= (~var_5);
            var_16 = (~var_0);
            arr_4 [i_0] [i_1] = (arr_3 [i_0 + 3]);
            var_17 = (((arr_0 [i_0 - 1] [i_1 + 2]) >= ((var_8 - (arr_1 [i_0 + 1])))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_2 - 1] [i_3] [i_1] = ((((arr_10 [i_1] [i_4 - 1]) ^ (arr_11 [i_4] [i_3] [i_2 + 3] [i_1 + 2] [i_0 + 2]))));
                            var_18 -= (var_2 & (arr_9 [i_0] [i_1 + 2] [i_2 + 3]));
                        }
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            arr_15 [i_1] [i_3] [i_2] [i_1] [i_1] = var_8;
                            var_19 = -var_7;
                        }
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            var_20 ^= ((arr_14 [i_6 - 1] [i_2 + 2] [i_0 - 2] [i_0 + 2] [i_0 + 2]) | 0);
                            arr_18 [i_1] [i_1] [i_2] [i_1] [i_6 - 1] = 0;
                            arr_19 [i_3] [i_1] |= (((((~(arr_5 [i_6] [i_1] [i_0])))) | 345550296));
                        }
                        arr_20 [i_1] = (!var_10);
                        var_21 = ((32187 ? (((arr_10 [i_1] [i_1]) | (arr_7 [i_0 + 3] [i_1] [i_2]))) : (~var_11)));
                    }
                }
            }
        }
    }
    var_22 = (((((((3949417006 ? var_10 : var_7))) ? ((var_10 ? 11033617641775303925 : var_4)) : 3949417006)) < var_9));
    var_23 = (min(var_23, var_12));
    #pragma endscop
}
