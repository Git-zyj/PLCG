/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_4);
    var_15 = max(var_4, ((((!var_5) * 1058508713))));
    var_16 = -var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 &= -1058508727;
                var_18 = (((-(arr_1 [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_0] [i_0] [i_3] [i_4] = var_2;
                                var_19 = (min(var_19, ((((!var_3) | (max(-1058508701, 1058508715)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((~(((!var_5) - (18 >> 7)))));
    #pragma endscop
}
