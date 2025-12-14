/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(-7199283028890352598, -7199283028890352598));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_4] [i_0] [i_0] &= -7199283028890352598;
                                var_20 = (min((((((min(var_11, var_10))) ? (((255 * (arr_6 [i_1])))) : 1662492560))), ((+(((arr_10 [i_0] [i_1] [i_1] [i_3]) & (arr_5 [i_3] [i_0])))))));
                                var_21 = (min((min((arr_1 [i_3 + 1] [i_3 + 1]), (arr_13 [i_3 - 1] [i_3] [i_3 + 2] [i_3 - 1] [i_3 + 2]))), (((arr_13 [i_3 + 2] [i_3] [i_3 + 2] [i_3 - 1] [i_3 + 1]) ? (arr_1 [i_3 + 1] [i_3 - 1]) : (arr_1 [i_3 - 1] [i_3 + 2])))));
                            }
                        }
                    }
                }
                var_22 = min(var_17, ((min((min(var_9, (arr_8 [2]))), -7199283028890352598))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_21 [i_1] [i_0] [i_0] [i_1] = ((+((min((arr_11 [i_0] [i_1] [i_5] [i_6] [i_6]), (arr_11 [i_6] [i_1] [i_5] [i_1] [12]))))));
                            var_23 ^= ((1 ? ((((((arr_13 [10] [i_0] [i_1] [i_5] [10]) + 0)) + var_0))) : ((255 ? 3740361404 : var_1))));
                            var_24 = ((var_6 ? (arr_13 [i_0] [i_0] [i_1] [i_5] [i_0]) : (arr_4 [i_5] [i_1] [i_0])));
                            var_25 = (min(var_25, ((min((((min(var_9, var_17)))), (min((((21682 << (205 - 201)))), (((arr_9 [2] [5] [i_5] [i_6] [2]) / -13140)))))))));
                            arr_22 [11] [6] [i_0] [i_6] = (arr_1 [i_5] [i_5]);
                        }
                    }
                }
            }
        }
    }
    var_26 = (min(var_0, 10));
    var_27 = var_2;
    #pragma endscop
}
