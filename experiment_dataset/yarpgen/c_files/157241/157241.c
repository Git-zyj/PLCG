/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_2);
    var_20 *= (min((~var_3), (min(var_2, var_14))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((((~(~1023))) == (((var_1 == (arr_1 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = (((min(70, 1019))) ? (arr_9 [i_0] [i_0]) : ((20229 ? (~6431) : ((min((arr_1 [i_2 - 1]), (arr_1 [14])))))));
                                var_22 *= (((((arr_4 [i_1 + 1] [i_3] [i_2 - 1]) | (arr_4 [i_1 + 1] [i_1] [i_2 - 1]))) | (min(((var_11 ? 22287 : var_11)), ((min(-20212, -30690)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
