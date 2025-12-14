/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_18 = ((((min(((((arr_6 [i_1] [i_1]) != var_3))), (min(11601, -6174113223708028652))))) ? (max(var_2, (min(11092650034057330011, 0)))) : (((1 ? (~42786) : (arr_7 [6] [i_0] [6]))))));
                                arr_12 [i_0] [i_1] [i_2] [i_1] [i_0] = arr_3 [i_1];
                                arr_13 [i_4] [i_1] [i_1] [i_1] = ((-64 ? (min(((var_8 ? (arr_1 [i_2] [i_2]) : (arr_6 [i_1] [i_4]))), (~1))) : ((((1 || (((var_3 ? 224 : (arr_10 [i_0] [i_1] [i_2 - 1] [i_3] [i_2 - 1]))))))))));
                                arr_14 [i_4] [6] [i_2] [6] [i_4] [i_1] = (((arr_7 [i_0] [i_0] [2]) / (((((max(1, (arr_9 [i_0] [i_1] [i_2 - 1] [i_2 - 1]))))) ^ ((var_7 ? var_13 : (arr_8 [i_1] [i_1] [i_1] [i_2 - 1] [i_4] [i_0])))))));
                                var_19 = ((((arr_9 [1] [i_1] [1] [2]) <= (255 << 1))) ? 120 : (!1));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_20 = (min(var_20, ((min((((var_8 ? var_11 : ((12743 ? var_2 : var_17))))), 0)))));
                                var_21 = (max(var_21, -99));
                                arr_17 [i_1] [i_1 + 2] [i_1] [i_1 + 2] = (((1 + 61094) ? (arr_15 [i_1] [i_1 + 2] [i_2 + 1] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1]) : (((arr_15 [i_1] [i_2] [i_2 - 1] [i_1 + 2] [i_1] [i_1 + 4] [i_1]) ? (arr_15 [i_1] [i_2] [i_2 - 1] [i_1 + 3] [i_1] [i_1 - 1] [i_1]) : (arr_15 [i_1] [i_2] [i_2 - 1] [i_1 + 3] [1] [i_1 - 1] [i_1])))));
                                arr_18 [i_0] [i_1] [i_1] [3] [i_1] = (~var_5);
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_5] = (~224);
                            }
                            arr_20 [1] [1] [1] [1] [9] [i_1] = var_14;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_29 [i_0] [i_1] [i_6] [i_7] = (((((((arr_25 [i_0] [i_0] [1] [1]) != (arr_8 [i_1] [1] [i_6] [i_6] [i_6] [i_6])))) != (min(-210713573, 1)))));
                                var_22 = (max(var_22, ((min((~var_1), ((((max(131, (arr_24 [i_0] [i_0] [i_0] [i_0]))) == (1 >= var_7)))))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_40 [i_0] [i_1 + 2] [i_9] [i_10] [i_1] = (min(var_5, ((var_13 | (arr_33 [i_0] [i_0] [i_10] [i_10])))));
                                var_23 = (min(var_23, 1));
                            }
                        }
                    }
                }
                var_24 += (min(((min((max(var_17, var_11)), (!1799)))), (((arr_38 [i_1] [1] [i_1] [i_1] [i_1 + 1] [i_1]) ? (arr_38 [i_0] [i_1 + 4] [i_1] [i_1 + 1] [i_1 + 4] [i_0]) : (arr_38 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 19;i_14 += 1)
            {
                {
                    var_25 += var_12;
                    var_26 *= (min(10830171152716263257, (arr_47 [i_14 - 1] [i_14] [i_14])));
                    arr_51 [i_12] [i_12] [i_13] [i_14] = ((var_2 < (max((arr_45 [i_13] [i_13]), var_7))));
                }
            }
        }
    }
    var_27 = 1;
    var_28 = (min(var_28, ((max(var_8, var_8)))));
    #pragma endscop
}
