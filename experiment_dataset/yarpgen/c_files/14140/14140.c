/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_19 -= (--1826385627);
                            var_20 = (((((-((var_17 ? (arr_3 [i_4]) : 3486515935))))) ? (min(2504045898, (arr_3 [i_2]))) : var_18));
                            var_21 = ((min(6, var_4)) & (!2504045916));
                        }
                    }
                }
            }
            var_22 = min(((((max((arr_8 [i_1] [i_1] [i_0]), -1442889708))) ? 2504045919 : 1)), var_4);
            arr_14 [i_0] = (var_4 < (min(18, (arr_8 [i_0] [7] [i_1]))));
            var_23 = ((var_17 ? (((((-1255347660 ? 2216615441596416 : 1))) ? (arr_4 [i_0 - 1]) : (~var_9))) : var_4));
        }
        arr_15 [0] [i_0] &= (arr_6 [14] [14]);
    }
    var_24 |= ((1370469731 ? ((var_1 % (var_15 || var_15))) : 1255347667));
    #pragma endscop
}
