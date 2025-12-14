/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_17 = (max(var_17, (arr_11 [i_0] [i_3] [i_0] [i_1 + 1] [i_0] [i_0] [i_0])));
                            arr_12 [i_4 - 1] [i_4] [i_3] [i_0] [6] [i_1 + 1] [i_0] &= (arr_7 [i_4] [i_4] [i_4 - 1]);
                            var_18 = (min(var_18, 1));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_19 = ((!(((1 % (arr_4 [i_2] [i_2]))))));
                            var_20 -= ((arr_2 [i_5] [i_1 + 1]) < (arr_2 [i_1 + 1] [i_1 + 1]));
                            var_21 = ((-(arr_13 [i_1 + 1] [i_1 + 1] [i_0])));
                        }
                        var_22 = ((arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1]) || (arr_6 [i_1] [i_1 + 1] [i_1 + 1] [i_1]));
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_23 = (max(((min((arr_14 [i_1 + 1] [17]), (arr_14 [i_1 + 1] [i_1])))), ((~(arr_10 [i_6 - 1] [i_1 + 1] [i_6 - 1] [1] [i_1 + 1] [i_0])))));
                        var_24 = ((3614005007163417240 || ((var_16 <= (arr_8 [i_6 - 1] [i_1 + 1] [1])))));
                    }
                    arr_17 [i_1] [i_1] [i_1] [i_1] = 1;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                arr_22 [i_8] [i_1] [i_0] [i_0] [i_1] [i_0] = ((1 >= (arr_11 [i_1] [i_7] [i_2] [i_2] [22] [i_0] [i_1])));
                                var_25 = (max(var_25, (((((1 != (arr_10 [i_1 + 1] [i_1 + 1] [i_1] [9] [i_1 + 1] [i_1 + 1]))) ? (max(-8954885308852410745, ((((arr_10 [1] [i_7] [i_2] [13] [i_1 + 1] [i_0]) ? var_11 : var_10))))) : (((-((min(0, (arr_5 [1] [i_1]))))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (min(var_26, ((min(8048391973728494534, 1)))));
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            {

                for (int i_11 = 1; i_11 < 17;i_11 += 1)
                {
                    var_27 += (((~(arr_20 [i_11 - 1] [1] [i_11 + 3] [i_9 - 1] [1] [1] [i_9 - 1]))));
                    arr_29 [i_9] [i_9] = 5;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            {
                                arr_35 [i_9] [i_9] = ((0 ? (((arr_0 [i_9 - 1]) * (arr_32 [i_9 - 1] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) : 1));
                                arr_36 [i_13] [i_9] [i_9] = (arr_16 [i_13] [i_11] [i_11]);
                            }
                        }
                    }
                }
                var_28 = ((21 ? -90 : 3456888643631515449));
                var_29 = ((-(((arr_25 [i_9] [i_9]) ? (arr_25 [i_9] [i_9]) : -90))));
            }
        }
    }
    #pragma endscop
}
