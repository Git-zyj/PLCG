/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_10 += 166773490;
        var_11 |= var_8;
        var_12 = ((!(arr_0 [i_0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_13 = ((-((var_0 ? ((((arr_9 [i_2] [i_2]) ? (arr_3 [i_1]) : (arr_4 [i_3])))) : (min(1, var_8))))));
                            var_14 = min((166773493 & 231), (min((((arr_3 [i_1]) ? 166773490 : (arr_8 [i_1] [i_3]))), (!4128193801))));
                            arr_13 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] = ((0 ? 43 : 0));
                        }
                    }
                }
                arr_14 [i_2] = (((arr_3 [i_2]) ? ((var_2 ? (max((-9223372036854775807 - 1), (arr_10 [i_2]))) : (((arr_3 [i_1]) - (arr_10 [i_2]))))) : ((-((-(arr_8 [10] [i_2])))))));
                var_15 = -166773481;
            }
        }
    }
    var_16 = (max(var_16, (((166773487 - (((((var_3 ? var_0 : var_7))) - (((-9223372036854775807 - 1) + 169)))))))));
    var_17 = ((!((((~166773490) ? (var_3 ^ 5997) : (min(var_1, var_3)))))));
    #pragma endscop
}
