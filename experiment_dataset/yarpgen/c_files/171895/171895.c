/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (((((var_0 ^ (var_6 + var_4)))) ? (max((max((arr_1 [i_0]), var_6)), ((max(-2005349853, 3))))) : (((-(((-3 + 2147483647) >> 16)))))));
                var_16 -= (arr_1 [i_0]);

                /* vectorizable */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_17 += (arr_6 [i_0]);
                    var_18 *= -16233;
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_19 = (min(var_19, (arr_1 [i_1])));
                    var_20 = (max(var_20, (arr_4 [i_0] [i_0] [i_0])));
                }
                var_21 = ((((((arr_0 [i_1]) ? 674382407 : (arr_0 [6])))) ? ((max((arr_0 [i_1]), var_7))) : var_14));
            }
        }
    }
    var_22 = var_0;
    var_23 = (((max(-16, var_9)) & ((((max(-16, var_13)))))));
    #pragma endscop
}
