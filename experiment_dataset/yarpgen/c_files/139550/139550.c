/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 ? (((-((max(62965, var_9)))))) : (-5127 - 62955)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = 2565;

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        var_12 = ((62965 ? 11447317223306687677 : 127));
                        var_13 = ((~(((arr_8 [i_3 - 1] [11]) / -5132))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_14 = max((max(-25392, ((1728638069 ? 11447317223306687677 : 2565)))), (~-1423823512));
                                arr_19 [i_0] [i_1 - 1] [i_2] [i_0] [5] = ((~(max(49, ((~(arr_6 [i_0] [i_1] [i_2] [i_4])))))));
                                var_15 = ((~(min((((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? 62980 : var_3)), ((-5117 ? 1525443198 : 221))))));
                            }
                        }
                    }
                    var_16 = ((6999426850402863962 | 9858713149250969552) <= -var_5);
                    var_17 = ((~((max((arr_8 [i_0 - 2] [i_0 - 1]), (arr_8 [i_0 - 3] [i_1 - 1]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 12;i_7 += 1)
        {
            {
                arr_24 [i_6] = (3884113767334598663 * -784957501);
                arr_25 [i_6] = (min(784957479, 4004));
                var_18 = 1;
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_33 [i_6] [i_6] [i_6] [i_6] [i_6] = ((-(max(62972, (~255)))));
                                arr_34 [2] [i_7] [2] [i_9] = ((((((((-784957501 ? 3578967048 : -23522))) && 101))) / (min(1, 784957527))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
