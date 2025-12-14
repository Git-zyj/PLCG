/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_1] = (((!((max(0, 80))))) ? (!-1543810852) : (min(18446744073709551606, (((-25 ? 2534 : 146))))));
                arr_8 [i_0] = (max(1, ((-(arr_1 [12])))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_11 [6] [i_2] [i_2] [i_2] = (((((14246287674703846336 ? (((arr_5 [i_1]) ? 1543810840 : 2559)) : (var_8 != var_4)))) % var_1));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_17 [i_2] [i_1] [i_2] [0] [i_2] = ((((!(arr_6 [i_0] [i_1] [i_1]))) ? (arr_1 [i_0]) : (-127 - 1)));
                                arr_18 [i_0] [i_2] [i_4 + 3] = 1519331946;
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_13 *= var_10;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_14 ^= ((15515 ? ((((min((arr_27 [i_0] [6] [i_5] [i_6] [i_7]), 120))) ? -1543810870 : (arr_5 [i_0]))) : 63001));
                                var_15 = (min(var_15, (~9558)));
                                var_16 = (min((((arr_2 [i_7 - 1] [i_7 + 1]) ? (arr_2 [i_7 - 1] [i_7 - 1]) : (arr_6 [i_7 - 1] [i_7 + 1] [i_7 + 1]))), ((496 ? 234 : (arr_16 [i_0] [i_6])))));
                                arr_28 [i_0] [i_1] [i_5] [i_6] [14] = ((min((arr_10 [i_7 + 1] [i_7 + 1] [12] [i_7]), ((31 ? var_0 : 1)))));
                            }
                        }
                    }
                    var_17 = (max(var_17, (arr_13 [i_0] [10] [i_5] [10])));
                    var_18 = (max((arr_2 [i_0] [i_0]), var_9));
                    var_19 = (((((min(43425, (min(24385, var_10)))))) != 1022389702));
                }
            }
        }
    }
    var_20 = var_0;
    #pragma endscop
}
