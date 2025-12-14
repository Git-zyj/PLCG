/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((max((((-9223372036854775807 - 1) ^ -1318602141562520554)), (max(var_1, var_3)))) - var_2));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (-9223372036854775807 - 1)));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] [i_1] = -1406171739765706083;
                    arr_10 [i_1] = ((((((((max(var_3, 1))) || (max(var_0, var_6)))))) != ((~((var_0 ? 63530 : -1406171739765706088))))));
                    var_12 += ((-((-1406171739765706083 ? ((((var_5 <= (arr_0 [0] [0]))))) : (arr_3 [i_0] [i_0])))));
                }
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    var_13 = (max(((max((max((arr_4 [15] [15]), var_7)), (42076 > var_7)))), (((var_0 / -1224585806) | (max((arr_0 [i_0] [14]), 2147483647))))));
                    var_14 = (i_1 % 2 == 0) ? ((((min((arr_5 [i_1]), (arr_5 [i_1]))) >> (((arr_7 [i_1]) - 39))))) : ((((min((arr_5 [i_1]), (arr_5 [i_1]))) >> (((((arr_7 [i_1]) - 39)) - 96)))));
                    var_15 = (min(var_15, -99));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_16 ^= var_5;
                                var_17 = (arr_12 [i_3 + 1] [i_0 - 2]);
                                var_18 ^= (max((min((min(var_4, 154134680)), ((min(-2147483641, var_7))))), (+-1)));
                                var_19 = (min(var_19, ((-(min(5, 1406171739765706079))))));
                                arr_22 [i_1] = 536739840;
                            }
                        }
                    }
                    var_20 = var_9;
                }
                arr_23 [i_1] [i_1] = ((((((var_0 && (var_3 - var_1))))) > 1406171739765706079));
            }
        }
    }
    #pragma endscop
}
