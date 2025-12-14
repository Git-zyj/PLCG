/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    var_21 += var_7;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [i_1 + 1] [i_2] [i_3] [i_1 - 1] = (((var_12 ? (arr_6 [i_0] [i_0] [i_0]) : 1597311063)));
                        var_22 = (((~(arr_6 [9] [i_1] [3]))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_23 = (max(var_23, (arr_8 [i_0] [i_0 - 1] [i_0 - 2] [i_0 + 1])));
                        var_24 = (((~(((arr_1 [5]) ? (arr_8 [i_0] [i_1 - 1] [i_2] [i_4]) : (arr_9 [i_1] [i_1] [i_1 - 1] [i_4] [i_2] [7]))))));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_25 = (max(var_25, (((+((var_4 ? (arr_9 [i_5] [i_2] [i_1 + 1] [i_1 - 2] [i_0] [i_0 - 2]) : (arr_11 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 2] [8]))))))));

                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            var_26 = (-((var_7 ? var_8 : ((-(arr_15 [i_6] [8]))))));
                            arr_18 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 2] [4] = ((((!((!(arr_16 [7] [i_1] [i_2] [i_1] [i_6] [7] [6]))))) ? ((((!(arr_5 [7] [i_1 - 1] [i_1 + 1] [i_1 + 1]))))) : (arr_8 [i_1 + 1] [i_2] [i_5] [i_6 + 1])));
                            var_27 = ((-(((arr_0 [i_6 - 1]) ? (arr_0 [i_1]) : (arr_0 [i_5])))));
                            var_28 = (max(((min(-355525073123990330, -6))), (((!(arr_12 [i_0] [i_0 + 1] [i_0 + 1] [10] [i_0]))))));
                        }
                        var_29 = (arr_16 [i_0] [i_0] [i_2] [i_0] [0] [i_0] [8]);
                        arr_19 [i_0] [i_0] [i_2] [i_5] = ((((4294967295 ? 23 : 1717127291)) >= ((((arr_5 [i_0] [i_0 - 2] [i_2] [i_0]) * (arr_11 [i_0 + 2] [i_1 - 1] [i_2] [10] [i_1 - 1]))))));
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        arr_22 [6] [9] = (((var_19 ? (((var_0 ? var_2 : (arr_16 [i_0 - 2] [i_2] [1] [i_7] [i_7] [i_1] [8])))) : (arr_9 [0] [3] [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 2]))));
                        var_30 += (arr_5 [i_7] [i_2] [i_1] [i_0]);
                        var_31 = (max((((arr_20 [i_0] [i_0] [i_1] [i_2] [i_7] [i_7]) - (arr_21 [i_0 + 1]))), (arr_9 [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 1] [i_0] [i_0 + 1])));
                        var_32 = var_12;
                    }
                    var_33 = var_4;
                }
            }
        }
    }
    var_34 -= ((~(((6479852272282538382 != ((min(2428226474, var_7))))))));
    #pragma endscop
}
