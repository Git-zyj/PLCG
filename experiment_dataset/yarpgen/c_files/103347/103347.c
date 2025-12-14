/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (min(var_12, var_3));
                var_13 = (max((((((((arr_3 [i_1] [i_0] [i_0]) ? (arr_5 [i_0] [i_1]) : (arr_4 [i_0] [i_1] [i_0])))) ? (arr_1 [i_0] [i_1]) : ((551640156 ? -3116192247719173057 : 551640156))))), (((arr_3 [i_0] [i_0] [i_0]) ? (((var_4 ? var_7 : var_3))) : (min(var_6, (arr_5 [i_0] [i_1])))))));
                arr_6 [i_1] = ((((((arr_3 [i_0] [i_0] [i_0]) ? (((arr_5 [10] [i_1]) ? var_5 : (arr_5 [i_0] [i_1]))) : ((min(var_10, (arr_2 [i_1]))))))) ? ((var_7 ? (arr_1 [i_1 + 1] [i_1]) : (arr_4 [i_1 + 1] [6] [i_1]))) : (((((((arr_5 [i_0] [i_1]) | (arr_3 [i_0] [i_0] [i_0])))) ? (min(var_0, var_9)) : (arr_3 [i_0] [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_14 = ((-1443750309 ? 2501332864961237234 : 11351));
                            var_15 ^= (((((~(arr_4 [i_1 + 1] [1] [i_2 + 2])))) ? (((arr_5 [i_3] [i_3]) ? var_10 : var_7)) : (arr_0 [i_0])));
                            arr_11 [i_0] [1] [i_1] = ((((max((((128 ? -551640156 : (arr_2 [i_1])))), ((var_1 | (arr_9 [i_0] [i_0] [i_0] [i_0])))))) ? (max((((arr_1 [i_0] [0]) ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : var_0)), var_2)) : (min(((min(130, 25))), (((arr_3 [i_1] [i_2] [i_3]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : var_6))))));
                            var_16 |= (((arr_5 [i_0] [i_3]) ? ((((((arr_1 [i_0] [i_0]) ? (arr_4 [i_1] [i_1] [i_1]) : var_2))) ? (arr_8 [i_3]) : var_7)) : (arr_4 [i_0] [i_2 + 4] [i_1 - 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
