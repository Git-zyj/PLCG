/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (max(var_9, var_17));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 6;i_2 += 1)
            {
                {
                    var_20 |= arr_3 [i_2 + 1] [i_2] [i_2 + 3];

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_21 = (max(var_21, ((((((~(arr_4 [i_3 + 1])))) ? (((arr_2 [i_0] [i_1] [i_2 + 1]) ? (arr_1 [i_2 + 2]) : 220)) : ((-(arr_2 [7] [i_1] [i_2 - 1]))))))));
                        arr_11 [i_0] [i_0] [i_2] [i_2 - 4] [i_2 - 4] [i_2] = (-1 ? (min((((arr_8 [i_0] [i_1] [i_2] [6]) ^ (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (arr_6 [i_1] [i_2 + 3] [i_3]))) : var_5);

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_22 = (max(var_22, ((((max(((var_9 / (arr_5 [i_4] [5]))), 1)) / var_15)))));
                            var_23 = (max(var_23, (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_24 = (arr_8 [i_0] [i_1] [i_1] [i_4]);
                            arr_14 [i_1] [i_2] [i_2] [i_4] [i_1] [i_3 - 1] [i_1] = var_7;
                            arr_15 [i_4] = ((arr_13 [i_0] [i_1] [i_2 - 1] [i_3 + 1] [i_3 - 1]) ? ((max((arr_3 [i_0] [i_0] [i_0]), (max((arr_9 [i_0] [i_0] [i_1] [i_2 + 2] [i_3] [i_4]), var_4))))) : (arr_5 [i_1] [i_1]));
                        }
                    }
                    var_25 = (max(var_25, ((((((((var_16 ? var_13 : 139))) - (((arr_12 [i_0] [i_1] [i_2] [i_1] [i_0] [i_1] [i_2]) ? 1 : var_12)))) ^ (arr_2 [i_2 - 3] [i_2 - 4] [i_2]))))));
                }
            }
        }
        var_26 = 255;
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_27 = (!(arr_17 [i_5]));
        var_28 = (arr_18 [i_5]);

        for (int i_6 = 2; i_6 < 23;i_6 += 1)
        {
            arr_21 [i_5] = ((~(min(16, ((var_16 ? 1 : (arr_16 [i_5])))))));
            arr_22 [5] [i_6 - 2] [i_5] = 18446744073709551615;
            var_29 = 113;
            arr_23 [i_5] [i_6] [i_5] = 0;
        }
    }
    #pragma endscop
}
