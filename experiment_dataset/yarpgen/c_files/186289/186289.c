/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((-var_11 ? ((var_4 ? -3609656604702415239 : var_1)) : (!var_9)))) ? ((((max(-13330, 36751))) ? (-127 - 1) : ((0 ? -4717 : -362928096)))) : ((max(3, var_0)))));
    var_16 = 17884;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_17 = (117 == -117);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = ((-((-(arr_2 [i_0] [i_0])))));
                    arr_8 [i_0] [i_0] [13] [i_0] = ((((min((min(4112895874, 65535)), 61306))) ? 15468 : 4957562462008982290));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((((min(7804633978243214327, 8027726269686556326))) ? ((max(var_13, 1150260849))) : -2251799813685247)))));
                                var_20 = (max(9223372036854775807, 2251799813685247));
                                arr_16 [i_0] [i_1 - 3] [i_2] [i_3] [i_4] = ((~(-13 | -3609656604702415239)));
                            }
                        }
                    }
                }
            }
        }
        var_21 &= -12112257947555722776;
        arr_17 [i_0] = max(15421, 1057256503);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_22 &= arr_18 [i_5] [6];
        var_23 = (((arr_20 [i_5]) ? (arr_19 [i_5]) : (arr_19 [i_5])));
    }
    var_24 = (((((-((var_10 ? var_10 : var_0))))) ? 1 : ((min(-9223372036854775807, 0)))));
    #pragma endscop
}
