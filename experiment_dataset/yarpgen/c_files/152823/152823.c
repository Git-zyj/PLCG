/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = (arr_3 [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = ((((((18508 & (arr_7 [i_2] [i_2]))) != ((var_5 ? 135 : (arr_4 [i_0] [i_0]))))) && (((-(arr_4 [i_0] [i_4]))))));
                                var_19 = (max(var_19, ((min((((((var_5 ? 10174860111599335388 : var_14))) ? (arr_8 [i_3 - 1] [i_1] [i_2]) : (arr_8 [4] [4] [10]))), -18508)))));
                                var_20 = (!var_14);
                                var_21 = (min((!11), ((-(arr_2 [i_3 - 1] [i_1] [i_3])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_0, (((var_2 ? var_11 : var_10)))));
    var_23 = var_1;
    #pragma endscop
}
