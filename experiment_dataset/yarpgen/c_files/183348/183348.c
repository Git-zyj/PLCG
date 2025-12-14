/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((max(4096, 1980001944)) == (max(68, 8210840081813705785)))) ? var_18 : (min(var_5, (-8210840081813705797 - -8210840081813705796)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 = (arr_5 [i_0] [i_1] [i_2]);
                                arr_14 [i_3] = var_15;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] = (~((~((61 & (arr_8 [i_0] [i_1]))))));
                                var_22 = ((~(arr_6 [i_5] [i_1] [i_1 + 1])));
                            }
                        }
                    }
                    var_23 = (1 & 9223372036854775807);
                }
            }
        }
    }
    #pragma endscop
}
