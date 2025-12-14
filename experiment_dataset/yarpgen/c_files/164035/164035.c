/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] [i_1 + 3] [i_2] [i_0] = var_1;
                            var_13 = ((4080 ? 5854754237532080029 : 23431));
                            arr_13 [i_0] [i_0] [i_2] [i_2] = var_5;
                            arr_14 [i_0] [i_2] [i_2] [0] = ((-6611425339791529452 ? -23433 : 149));
                            var_14 = -5854754237532080010;
                        }
                    }
                }
                arr_15 [i_0] [i_1] [i_1] = ((var_1 - (max(((-23431 - (arr_0 [i_0]))), 1))));
                arr_16 [i_0] [i_1] [i_1] = (arr_10 [i_0] [i_1] [i_0]);
            }
        }
    }
    var_15 = var_0;
    #pragma endscop
}
