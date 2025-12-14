/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-327740135 ? (-327740135 + 29576) : ((113818149581660250 ? (((var_3 ? -327740135 : var_7))) : 220981249))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_1] |= ((max(((var_12 ? (arr_3 [i_2] [i_1] [i_0]) : (arr_6 [i_0] [i_0] [i_0] [i_0]))), 65524)));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_0] = var_4;
                            var_21 = (max(var_21, (arr_14 [i_0 - 1] [i_3] [i_2] [i_0 - 1] [i_4] [i_3] [i_0])));
                        }
                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            arr_19 [i_0] [1] = (arr_10 [i_3] [9] [i_2] [i_2] [i_0]);
                            var_22 ^= (max((var_18 % var_13), var_7));
                            var_23 = (arr_16 [i_5] [i_2] [i_5 - 2] [0] [i_2]);
                        }
                        var_24 = (((max((~101), 196)) % 87));
                        var_25 = ((arr_5 [i_3] [i_2]) % (arr_10 [i_0] [i_1] [i_2] [i_2] [i_1]));
                        arr_20 [i_0] [i_1] [i_3] = ((max((var_5 + var_9), (!var_10))));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0] = 61440;
                        var_26 = (max(var_26, (arr_2 [i_0 - 3])));
                        var_27 = ((!((((max(127, 16)) | (19292 && 61440))))));
                        arr_24 [i_0 + 2] = (min(((((arr_16 [i_0] [i_1] [4] [i_6] [4]) || (arr_16 [i_0] [i_1] [i_1] [i_2] [i_6])))), (min((arr_16 [i_0] [i_0] [i_0] [12] [i_0 + 1]), (arr_16 [i_0] [i_1] [i_1] [i_2] [17])))));
                        var_28 = (arr_8 [i_0] [i_0 + 2] [6] [6]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_7] [1] [i_2] [i_1] [i_1] [i_7] = ((~(arr_26 [i_7])));
                        var_29 = (((arr_9 [i_0 - 2]) ? (arr_9 [i_0 + 2]) : (arr_9 [i_0 - 3])));
                        var_30 = (min(var_30, (((((61440 ? (arr_22 [i_0] [i_0] [i_1] [i_1] [3] [i_7]) : (arr_0 [i_7]))) % (arr_11 [i_0 - 1] [i_0 + 1] [i_0] [i_2] [i_0 + 1]))))));
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_31 = var_12;
                        arr_30 [i_8] = max(((max((arr_25 [i_0 - 2] [4] [i_2] [17] [i_1]), var_10))), ((var_2 | (arr_25 [i_0 - 2] [i_0 - 2] [i_0 - 2] [13] [i_0 - 1]))));
                    }
                }
            }
        }
        var_32 = ((-((-var_11 ? var_4 : (((var_3 ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_3)))))));
    }
    var_33 = var_18;

    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        arr_33 [i_9] [i_9] = (arr_31 [0] [i_9]);
        var_34 += -126;
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        arr_36 [i_10] = var_18;
        arr_37 [i_10] = var_15;
        var_35 = (max(var_35, ((((((-(arr_34 [i_10] [i_10])))) % (60 | 1871647340531443619))))));
        var_36 = (arr_35 [i_10]);
    }
    #pragma endscop
}
