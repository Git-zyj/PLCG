/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] |= (min(var_6, (((min(var_5, 35)) % ((min(1165298240, var_7)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = var_9;
                                var_13 = ((1 ? (!var_7) : (arr_3 [i_0] [i_1])));
                                arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] = (220 << (8851259770018250500 - 8851259770018250481));
                                var_14 = ((!((max((arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]), 77)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (max(var_15, var_0));
    #pragma endscop
}
