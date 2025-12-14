/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((247882848346725260 <= ((((var_8 >= (max(8677021167021781611, 63530)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = 65525;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_21 = 13111738911352379847;
                                arr_16 [i_3] [1] [i_2] [i_3] [i_3] = -8677021167021781616;
                                var_22 = ((((max(((0 ? (arr_10 [i_0] [i_1] [i_3] [i_1]) : (arr_7 [i_4] [23]))), 49356))) ? 14440 : (((arr_11 [i_0] [9] [i_2] [i_2] [16] [i_4]) + (min((arr_5 [i_0] [i_1]), 8446154044968001140))))));
                                arr_17 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((!(0 != 6499189718279671836)));
                                var_23 = ((var_3 ? (arr_2 [i_0] [i_2]) : ((((arr_5 [i_1] [i_1]) ? 2147483647 : (arr_4 [i_0] [i_1]))))));
                            }
                        }
                    }
                }
                var_24 = 4160749568;
                var_25 = ((var_11 ? (((arr_2 [i_0] [i_1]) ? (arr_2 [9] [i_0]) : 17372)) : var_16));
            }
        }
    }
    #pragma endscop
}
