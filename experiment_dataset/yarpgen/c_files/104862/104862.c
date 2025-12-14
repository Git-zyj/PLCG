/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (~-5860358360236285331);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = 127;
                    var_16 = (max((arr_1 [i_2] [i_1 - 2]), ((7179297714173317865 ? (arr_1 [i_0] [i_1 + 1]) : (arr_1 [i_2] [i_0])))));
                    arr_7 [10] [i_2] = (arr_2 [i_0] [i_1 + 2]);
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (min(((max((((-127 - 1) ? (arr_1 [i_1] [1]) : var_10)), (arr_3 [i_0])))), -127));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            {
                var_17 -= ((-6092323930836779235 ? 0 : 2168728109));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 15;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                            {
                                var_18 -= (((!var_11) >> (-116 - 107)));
                                var_19 = ((!((min(-1, ((18494 ? 1 : -27107)))))));
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                            {
                                var_20 = (min(var_20, (((2916479768253782697 ? 63 : 1)))));
                                arr_28 [i_3] = (((arr_12 [1] [i_3 - 1]) - (-127 - 1)));
                            }
                            var_21 = (max(var_21, ((max(1, -1)))));
                            arr_29 [i_4 + 1] = (min(((((arr_11 [i_3 - 1] [i_4 + 1]) / 217))), (arr_1 [i_3] [i_4 + 2])));
                        }
                    }
                }
                arr_30 [i_4] = (min((((((90 && (arr_0 [0]))) && (arr_25 [i_3] [i_3] [i_3] [i_3] [i_4] [i_4])))), 8388096));
                arr_31 [i_4] = ((~(max((min((arr_25 [i_3] [i_3] [i_4] [i_4] [i_4] [i_4]), 97)), ((((arr_21 [i_3 - 1] [i_4] [1] [i_4] [0]) & var_5)))))));

                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_22 = (((arr_6 [i_3] [i_4] [i_10]) ? ((((!((min(1649267441664, -116))))))) : (((((arr_1 [1] [i_9]) ? var_0 : var_10)) | -127))));
                                var_23 += (max(115, (((var_11 > (arr_14 [i_3 - 1] [i_4 + 1]))))));
                            }
                        }
                    }
                    var_24 = ((~((1532359732 ? (arr_4 [i_4 + 2]) : 1514006400368329734))));
                }
                for (int i_12 = 2; i_12 < 15;i_12 += 1) /* same iter space */
                {
                    arr_41 [i_3] [i_4] [i_3] = (arr_19 [6] [13]);
                    var_25 = (max(((min(1, (6092323930836779235 || var_9)))), (arr_2 [1] [1])));
                }
                for (int i_13 = 2; i_13 < 15;i_13 += 1) /* same iter space */
                {
                    var_26 &= ((((((arr_20 [i_3 - 1] [i_4 + 1] [i_13] [i_4]) ? (arr_19 [i_13 - 2] [i_4 + 2]) : (arr_20 [4] [i_4 + 2] [i_13] [i_4 - 1])))) || (arr_19 [i_13 - 2] [i_4 - 1])));
                    var_27 = (min(var_27, ((min((((-32767 - 1) ? var_2 : 1)), (~-22151))))));
                    arr_44 [i_3] [i_3] [i_13] = (10 % 5728891684431248302);
                }
            }
        }
    }
    #pragma endscop
}
