/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = (~(~128));
                    var_20 = var_8;

                    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        var_21 = ((!(((var_15 ? (arr_7 [i_0] [i_2 + 2] [i_3 - 1] [i_3 + 1]) : ((9223372036854775805 ? 23936 : 23909)))))));
                        arr_12 [i_1] [i_1] = (((((~(max(1, 3203270864))))) ? (((42 && (arr_9 [19] [i_2 - 1] [i_1] [i_0])))) : (0 & var_4)));
                        var_22 = (min(var_22, ((((((30765 - (arr_7 [i_2 - 2] [i_2 - 2] [i_2] [i_3 + 1])))) - (((arr_9 [i_2 - 2] [i_1] [i_2 - 1] [i_3 - 1]) ? (arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 2]) : 68)))))));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max((((arr_15 [i_0]) ? var_17 : 3540807598)), (((~(arr_13 [18] [i_2 + 1] [i_2 + 1] [i_1] [i_0]))))))) & ((70 - (min(9223372036854775805, var_6))))));
                            var_23 &= (max(3203270867, ((3203270865 ? 2088960 : 2147483647))));
                        }
                        for (int i_5 = 3; i_5 < 20;i_5 += 1)
                        {
                            var_24 += (((min((arr_9 [i_5] [i_5 - 2] [i_5 + 1] [i_5 - 1]), (arr_2 [i_5 - 3]))) - (((-(arr_0 [i_5] [i_5 + 1]))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_1] [6] &= (arr_5 [i_0]);
                        }
                    }
                    for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_25 = var_15;
                        var_26 = (min(((-(-99 != var_9))), ((-(arr_14 [i_1] [10] [i_1] [i_1] [i_1] [i_2 - 2] [i_6 - 1])))));
                        arr_26 [18] [1] [11] [i_6 + 1] &= ((((min(1152886320234758144, (arr_14 [i_6 - 1] [15] [1] [i_6] [i_6] [1] [i_2 - 1])))) ? ((((!var_2) ? var_13 : ((var_16 ? 3203270856 : 26))))) : 16777215));
                    }
                }
            }
        }
    }
    var_27 = var_13;
    var_28 += var_10;
    var_29 = (((!var_13) & ((((min(var_10, 483382539))) & ((var_8 ? var_5 : -9223372036854775801))))));
    #pragma endscop
}
