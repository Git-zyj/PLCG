/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (min(((((!18446744073709551614) << (var_13 - 407597217)))), ((min(32767, -5375961598857548508)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 &= (max((((arr_4 [i_0] [i_0]) - var_8)), var_4));
                var_19 = (((max((arr_5 [i_0] [i_0] [i_0]), var_9)) * ((min((arr_2 [i_0] [i_1] [i_0]), var_12)))));
                arr_6 [i_1] &= (min(var_1, ((var_3 & (arr_0 [i_0])))));
                var_20 = ((~(min((var_11 | 226), (arr_2 [i_0] [i_1] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_21 = ((!((((~var_8) / ((238 << (202 - 196))))))));
                            arr_12 [i_2] = 54;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
