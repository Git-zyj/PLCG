/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_4, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 ^= var_10;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_16 = ((var_6 ? 38 : ((min(var_5, (arr_0 [i_0]))))));

                            /* vectorizable */
                            for (int i_4 = 4; i_4 < 18;i_4 += 1)
                            {
                                arr_12 [i_0] [13] [3] [i_0] [i_0] = 15858262401600473824;
                                var_17 -= ((arr_1 [i_2 + 3]) ? (arr_10 [i_0] [i_0] [i_2] [i_3]) : (var_4 + var_6));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_4;
    var_19 = 19689;
    #pragma endscop
}
