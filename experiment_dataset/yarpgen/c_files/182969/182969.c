/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(((max(18111, 59058))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] = var_8;
                            var_17 = (min((((arr_2 [i_0]) ? var_6 : (((arr_3 [7] [10]) ? var_10 : (-9223372036854775807 - 1))))), ((((arr_0 [i_0]) ? ((var_0 ? var_4 : var_14)) : (arr_6 [i_1 - 1] [i_0 + 3] [i_2] [i_0 + 3]))))));
                            arr_10 [i_0] [9] [9] [i_2] [i_0] = ((!((!((max(6478, 3128)))))));
                            var_18 &= (max((!var_4), (arr_6 [i_0] [i_0] [i_2] [2])));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_19 = 0;
                    var_20 -= ((~((((arr_1 [i_0] [i_0 + 1]) > (arr_4 [i_1 + 2] [i_0]))))));
                }
            }
        }
    }
    var_21 = (max((max(((236 ? 59058 : var_11)), (~6478))), ((((max(4865, var_9))) % var_7))));
    #pragma endscop
}
