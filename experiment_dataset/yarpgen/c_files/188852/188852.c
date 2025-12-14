/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_10;
    var_17 = var_1;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] |= ((arr_1 [i_0]) ? ((((max(var_10, (arr_0 [i_0])))) ? ((var_0 ? 8950725528079188219 : -8011704278381065425)) : -1123267631196396172)) : 1123267631196396171);
        var_18 = max((arr_1 [i_0]), 0);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_19 = (-9223372036854775807 - 1);
        arr_7 [i_1] = ((var_0 < (min((((arr_5 [i_1] [i_1]) * -1)), 7027807442105136081))));
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_20 = (max(var_20, -var_10));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_21 = var_2;
                            var_22 = max(-12, (max(var_9, (arr_10 [i_4] [i_2 + 1]))));
                            var_23 = (min(var_23, (arr_9 [i_2 - 2] [i_5 + 3])));
                        }
                    }
                }
                var_24 = (min(var_24, ((~(max(-7333570582225060017, 7))))));
                var_25 = (-9223372036854775807 - 1);
            }
        }
    }
    #pragma endscop
}
