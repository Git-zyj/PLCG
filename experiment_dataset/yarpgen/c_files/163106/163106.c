/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    var_20 = 120;
    var_21 = (min(var_21, ((((max(1867625115, (max(var_17, 26791)))) <= var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_2] = ((93 != (min((-127 - 1), -8))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] [i_3] [i_2] [i_1] [i_0] = (min(-483738957, (((1323532809 - -483738957) - 554821897))));
                                arr_18 [i_2] = 1008;
                                arr_19 [i_3] [i_2] [i_0] [i_4] [i_4] = ((((((-25 ? 0 : var_14))) ? (((arr_14 [i_0] [i_1] [i_2] [i_3] [i_4 - 1] [i_4] [i_4]) ? 205164657007167882 : 32767)) : 127)));
                                var_22 = 483738959;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
