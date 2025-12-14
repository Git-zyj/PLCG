/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 ^= (arr_1 [i_0] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_20 = ((0 ? 773273880 : -37));
                            arr_10 [i_0] [i_0 - 1] [i_0] = (((((arr_8 [i_0] [i_1] [i_3]) ? (((arr_1 [i_3] [i_2]) ? 939524096 : (arr_1 [8] [i_1]))) : (arr_6 [i_3 + 1] [i_0 - 1] [i_2])))));
                        }
                    }
                }
            }
        }
    }
    var_21 = ((-(((66 ? var_7 : 4792934856156100115)))));
    #pragma endscop
}
