/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (max(((~(arr_4 [i_0 - 2]))), ((~((((arr_3 [i_0 - 2]) < var_3)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_17 = (max((arr_10 [i_1] [i_1] [i_2 - 1] [i_1] [i_2]), (((arr_10 [i_2] [i_2] [i_2 + 1] [i_3] [i_2 + 1]) - var_3))));
                            var_18 = (arr_6 [i_3] [i_2 + 1] [i_1] [i_0]);
                        }
                    }
                }
                var_19 &= (((arr_0 [i_0 + 1]) ? var_2 : ((((arr_1 [i_0 + 1]) == (min((arr_3 [i_0 - 2]), (arr_6 [i_0] [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    var_20 = (max(var_20, (((((max((var_4 && var_9), (max(var_15, var_2))))) ? (((var_4 ? var_11 : (max(var_14, var_10))))) : var_13)))));
    var_21 = (max(var_21, var_2));
    #pragma endscop
}
