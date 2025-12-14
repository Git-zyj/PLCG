/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_11;
    var_14 = var_0;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_15 -= ((var_0 ? var_6 : var_6));
        var_16 += ((var_10 ? var_2 : var_9));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((var_3 >> (var_3 - 104))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = (var_11 > var_9);
                                arr_14 [i_0] [i_3] [i_0] [i_3] [3] [6] [i_3] = (5896 | 7602101653830315631);
                                arr_15 [8] [i_1] [i_2] [i_3] [i_3] [i_4] = 41835;
                                arr_16 [3] [i_1] [i_2 - 1] [i_3] [i_3] = (var_7 != var_1);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
