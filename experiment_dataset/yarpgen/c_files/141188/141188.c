/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (max(var_18, -var_8));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = (min((arr_6 [i_0] [i_0] [i_2]), -var_6));
                    var_19 = (min(((min(var_14, var_11))), var_9));
                    var_20 -= (min(((63348 ? 37 : (min(1, 0)))), (~37)));
                    arr_9 [i_0] [i_0] [1] [i_0] = (~224);
                }
                var_21 = (min(-var_14, ((~(min((arr_0 [i_0]), var_14))))));
                var_22 -= (arr_3 [0] [i_1] [8]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_23 = 225;
                            arr_15 [7] [i_0] [i_0] [1] = ((min(((max(var_3, 44542))), (~var_3))));
                        }
                    }
                }
            }
        }
    }
    var_24 = (max((((~var_6) ? (max(var_14, var_4)) : 83)), var_12));
    #pragma endscop
}
