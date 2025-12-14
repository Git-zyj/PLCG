/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((21923 ? -56 : 2849989082417607945));
    var_19 = ((((((((var_17 ? var_14 : var_6))) ? var_3 : var_10))) ? ((20 ? ((1 ? var_15 : var_16)) : 24572)) : 21923));
    var_20 = 1;
    var_21 = ((!(((-((var_17 ? var_0 : 2909332371)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_3] [i_2] [i_1] [i_1] = (!2147483647);
                                var_22 = ((-((((max((arr_6 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]), 224))) ? (~-3) : (max(-5517220357931617687, 7))))));
                                arr_15 [i_1] [i_1] = (arr_9 [i_0] [i_1] [8] [i_1] [i_1] [i_4]);
                            }
                        }
                    }
                    var_23 = (arr_11 [i_1] [i_1] [14] [i_1] [i_0 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
