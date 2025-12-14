/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_11;
    var_17 = -var_0;
    var_18 = var_10;
    var_19 = ((+((((((var_6 + 2147483647) << (var_0 - 10345191430681674637)))) ? (min(var_2, var_14)) : var_9))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_20 += max(((~((-(arr_3 [i_3] [i_4]))))), (((~(arr_0 [i_1 - 1])))));
                                var_21 ^= (((((arr_4 [i_1 - 1] [i_1 + 1]) + 2147483647)) << ((((((min((arr_4 [3] [3]), (arr_3 [10] [i_3])))) ? var_8 : (arr_9 [18] [i_2] [i_1] [i_0]))) - 59125))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [21] [i_4] = (~(!var_2));
                                var_22 = (((((var_15 + 2147483647) << ((((var_11 ? (arr_4 [i_4] [i_3]) : (arr_1 [i_0]))) - 17516))))) ? ((11 << (((max((arr_9 [i_0] [i_0] [i_0] [i_0]), (arr_9 [19] [19] [20] [i_0]))) + 2019006523)))) : var_7);
                            }
                        }
                    }
                    arr_14 [i_0] [14] [i_2] = (((((222 / var_1) ? (arr_2 [i_1 + 1] [i_1 + 1]) : var_13)) - (((30161 ? var_7 : var_9)))));
                    var_23 = ((arr_9 [i_1] [14] [i_1 - 1] [i_1 - 1]) + ((((35374 ? var_1 : var_15)) - (((arr_1 [i_0]) ? (arr_9 [i_2] [i_1] [i_1] [i_0]) : var_7)))));
                    arr_15 [i_0] = ((!((((arr_5 [i_1 - 1]) % var_13)))));
                    var_24 = 250;
                }
            }
        }
    }
    #pragma endscop
}
