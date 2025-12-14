/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_2, 7787074794066694195));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_11 = (arr_0 [i_0]);
                            arr_12 [i_3] [i_2] [i_0] |= 13587;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_12 *= (max(((min(21127, (arr_1 [i_1 - 2] [i_1 - 1])))), -490874025));
                            var_13 -= (arr_9 [i_4] [i_5] [i_4] [i_5] [i_4] [12]);
                            var_14 = (min(var_14, 2745914248740754664));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
