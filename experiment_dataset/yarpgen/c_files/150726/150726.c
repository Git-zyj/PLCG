/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_0 > var_5);
    var_17 ^= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = 1733831187;
                    arr_7 [i_0] = 24443;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = (((arr_0 [i_1] [i_0]) ? var_4 : ((min((arr_10 [i_3] [i_3 - 1] [i_3 - 1] [i_1] [i_1 - 1] [i_1]), var_13)))));
                                var_20 = var_10;
                                var_21 = 16233;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
