/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = (((var_12 ? (var_14 || 93) : (max(2303591209400008704, (arr_7 [i_3] [i_3] [i_3] [i_3]))))));
                                var_17 -= (93 == -4591996479686681858);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
