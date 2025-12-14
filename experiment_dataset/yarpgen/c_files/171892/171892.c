/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_16 |= 27008;
        var_17 = (((arr_0 [i_0 - 1]) ^ (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_18 = ((~(((5436743935397011746 > (!var_6))))));
        var_19 = (((((max((arr_2 [i_1]), (arr_2 [i_1])))) + ((64 ? var_7 : 8334)))));
        var_20 -= (arr_2 [i_1]);
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        var_21 = var_3;
        var_22 = (((max(((max(var_5, 1))), ((~(arr_7 [i_2]))))) >= (arr_5 [i_2])));
        var_23 = ((((((28912 * var_15) ? (arr_3 [i_2 + 1]) : ((max((arr_6 [i_2]), (arr_6 [i_2]))))))) ? ((max((arr_4 [i_2]), var_4))) : (((-0 / (var_1 / var_1))))));
    }
    var_24 |= -var_4;
    var_25 = (max(-var_0, (((var_7 == var_15) | (~106)))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_26 = (min(var_26, (((-(((arr_9 [i_3]) ? 2652130859200335875 : -1157625912)))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        var_27 |= ((((var_3 ? (arr_11 [i_3] [i_6] [i_6]) : (arr_13 [i_3] [i_3] [2]))) - (arr_16 [6] [6] [i_5] [i_5] [i_5])));
                        var_28 = (max(var_28, (!var_1)));

                        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            var_29 -= ((((~(arr_16 [i_4] [0] [i_6] [i_6] [i_4])))) ? (arr_12 [i_3]) : (~var_6));
                            var_30 -= ((-1 - (!var_9)));
                            var_31 -= ((~(((arr_19 [i_3] [i_3]) ? var_14 : 2147483647))));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            arr_22 [i_3] [i_3] [i_5] [i_3] [i_8] = (((192 > 1) ? (arr_19 [i_8] [i_4]) : var_4));
                            var_32 = (arr_14 [i_3] [14] [i_8]);
                            var_33 = (arr_9 [5]);
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
    {
        arr_26 [11] = 191;
        var_34 = (((((max(65535, (arr_17 [i_9]))))) >= (max((arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]), (arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))));
        arr_27 [12] [12] = (-(max(((var_9 ? (arr_8 [i_9] [5]) : var_9)), (!var_10))));
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
    {
        var_35 = ((((((-(arr_16 [i_10] [8] [19] [8] [i_10]))) - (arr_12 [i_10]))) ^ ((~(max((arr_21 [i_10] [i_10] [i_10] [i_10] [18] [18] [i_10]), (arr_9 [9])))))));
        var_36 = ((-(min((max(var_10, -1617389023)), (!var_1)))));
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
    {
        var_37 = 22956;
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 21;i_13 += 1)
            {
                {
                    var_38 |= ((1 || (arr_37 [6] [6])));
                    arr_39 [i_11] [i_11] [i_11] [i_11] = (max(((min((arr_29 [i_12]), (arr_29 [i_11])))), (max(((179 ? (arr_38 [i_11] [i_12]) : 107)), (((var_6 / (arr_10 [i_11] [i_12]))))))));
                }
            }
        }
    }
    #pragma endscop
}
