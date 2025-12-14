/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_10 = ((((arr_5 [i_1 + 2] [i_3 + 1] [i_4 + 2] [i_3]) ? var_3 : var_4)) - (min(var_3, var_8)));
                                var_11 = (max(var_11, ((min((((((max(144115188075855616, -3208560990153901542))) || (arr_5 [i_1 + 3] [i_3 + 1] [i_4 + 1] [i_4 + 1])))), (((2316777526 - 0) ? (0 != var_5) : (arr_9 [i_2] [i_2] [i_4]))))))));
                            }
                        }
                    }
                    var_12 = 176;
                }
                for (int i_5 = 3; i_5 < 9;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_13 |= ((((max((arr_4 [8]), (arr_4 [6])))) ? (max(var_2, (max(var_9, (arr_6 [i_0] [i_0]))))) : (((arr_2 [i_0] [i_1 + 2]) ? (arr_2 [i_0] [i_6]) : var_3))));
                        var_14 = 2039480521;
                        arr_19 [i_0] [i_0] [i_0] [i_5] [i_6] = (var_9 ? (max((~12763069525846326084), 32640)) : -1);
                        var_15 = (((arr_10 [i_0] [i_1 - 2]) - (max(24, var_9))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] = var_9;
                    }
                    var_16 = (min(var_16, (-1254142043 <= 26465)));
                }
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    var_17 = max(1, (min((arr_1 [i_1] [i_1]), (arr_16 [i_1] [i_1] [i_0] [i_1 + 2]))));
                    arr_23 [i_0] [i_1] [6] &= ((((((arr_5 [i_1] [i_1] [i_1] [i_1 + 4]) ? var_1 : (arr_5 [i_1] [i_1] [i_1] [i_1 + 1])))) * (arr_10 [6] [i_1])));
                }
                arr_24 [4] |= ((((var_7 - ((max(var_4, var_6))))) - 0));
            }
        }
    }
    var_18 = var_6;
    var_19 ^= ((((((var_5 <= (-1846562331 ^ -1))))) != var_1));
    var_20 = 39;
    #pragma endscop
}
