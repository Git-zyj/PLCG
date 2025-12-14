/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = (((arr_0 [i_0]) | (((!((max(var_6, (arr_4 [i_1] [i_3] [i_4])))))))));
                                var_14 -= arr_8 [i_1 - 2] [i_1 + 4];
                                var_15 = (arr_5 [i_3] [i_0] [i_3]);
                                arr_12 [12] [i_1] [i_2 + 2] [i_3] [12] = (((((((!(arr_9 [i_0] [i_0] [16] [i_0] [14] [16]))) ? (((arr_8 [8] [8]) ? (arr_11 [i_2] [17]) : var_0)) : var_9))) ? (arr_7 [i_4] [i_4] [i_4] [11]) : ((-(((arr_10 [i_0] [i_1] [i_0] [0]) | (arr_10 [i_1] [i_2] [12] [i_4])))))));
                                var_16 = var_8;
                            }
                        }
                    }
                }
                var_17 = ((((!(arr_4 [7] [i_1] [i_1]))) ? var_3 : (((var_8 + 2147483647) >> (((max(74, (arr_5 [3] [1] [3]))) - 73))))));
                var_18 = (((!-1) && (((~(((!(arr_3 [i_0])))))))));
                var_19 = (max(var_19, ((1 ? var_6 : (((20 ? 17981 : -28)))))));
                var_20 = ((-18446744073709551615 < (((((arr_11 [i_1 + 2] [i_1]) <= 0))))));
            }
        }
    }
    var_21 = var_7;
    var_22 = ((-((~((var_3 ? var_9 : var_10))))));
    var_23 = var_9;
    var_24 = (max(var_24, ((((max(((6 ? var_2 : var_11)), ((var_11 ? var_12 : var_0)))) + var_11)))));
    #pragma endscop
}
