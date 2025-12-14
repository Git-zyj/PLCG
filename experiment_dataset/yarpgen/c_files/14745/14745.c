/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_13 = ((!(((((max(-81, -88))) ? (min(2069401786, -88)) : (((var_9 ? var_0 : var_10))))))));
                            var_14 = (((~(arr_1 [i_0]))) >> (((((-2147483647 - 1) - -2147483588)) + 112)));
                            arr_12 [i_0] [i_1] [i_2 - 2] [i_3] = (((((-(min(844824639, (arr_5 [5] [5] [i_1])))))) ? ((((((arr_10 [i_0] [i_2 + 2] [3] [i_0]) * 0))) ? ((-(arr_3 [i_0]))) : (((arr_6 [i_0] [14]) ? 2147483630 : (arr_3 [i_1]))))) : ((((arr_0 [i_2 - 1] [i_2 - 1]) % 83)))));
                        }
                    }
                }
                arr_13 [i_0] [i_0] [i_0] = ((-81 && ((((arr_5 [0] [i_0] [i_1]) ? (((arr_9 [i_0] [i_0] [i_1] [i_1]) ? (arr_4 [i_1] [i_1] [i_0]) : (arr_10 [i_0] [i_1] [i_1] [i_0]))) : (((arr_10 [i_0] [i_0] [i_1] [i_0]) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0]))))))));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_15 &= (-2147483646 * var_12);
                    var_16 = (arr_2 [i_0]);
                    var_17 = (3741745595 >= var_11);
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_18 = ((arr_4 [i_0] [i_0] [i_0]) ? var_3 : (((((51060 ? 576460752303423487 : var_8)) > ((var_8 * (arr_9 [i_0] [i_0] [i_1] [i_5])))))));
                    arr_20 [i_0] [i_1] [i_0] = 1;
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_19 |= (min((((((-95 ? var_6 : 20708)) > var_6))), ((85 + (arr_24 [i_0] [1])))));
                                var_20 = var_2;
                                arr_26 [i_0] [5] [i_5] [i_0] [i_5] = min(var_8, ((max(var_8, (arr_23 [i_0])))));
                                arr_27 [i_0] [i_0] [17] [i_7 + 1] [i_0] = arr_3 [i_0];
                            }
                        }
                    }
                }
                var_21 = ((((max(12, (arr_2 [i_0])))) ? ((~((2228644213 ? (arr_19 [i_0] [i_1] [i_1]) : var_1)))) : var_1));
                arr_28 [i_0] [i_0] = ((~(arr_14 [i_0] [i_1] [3])));
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}
