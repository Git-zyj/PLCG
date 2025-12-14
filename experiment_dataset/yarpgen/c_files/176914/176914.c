/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_13 |= (((!(arr_8 [10] [2] [i_3 + 1] [i_3 + 1] [i_1]))));
                            arr_9 [i_2] [i_1] [i_2] [i_1] = 14723216320309291775;
                            arr_10 [2] [i_0] [2] [i_1] [i_2] [2] = var_10;
                        }
                    }
                }
                var_14 = ((min((min(var_10, 3723527753400259845)), ((max(var_2, (arr_4 [i_0] [i_0] [i_0])))))));

                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_15 = (min(var_15, (((((min(-3723527753400259851, (((2614203703785977196 ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_1]) : var_1)))))) ? (((((!var_1) > var_3)))) : ((((max(14723216320309291763, var_0))) ? ((2614203703785977196 ? var_8 : var_7)) : (var_12 && var_7))))))));
                    arr_13 [i_0] [i_0] = var_2;
                    arr_14 [i_0] [i_0] [i_0] = 47736;
                }
            }
        }
    }
    var_16 = var_10;
    #pragma endscop
}
