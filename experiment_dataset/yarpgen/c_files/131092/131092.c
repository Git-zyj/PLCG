/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_0));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_11 [i_0] [i_3 - 2] [i_0] [i_1 - 1] [i_0] = -1116194273;
                            arr_12 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_4] = (-2885692844097790536 + var_7);
                            var_14 = (!541635223);
                            var_15 &= -var_7;
                        }

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_0] [i_3 + 1] [i_5] = ((((-(arr_15 [i_0] [i_1] [i_1 - 2] [i_3 - 3] [i_5] [i_5] [i_5]))) & (((arr_1 [i_3 - 1] [i_3 + 1]) ? ((-2885692844097790536 ? var_9 : var_1)) : -var_9))));
                            arr_17 [i_0] [i_0] [i_2] [i_0] = ((((-(((arr_13 [i_0 - 1] [17] [i_2] [i_3] [i_0]) ? (arr_13 [i_0 - 1] [i_1] [i_2] [i_3 + 1] [i_0]) : (arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [i_2]))))) / var_10));
                        }
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            var_16 -= ((~((min((max((arr_19 [i_2]), (arr_18 [i_2] [1]))), (arr_14 [i_0 - 1] [i_0 - 1] [i_6 + 1] [i_0 - 1] [i_6 + 1]))))));
                            var_17 -= 2885692844097790535;
                            var_18 = -1116194273;
                            var_19 = (min(var_19, var_12));
                        }
                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            arr_23 [i_0] [i_3] [i_2] [i_1 - 2] [i_0] = 1;
                            arr_24 [i_0] [i_1 - 2] [i_0] [i_0] [i_7 + 1] [i_0] [i_0] = ((arr_21 [i_0] [i_3] [i_2] [i_1 - 2] [i_0]) ? (~var_3) : var_1);
                            var_20 = (max(var_20, (min(((2047 ? (-1116194287 + 1116194267) : 0)), (((((~(arr_1 [i_0] [i_0])))) ? ((min(-1, (arr_15 [i_7] [i_7] [i_2] [i_7] [i_1] [i_7] [i_7])))) : (~var_6)))))));
                        }
                    }
                    var_21 = ((((!(arr_6 [i_0 - 1] [i_1] [i_2] [i_1 + 1]))) ? ((~(((arr_13 [i_0] [i_1] [i_0] [i_2] [i_0]) ? var_4 : (arr_6 [i_0 - 1] [i_0] [i_0 - 1] [i_2]))))) : (((~(((arr_3 [i_1] [i_1] [i_0]) ? var_1 : var_3)))))));
                }
            }
        }
    }
    var_22 = (max(var_22, var_2));
    /* LoopNest 2 */
    for (int i_8 = 4; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            {

                for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_23 = var_7;
                                arr_39 [i_11] [i_9] [i_10] [i_12] [i_12] [i_8] |= ((+(((49771 || ((min((arr_22 [i_8] [12] [i_8] [i_11] [i_12]), var_8))))))));
                                arr_40 [i_12 - 3] [i_11] [i_10] [i_10] [i_10] [i_9] [i_8] = (((((arr_32 [i_11 - 3] [i_11] [i_11 - 3]) - var_1)) | (((arr_15 [i_10] [i_8 - 2] [i_9] [i_9] [i_10] [i_11 + 2] [i_10]) & var_12))));
                                var_24 ^= (min((var_10 && var_8), var_10));
                            }
                        }
                    }
                    var_25 = ((((((arr_18 [i_8] [i_8]) + 11)) * var_8)));
                }
                for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                {
                    var_26 = 1116194277;
                    var_27 &= var_6;
                    var_28 = (min(var_28, ((((-2706608544 ? (arr_34 [9] [i_8 - 4]) : 4137097780))))));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
                {
                    arr_47 [i_9] = (((arr_22 [i_8] [i_8] [i_8] [i_8 - 3] [i_8]) >> (((arr_22 [i_8] [i_8] [i_8] [i_8 - 4] [i_8]) - 17378573543582543430))));
                    var_29 = (arr_29 [i_8] [i_8]);
                }
                arr_48 [i_8] = ((~((((179 + (arr_32 [i_8] [16] [i_8]))) >> (((var_6 == (arr_18 [i_8 - 4] [i_9]))))))));
            }
        }
    }
    #pragma endscop
}
