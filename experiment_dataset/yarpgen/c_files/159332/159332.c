/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 ^= ((!(!var_4)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = (max((max(var_14, (arr_3 [i_0] [2]))), (var_11 || var_3)));
                            var_19 ^= (((1556647069862982661 - 1) - (max((min(16890097003846568957, -1)), (arr_1 [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_20 ^= (max(var_4, ((((16890097003846568951 << (252 - 214))) & (!var_12)))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                var_21 = var_2;
                arr_18 [i_5] = ((var_10 >= (arr_13 [i_5])));
            }
        }
    }
    var_22 ^= (((var_10 < var_10) ? ((((16890097003846568951 ? 0 : 16890097003846568951)) | var_15)) : (var_0 == var_9)));
    var_23 = var_11;
    #pragma endscop
}
