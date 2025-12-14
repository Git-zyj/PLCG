/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_11 += (arr_2 [i_0] [i_1 - 1] [i_3]);
                            var_12 -= ((((max(((4294967295 / (arr_1 [i_0]))), (((8596782853650671621 < (arr_1 [i_3]))))))) % 10235574948293418328));
                            var_13 ^= (arr_0 [i_2 - 1] [18]);
                            var_14 = (((((arr_4 [i_0] [i_1 + 1] [i_2 - 1] [3]) ? (arr_4 [i_1] [i_1 - 2] [i_2 + 3] [i_2]) : (arr_4 [16] [i_1 + 1] [i_2 + 2] [i_2]))) - ((var_9 ? (((arr_1 [i_3]) / (arr_0 [6] [i_0]))) : ((((arr_8 [i_0]) ? 285999064 : 16384)))))));
                            arr_10 [i_0] = ((((((((arr_6 [i_0]) + 2147483647)) << ((((-16403 ? (arr_9 [i_0] [i_1] [i_3]) : var_0)) - 2294645073197149327))))) ? (arr_7 [i_0] [i_0] [21] [i_0] [i_0]) : (min((((arr_0 [i_0] [i_0]) | (arr_5 [i_0] [20] [i_0]))), ((var_3 ? 16402 : var_8))))));
                        }
                    }
                }
                var_15 = (((arr_0 [i_0] [i_0]) ? (min((((arr_8 [i_0]) ? var_0 : 16406)), ((max(-16397, var_5))))) : ((((~-16415) ? (arr_6 [i_0]) : ((-16401 ^ (arr_6 [i_0]))))))));

                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    arr_13 [i_0] = 0;
                    arr_14 [i_0] [i_1] [3] = -var_1;
                    var_16 = (max((arr_12 [i_4 + 1] [i_4] [i_4] [i_4 + 1]), (arr_12 [i_4 + 1] [i_4] [i_4] [i_4])));
                    var_17 = (min((!16414), (((arr_8 [i_0]) ? var_9 : 1))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_18 += ((max(((max((arr_17 [i_7]), -16388))), var_0)));
                    var_19 = (((((~(arr_8 [10])))) & (min((min(13885687752332124705, 16402)), ((min(16390, 16408)))))));
                }
            }
        }
    }
    var_20 = (((((min(var_3, var_1)))) ? ((min(var_3, 368242950))) : (((max(-16416, var_3))))));
    #pragma endscop
}
