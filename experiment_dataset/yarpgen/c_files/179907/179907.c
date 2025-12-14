/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [10] [i_1] [6] [i_2] = (min((max(4927391950600149852, -77)), 5));
                    var_17 = (max(var_17, 4927391950600149852));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_13 [i_0] [1] [3] [1] [i_3] = max((max(1, 7)), (min(7, ((min(46039, 61))))));
                        arr_14 [i_0] [i_1] [i_1] [i_3] [i_2] [i_1] = -51;
                    }
                }
            }
        }
    }
    var_18 = 16710450190188378213;
    var_19 = (min(((min(var_14, (!1)))), (max(-45867, 37250))));
    #pragma endscop
}
