/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    arr_6 [i_0] = ((~(min(45, var_8))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = 13;
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((+(min((13 - var_16), 243))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((!(-9223372036854775807 - 1))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] = (247 * 250);
                                var_21 = (max(var_21, (((~(min(16, 13)))))));
                                arr_14 [i_2] [i_2] = ((~(max(251, -467096271))));
                            }
                        }
                    }
                }
                var_22 = (min(var_22, 27));
                arr_15 [i_0] [i_0] = ((min(1, (~249))));
                arr_16 [i_1] [i_1] = max(6, 9223372036854775807);
                var_23 = -281284780;
            }
        }
    }
    var_24 = max((((!32) / (~8))), (var_10 < var_17));
    #pragma endscop
}
