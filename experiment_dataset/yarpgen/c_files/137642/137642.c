/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_1 ? ((-((var_9 ? 7 : var_7)))) : -32540));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] = 1;
                                var_21 = (-2 > var_9);
                                var_22 += (+(((arr_9 [i_3]) ? var_1 : (((var_6 ? var_15 : 10489))))));
                            }
                        }
                    }
                }
                var_23 = 5233136151685624720;
            }
        }
    }
    #pragma endscop
}
