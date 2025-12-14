/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= 2898046545;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (((!((((~var_2) ? ((max(58093, 28782))) : (3056 & 17913)))))))));
                var_20 = var_15;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_21 = ((((((3060 * (arr_5 [i_0] [i_0] [i_2]))))) * ((max((arr_4 [i_0] [i_0]), (arr_3 [i_1] [i_1]))))));
                            var_22 &= (max(var_9, var_3));
                        }
                    }
                }
                var_23 = var_1;
                var_24 = (max(var_24, 12));
            }
        }
    }
    #pragma endscop
}
