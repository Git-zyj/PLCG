/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_8;
                                var_13 = (arr_8 [i_0] [i_0] [2] [i_0]);
                            }
                        }
                    }
                    var_14 = var_6;
                    var_15 = (((min((arr_6 [i_0] [i_2 + 2] [i_0]), (((7619091699013504182 ? var_1 : (arr_8 [i_0] [i_2] [i_1] [i_0])))))) * (arr_9 [i_1] [i_0] [i_1] [i_2 + 1])));
                    var_16 = (((((((arr_7 [i_2 - 2] [i_2] [i_2 + 1] [i_2 - 2]) > (arr_2 [i_2 - 2] [i_0] [i_2 + 1]))))) - (((arr_2 [i_2 - 2] [i_0] [i_2 + 1]) ? (arr_2 [i_2 - 2] [i_0] [i_2 + 1]) : (arr_2 [i_2 - 2] [i_0] [i_2 + 1])))));
                    var_17 = ((+(((arr_10 [i_0] [17] [i_0] [i_2 + 3] [i_2]) ? var_11 : var_10))));
                }
            }
        }
    }
    var_18 = ((!(var_3 * var_2)));
    var_19 += (min((max(((max(93, 3))), 2296510041)), ((((511 ? 33553920 : var_4))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    arr_20 [i_7] [i_6] [i_7] = (i_7 % 2 == 0) ? (((2476268990 ? (((((arr_2 [i_5] [i_7] [i_5]) + 201)) - (arr_3 [i_5] [11]))) : ((((arr_6 [i_7] [i_6 - 2] [i_7]) - (arr_6 [i_7] [i_6 + 1] [i_7]))))))) : (((2476268990 ? (((((arr_2 [i_5] [i_7] [i_5]) + 201)) + (arr_3 [i_5] [11]))) : ((((arr_6 [i_7] [i_6 - 2] [i_7]) - (arr_6 [i_7] [i_6 + 1] [i_7])))))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_20 = ((((arr_14 [i_7] [i_6]) + (max((arr_15 [0] [0]), (arr_8 [i_7] [i_6] [i_6] [i_6]))))));
                                var_21 = (((~1818698283) ? (max(115, -4732298760049189165)) : ((((var_6 || (!63)))))));
                                var_22 = (max(var_22, (((((((((arr_7 [i_5] [i_5] [i_5] [i_8]) ? var_2 : 1)) % ((var_4 >> (var_7 - 5608848111049311268)))))) ? ((-((min(var_9, -93))))) : ((((min((arr_24 [i_8] [2]), var_4))) ? ((min((arr_10 [i_5] [i_5] [i_5] [13] [i_5]), var_9))) : (arr_12 [i_5] [i_6] [i_7] [i_8] [5] [i_9]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
