/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 += ((~(arr_8 [i_2 + 2] [1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = (((((arr_8 [i_0] [i_1] [i_3]) ? (((arr_3 [i_1] [12]) ^ 252)) : ((-(arr_0 [i_0]))))) > (var_12 && var_11)));
                                var_20 = ((~((((max(224, (arr_4 [i_0] [i_1])))) ? ((max(var_16, (arr_8 [i_3] [i_3] [i_1])))) : (((arr_0 [i_0]) ? (arr_11 [i_4] [i_2] [i_0]) : var_16))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_11;
    var_22 = -59105257402458158;
    #pragma endscop
}
