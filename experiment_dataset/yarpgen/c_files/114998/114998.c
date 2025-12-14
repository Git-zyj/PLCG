/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_1] |= (((var_1 ? ((48777 ? (arr_3 [i_1] [i_0]) : 2833251665495813985)) : (((min(var_5, -22547)))))));
                arr_7 [i_0] = ((2833251665495813985 ? ((var_9 ? (min(15613492408213737639, var_2)) : ((min(2637186049, -959717089))))) : var_8));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_11 = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                        arr_13 [i_0] = var_6;
                    }
                    var_12 -= ((-(((var_0 != (arr_9 [i_0] [i_0] [i_1] [i_0]))))));
                    var_13 = ((min(var_0, var_2)));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_14 = ((59 ? (225 | -22559) : ((22544 ? var_4 : 1180914815))));
                                var_15 += (((((var_3 ? var_9 : 9388))) ? ((((var_5 ? 3018075052175278974 : var_9)))) : (((-22547 ^ var_9) % 9))));
                                var_16 += max(22225, (min((arr_9 [i_4 + 4] [i_2] [i_1] [i_2]), 22547)));
                                var_17 -= (max((12392098574804249176 - -9389), ((max(((-1584807964 ? var_1 : 21132)), var_9)))));
                            }
                        }
                    }
                    var_18 += ((-(arr_0 [i_1])));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_19 |= var_7;
                    arr_21 [i_0] [i_0] [i_6] [i_0] = var_3;
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_24 [i_0] [i_1] [i_0] = (((var_9 + 977812519) ? 238241741 : (min(1525432101, var_8))));
                    var_20 += (max((max(var_4, (var_6 / var_9))), ((max((var_0 - var_3), ((var_9 ? var_5 : 95)))))));
                }
                arr_25 [i_0] [i_0] = var_3;
            }
        }
    }
    #pragma endscop
}
