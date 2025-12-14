/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    arr_7 [8] [8] [8] [i_2] = ((arr_3 [i_1] [i_2]) ? -1 : var_6);
                    arr_8 [i_2] [0] [i_2] = ((var_8 ? (arr_4 [i_1]) : 1));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    var_19 |= ((((((var_0 ? (arr_9 [10] [10] [10] [6]) : (arr_5 [1] [3] [5] [5]))))) ? (((((min((arr_10 [2] [2] [3] [2]), var_16)) >= (((max(21656, 0)))))))) : (((arr_1 [i_0]) / -1))));
                    var_20 = ((+((var_14 ? (arr_10 [i_0] [i_0] [i_3] [i_3]) : 4318429284425304161))));
                    var_21 ^= (arr_1 [i_0]);
                    var_22 = ((+((((arr_3 [8] [i_0]) <= (max((arr_3 [i_1] [1]), var_2)))))));
                    arr_11 [7] [4] [i_0] [i_0] = -16130736740423853;
                }
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    var_23 *= (arr_9 [11] [11] [11] [11]);
                    arr_16 [i_4] = ((-8323743703512621277 ? -var_0 : ((((max((arr_14 [9] [9]), (arr_2 [i_0] [i_0])))) ? (arr_3 [i_1] [i_1]) : var_2))));
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    arr_20 [4] [4] [4] = (~-19);
                    var_24 = (((var_10 ^ -4) ? var_5 : (arr_1 [i_0])));
                }
                var_25 = ((max(var_1, (((arr_18 [8]) * var_13)))));
                var_26 += ((((min(-19419, -4318429284425304162))) ? (((min(var_5, var_15)))) : (((arr_12 [i_0] [6] [i_0]) ? (arr_12 [i_0] [i_1] [i_1]) : 70368744177663))));
                arr_21 [10] [11] [9] = (((((~(arr_6 [9] [9] [9])))) ? (max((arr_5 [i_0] [i_0] [9] [i_1]), (min((arr_5 [i_0] [i_0] [i_0] [i_0]), var_1)))) : var_16));
            }
        }
    }
    var_27 -= (max(138, var_17));
    var_28 += ((!((max((min(1360503759902892809, -1)), 49506)))));
    var_29 = max(var_2, var_0);
    #pragma endscop
}
