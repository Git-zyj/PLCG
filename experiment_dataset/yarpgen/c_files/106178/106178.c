/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-4393 + (min(-var_11, -18259990105692513061))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_17 ^= (arr_2 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, (-9223372036854775807 - 1)));
                            var_19 = (max(((~(min(-2, var_5)))), (((arr_5 [i_0] [10] [i_1] [11]) ? (arr_5 [i_0] [i_1 - 2] [i_1] [i_1 - 2]) : (-9223372036854775807 - 1)))));
                            var_20 = (max(-var_10, (arr_4 [i_1])));
                        }
                    }
                }
                var_21 = (max(var_21, ((max(((~(arr_2 [i_0]))), ((min((arr_2 [i_0]), (arr_2 [i_0])))))))));
                var_22 = (min(var_22, ((((((~((31888 ? var_3 : (arr_7 [i_0] [i_0])))))) ? ((~(arr_6 [i_0] [1] [i_0] [1]))) : ((-(arr_5 [i_0 + 3] [0] [i_0] [i_0 + 2]))))))));
            }
        }
    }
    #pragma endscop
}
