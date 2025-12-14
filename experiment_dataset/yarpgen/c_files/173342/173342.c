/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(var_8 & var_15)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, 23756));
                            arr_8 [3] [7] [11] [0] [i_2] = var_10;
                            arr_9 [i_2] = var_2;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                {
                    var_19 = (arr_4 [i_4] [4] [1] [i_4]);
                    arr_13 [2] [i_0] [i_0] [24] &= (((((-8073 ? -281238280 : 2575303303))) - (arr_1 [20] [22])));
                    arr_14 [10] [i_4] [22] = ((-(max(-281238280, 16140901064495857664))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    var_20 = (((((~(arr_11 [8] [i_5] [3] [15])))) ? (((~(arr_5 [1] [1] [13] [i_5])))) : ((2494301852 ? 14244506865019972269 : 14244506865019972269))));
                    var_21 = (((arr_2 [i_0]) ? 4202237208689579347 : 7937780907861823864));
                }
            }
        }
    }
    var_22 = ((-((1 ? var_4 : 3968))));
    var_23 = ((var_6 || (4294967295 || 1879527282)));
    #pragma endscop
}
