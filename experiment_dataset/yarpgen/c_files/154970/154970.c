/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = (min(((~((((arr_9 [i_0] [i_1] [i_0] [i_0]) < (arr_6 [9])))))), (((arr_8 [i_0] [i_1] [i_2]) / -2166))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = (((((1 ? (arr_17 [i_0] [i_0] [i_0]) : (~var_11)))) ^ (min((arr_7 [i_0 + 1] [i_1]), 106))));
                                var_16 = (max(var_16, (((max((arr_15 [i_0 + 1] [i_0 - 1] [i_1] [i_4] [6] [i_4] [i_4]), (arr_6 [i_2])))))));
                                arr_18 [i_0] [23] [i_2] [i_1] [i_0] = var_9;
                                var_17 ^= (((((((-1 + 2147483647) >> (89 - 89))) & (1 != var_5)))) ? (((arr_8 [i_0] [i_0] [i_0 - 1]) / (arr_2 [i_0 + 1]))) : ((((((arr_12 [i_0] [i_1] [i_1] [i_3] [0] [i_1]) < var_11))) >> ((var_9 & (arr_3 [i_0] [i_1]))))));
                                arr_19 [i_0] [i_0] [i_0] [i_3] [i_0] = var_1;
                            }
                        }
                    }
                    var_18 ^= ((((min((74 < -74), 74)))) / (min((arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [1] [i_0 + 1]), (arr_15 [i_0] [i_0] [i_0 - 1] [i_1] [i_1] [i_1] [i_0 - 1]))));
                }
            }
        }
    }
    var_19 = (min(var_19, (((var_2 ? -20120 : ((((((var_12 + 2147483647) << (var_13 - 1130035914)))) ? ((var_0 ? var_0 : 98797049)) : ((var_0 ? var_13 : var_4)))))))));
    var_20 = ((((!(((var_9 ? var_7 : var_13))))) ? -32763 : (((8 ^ -5780011198223161641) ? ((-32754 ? var_10 : var_9)) : var_5))));
    var_21 = var_6;
    #pragma endscop
}
