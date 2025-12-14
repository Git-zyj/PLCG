/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0 - 1] [i_0] [i_1 + 3] = (min((max((arr_4 [i_1 - 1] [i_0 - 1]), (arr_0 [i_0 - 1]))), var_5));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, ((((arr_9 [i_0 - 2] [i_0 + 1]) % 200)))));
                            var_15 ^= (((arr_8 [i_2] [i_1] [i_1 + 2]) / ((min((arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2]), (arr_8 [i_2] [4] [i_1 + 4]))))));
                        }
                    }
                }
            }
        }
    }
    var_16 &= ((((!-31905) ? var_10 : 57)));
    var_17 ^= var_4;
    var_18 = var_9;
    #pragma endscop
}
