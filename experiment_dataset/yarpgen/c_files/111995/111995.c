/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_1;
    var_20 = (max(var_20, var_7));

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_21 = ((-(max((arr_0 [i_0 + 1]), 9223372036854775807))));
        var_22 = -var_7;
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_23 = (max(var_23, (arr_3 [0] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_24 *= ((-557110388723106494 ? (arr_12 [i_1] [i_3]) : -var_5));
                        var_25 = 236;
                        var_26 = (((arr_10 [1] [i_3 + 1] [i_3 + 1] [i_4]) ? (arr_8 [i_1] [2] [12]) : (((arr_2 [i_1] [i_1]) ? (arr_6 [i_1 + 1] [12] [8]) : (arr_9 [i_1] [i_1] [i_1])))));
                        var_27 = ((!(arr_1 [i_1 - 2])));
                    }
                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        var_28 = (max(var_28, ((((-8669747144143922116 - (arr_9 [i_5 - 1] [i_2] [i_3])))))));
                        var_29 += ((var_10 ? (arr_6 [i_1 + 3] [i_3 + 3] [i_5 - 2]) : (~6390326567849795411)));
                        var_30 = (((((~(((!(arr_3 [i_1] [i_1]))))))) ? (((arr_13 [i_1 - 1] [i_1]) ? 13315583194140712077 : (((min(236, var_2)))))) : (((((((arr_7 [i_1]) + var_13))) ? 3176037755 : 0)))));
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_31 = (arr_18 [5] [i_2] [5] [i_3] [i_6]);
                        arr_20 [i_1] = (((arr_14 [i_3 - 2] [i_1] [i_3 - 2] [i_3 + 3] [i_3] [i_3 + 2]) ? -119 : (arr_9 [i_2] [12] [i_1])));
                        var_32 = (min(var_32, ((((var_0 ? var_17 : 4061735328))))));
                    }
                }
            }
        }
    }
    var_33 = (max(var_33, var_1));
    #pragma endscop
}
