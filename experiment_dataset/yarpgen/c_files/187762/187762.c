/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = (((25168 ? (arr_0 [i_0]) : (arr_1 [i_0]))));
                var_15 = (((arr_1 [i_0]) / (max((arr_4 [0] [i_1] [i_1 + 2]), (((arr_2 [i_1]) | (arr_3 [i_0] [i_1])))))));
                var_16 ^= arr_3 [i_1] [i_0];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_17 ^= (((arr_8 [i_3 + 2] [7] [i_3] [i_3] [i_1 - 1]) ? 25192 : ((-(arr_4 [i_3 - 2] [10] [i_2])))));
                            var_18 = (((min((arr_3 [i_3 + 2] [i_1 + 2]), (arr_3 [i_3 + 1] [i_1 - 1]))) ? (arr_3 [i_3 + 1] [i_1 - 1]) : (arr_3 [i_3 + 3] [i_1 + 2])));
                            var_19 = (((((var_11 || (arr_7 [i_1] [0] [i_1 + 2] [i_3 + 3])))) / var_2));
                            var_20 = (max(var_20, ((((max((max((arr_8 [4] [i_1] [4] [i_1] [i_1]), (arr_7 [0] [i_3] [0] [i_3]))), ((var_13 ? -130 : (arr_2 [i_3]))))) != (arr_6 [i_3 + 3] [6] [6] [i_0]))))));
                        }
                    }
                }
                var_21 = (!var_6);
            }
        }
    }
    var_22 = (((min(var_4, var_8)) >= var_4));
    var_23 = (max(8513353518605100366, var_4));
    #pragma endscop
}
