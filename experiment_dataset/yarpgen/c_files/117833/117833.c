/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (arr_0 [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = ((1649099288 ? ((3217008636665526902 ? 1055078986848755303 : (-32767 - 1))) : ((~(min(-3217008636665526897, -1649099278))))));
                                arr_13 [i_4] [i_3] [i_2] [i_3] [i_3] = var_1;
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_0] = (min((arr_0 [i_1]), ((7 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                var_13 = (min(var_13, (-1837496222 || 121)));
            }
        }
    }
    var_14 = 1120770416;
    var_15 = ((((((var_10 > ((max(32767, 38901))))))) >= (max(var_10, var_3))));
    #pragma endscop
}
