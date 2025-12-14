/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((max(var_11, var_10))) ? (-1708430635 + var_3) : (((var_8 ? 3999570221 : var_0)))))) ? 65535 : (min((((1841946764 ? 295397096 : 3005434500))), (max(65535, -9223372036854775804))))));
    var_14 ^= var_0;
    var_15 = (((57316 ? var_9 : 2147483647)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = (arr_2 [3]);
                                var_17 -= 13740;
                                var_18 = (((((-63 | (((arr_13 [i_0] [i_1] [i_2] [i_0] [i_0]) ? (arr_0 [i_0] [i_1]) : var_9))))) ? ((-((26 ? (arr_7 [i_0] [i_3] [i_2] [i_0]) : (arr_10 [i_0] [0] [i_0] [i_0]))))) : (arr_6 [i_0] [14] [11])));
                            }
                        }
                    }
                    var_19 = (arr_12 [0] [i_1] [i_2] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
