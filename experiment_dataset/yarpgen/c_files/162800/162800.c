/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~9058);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (((((var_6 ? var_2 : var_2))) ? -var_6 : ((~(arr_0 [i_0 + 1])))));
        arr_4 [i_0 - 1] [i_0 - 2] &= (-9062 || var_6);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_15 |= -109043454;
        var_16 = -891900704795680742;
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (arr_7 [i_2]);
        var_17 = ((~(0 & 119)));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                {
                    var_18 = (min((~-9062), ((~(var_8 & var_5)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_19 |= (-884553068 ? -353495472 : -3597660951170100076);
                                arr_24 [i_3] [i_4] [i_5] [i_4] = (((var_1 == (-127 - 1))));
                                var_20 ^= (arr_15 [i_5 - 1] [i_5 + 1] [i_5 + 1]);
                            }
                        }
                    }
                    var_21 = -8954285486084967042;
                    var_22 = ((var_12 >> (9492458587624584574 - 9492458587624584548)));
                }
            }
        }
        arr_25 [i_3] = ((min(224, (arr_7 [i_3]))));
        arr_26 [i_3] = (-1245329436533323700 ? 2896242112 : 37);
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_23 &= ((((((min(var_4, (arr_6 [i_8])))) ? 861525154 : 1673120981205083205))) ? (arr_6 [i_8]) : (arr_7 [i_8]));
        arr_30 [i_8] &= -1133593749;
        var_24 = ((((max((arr_5 [i_8] [i_8]), var_7))) ? (((var_8 / (arr_5 [i_8] [i_8])))) : 1398725180));
        arr_31 [i_8] [i_8] = (arr_5 [i_8] [i_8]);
    }
    var_25 = (-12 ? (-9223372036854775807 - 1) : 861637280);
    #pragma endscop
}
