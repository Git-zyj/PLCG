/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_10 || var_5);
    var_13 |= ((var_10 || var_6) + (((((var_4 ? var_9 : var_5))) ? (var_3 / var_6) : (1 & 4294967293))));
    var_14 = ((var_2 ? var_2 : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (arr_5 [i_0] [i_1]);
                arr_6 [i_0] [i_1] [i_1] = arr_2 [i_0] [i_1];

                for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 16;i_4 += 1)
                        {
                            var_16 = (arr_10 [i_0] [i_0] [i_1] [i_0]);
                            var_17 = ((((((((arr_1 [i_3] [i_4]) ? (arr_12 [i_3 + 1] [i_1] [i_3 + 1] [i_3 + 1] [i_3]) : (arr_3 [i_4] [i_1] [i_4])))) ? (((arr_0 [i_0]) / (arr_2 [i_0] [i_2]))) : (((arr_7 [i_1] [i_2] [i_3 + 1]) & (arr_10 [i_0] [i_1] [i_3 + 2] [i_1]))))) <= (arr_11 [i_0] [i_0] [i_3] [i_0] [i_0])));
                            arr_13 [i_2 + 1] [i_2] [i_2] [i_2] [i_3] = (((arr_0 [i_0]) & (((arr_8 [i_2]) ? (arr_9 [i_0]) : (((arr_12 [i_0] [i_1] [i_2 - 1] [i_3 - 1] [i_3]) ^ (arr_8 [i_0])))))));
                        }
                        arr_14 [4] |= (arr_10 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_17 [i_0] [i_5] [i_0] [i_5] [i_0] = (arr_4 [i_5]);
                        var_18 = (max(var_18, (arr_11 [i_5] [i_2 - 2] [4] [i_1] [i_0])));
                        arr_18 [i_5] [i_2] [i_5] = (arr_3 [i_0] [i_0] [i_0]);
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_19 = (min(var_19, ((((((arr_11 [i_6] [i_1] [10] [i_6] [i_6]) + 2147483647)) >> (arr_3 [i_2] [i_1] [i_0]))))));
                        arr_22 [i_6] [i_0] [i_0] = ((((((((arr_11 [i_0] [i_2] [14] [14] [i_1]) < (arr_19 [i_0] [i_0] [i_0]))) && (arr_5 [i_1] [i_1])))) != (((((arr_7 [i_0] [i_1] [i_1]) < (arr_9 [i_0]))) ? (((arr_5 [i_1] [i_2]) & (arr_4 [i_6]))) : (((arr_15 [i_0] [i_1] [i_1] [i_1] [i_2 - 1] [i_6]) + (arr_8 [i_6])))))));
                        arr_23 [i_6] [i_2 - 1] [i_1] [i_0] [i_0] = (arr_1 [i_2] [i_6]);
                        arr_24 [i_2] [i_2] = (((arr_1 [i_0] [i_6]) && (arr_0 [i_2])));
                        var_20 = (arr_10 [i_6] [i_2] [i_1] [i_0]);
                    }
                    var_21 = (((arr_3 [i_1] [i_1] [i_1]) << (((((arr_19 [i_0] [i_1] [i_0]) ? (arr_20 [i_0]) : (arr_11 [i_0] [i_0] [2] [i_0] [i_2]))) + 830882545))));
                    var_22 = (arr_5 [i_1] [i_2]);
                    arr_25 [i_0] [i_1] [i_0] = (((arr_15 [i_2 - 1] [i_0] [i_2] [i_0] [i_0] [i_0]) & (((arr_10 [i_2] [i_0] [i_1] [i_0]) | ((((arr_20 [i_2]) & (arr_7 [i_0] [i_0] [i_2 - 1]))))))));
                }
                for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_23 = (arr_8 [i_9]);
                                var_24 = (((arr_20 [i_7]) && (((((((arr_21 [i_0] [i_0] [i_8] [i_9 - 1]) && (arr_32 [i_0] [i_0] [i_0] [i_0] [i_8] [i_8] [i_9])))) << ((((arr_3 [i_1] [i_8] [i_1]) < (arr_5 [i_7] [i_7])))))))));
                            }
                        }
                    }
                    var_25 = (arr_30 [i_0] [i_1] [i_1] [i_7] [i_1]);
                }
                arr_34 [i_1] = arr_7 [i_0] [i_0] [i_0];
            }
        }
    }
    var_26 = ((((((((4294967263 << (1044480 - 1044452)))) / var_8))) || var_7));
    #pragma endscop
}
