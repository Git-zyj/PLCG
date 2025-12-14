/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_18 -= ((((670676061 ? -670676057 : 25)) < (((((((arr_6 [i_3]) == -670676075))) <= (arr_2 [i_2] [13]))))));
                        var_19 = (max(var_19, 268435455));
                        var_20 *= (min(-670676061, -670676057));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_21 = (max(var_21, (arr_0 [i_4] [i_2])));
                        var_22 = (min(var_22, ((((((arr_12 [i_0] [i_1] [i_1] [i_1] [i_0]) ? (arr_12 [i_0] [i_0] [i_2] [i_2] [i_1]) : (arr_12 [i_4] [i_4] [i_2] [i_1] [i_0]))) - -112)))));
                    }
                    arr_15 [i_0] = var_12;
                }
            }
        }
    }
    var_23 = ((1 + (((((max(956542975, 3753376336340194193))) ? (-670676044 & 670676044) : ((max(27243, 8418))))))));
    var_24 = 18;
    #pragma endscop
}
