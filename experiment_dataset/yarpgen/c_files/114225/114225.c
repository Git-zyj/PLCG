/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= 965792308;
    var_13 = ((((max(140, var_9))) ? var_8 : (((var_8 * var_4) ? var_4 : var_6))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (max(var_14, (((((-(arr_1 [i_0] [i_0]))) % ((9698 ? 55838 : -23810)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (max(((-(arr_3 [i_0] [i_1]))), ((((arr_3 [i_2] [i_1]) <= (arr_3 [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_2] [i_3] [i_0] = (max(((max((arr_9 [i_4 - 4] [i_3 - 1] [i_3] [i_3 + 2] [i_3] [i_3]), (arr_4 [i_3] [i_3 - 1] [i_3 - 2] [i_1])))), (max(3767574149, (arr_4 [i_3 + 2] [i_3 + 2] [i_0] [i_0])))));
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] [i_1] = ((~(arr_8 [i_4] [i_4] [i_0] [i_0] [i_4])));
                                var_16 = (arr_5 [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 24;i_5 += 1)
    {
        var_17 = ((((max((arr_17 [i_5]), ((var_5 / (arr_15 [i_5] [i_5])))))) ? ((((arr_17 [i_5 - 1]) / var_10))) : (((arr_17 [i_5 + 1]) ? (((arr_16 [i_5]) ? (arr_15 [i_5] [i_5]) : (arr_18 [i_5]))) : var_0))));
        var_18 = (min(var_18, ((((((arr_15 [i_5] [i_5]) - var_7)))))));
        arr_19 [i_5] [i_5] = (max((((arr_17 [i_5 - 1]) / (arr_17 [i_5 + 1]))), ((((-2147483647 - 1) != 116)))));
        arr_20 [i_5] = ((((((((arr_18 [i_5 - 1]) ? (arr_15 [i_5] [i_5]) : var_5))) ? (max(var_6, (arr_15 [i_5] [i_5 - 3]))) : ((max((arr_18 [i_5]), -15))))) >= var_5));
    }
    for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_19 = max(((((arr_6 [i_6 - 1] [i_6 - 1] [i_6 - 1]) && (arr_12 [i_6])))), (max(((((arr_22 [i_6]) < 28))), (arr_10 [i_6] [i_6 + 1]))));
        var_20 = (arr_18 [i_6 + 1]);

        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        var_21 = var_1;
                        arr_29 [i_9] [i_7 - 1] [i_7 - 1] [i_6] [i_6] [i_6] = ((!((max((arr_18 [i_6 + 1]), (arr_16 [i_6 + 1]))))));
                    }
                }
            }
            var_22 = var_10;
        }
    }
    for (int i_10 = 1; i_10 < 15;i_10 += 1) /* same iter space */
    {
        var_23 = (((((var_7 ? ((((arr_24 [i_10] [i_10] [i_10]) ? (arr_22 [i_10]) : (arr_1 [i_10 + 1] [i_10 + 1])))) : (((arr_15 [i_10] [i_10 + 1]) ^ var_0))))) ? ((max(var_10, (arr_3 [i_10] [i_10 - 1])))) : 3767574176));
        arr_33 [i_10] = arr_7 [i_10] [i_10] [i_10 - 1] [i_10] [i_10];
    }
    var_24 |= var_3;
    var_25 = 3584;
    #pragma endscop
}
