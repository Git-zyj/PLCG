/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_12 *= (((arr_5 [i_1 - 2]) ? ((((arr_2 [i_2]) < var_0))) : ((var_4 ? (arr_1 [i_2]) : (arr_4 [i_2])))));
                        var_13 = (((var_10 ? var_1 : var_0)));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_14 = (max((((-(((arr_6 [i_4] [i_4]) * (arr_10 [i_0 - 1] [i_1] [i_2] [i_1] [i_4])))))), (max(-var_5, ((min((arr_0 [i_1]), var_11)))))));
                        arr_12 [i_0] [i_4] [i_1] [i_1] [i_0] = (((24 & 1) & (((arr_1 [i_0]) | (arr_1 [i_0])))));
                    }
                    var_15 = (((arr_5 [i_0 - 1]) ^ ((((arr_5 [i_0 + 1]) ? (arr_5 [i_0 + 2]) : (arr_5 [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((max(1, (arr_18 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 2]))))));
                                var_17 ^= (max((((((arr_11 [i_6] [i_1 - 1] [i_6] [i_5] [i_1 + 1]) + 2147483647)) << (((((arr_11 [i_0] [i_1] [i_5] [i_6] [i_1 + 1]) + 91)) - 29)))), ((min((arr_1 [i_5]), (max((arr_14 [i_0] [i_1] [i_5]), var_0)))))));
                                var_18 += (((((-(((arr_5 [i_0]) ? var_4 : (arr_3 [i_0] [i_6] [i_6])))))) ? ((~((1 ? 1 : 1)))) : ((min((arr_14 [i_0 - 1] [i_0 + 1] [i_6]), (arr_4 [i_5]))))));
                                var_19 = ((1 * 1) ? (((arr_8 [i_5] [i_0 + 2] [i_2] [i_5] [i_0]) ? (arr_2 [i_0]) : ((((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]) >> (((arr_16 [i_2] [i_1 - 3] [i_1] [i_5]) - 16933370239231150216))))))) : (max((max(var_3, (arr_0 [i_0]))), (arr_3 [i_0 + 1] [i_0] [i_0]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((((max(var_7, var_6))) ? (var_8 * var_9) : (min(var_7, var_2)))) >= var_2));
    var_21 = min(var_8, (var_4 ^ var_5));
    var_22 = (min(((((max(2669, 21602))))), ((((min(var_8, var_10))) | (max(var_2, var_4))))));
    #pragma endscop
}
