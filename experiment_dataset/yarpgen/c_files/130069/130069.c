/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_12 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [1] [1] &= ((var_2 ? var_9 : (arr_5 [i_0] [i_0 + 1] [i_3 - 4] [2])));
                            arr_13 [1] [i_1] [1] [1] [i_3] [i_4] = (arr_9 [i_0 - 1] [0] [i_1] [i_3 - 3]);
                            var_12 -= ((-(arr_0 [i_0 - 2])));
                            arr_14 [1] [3] [i_3] [i_4] = var_5;
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 15;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_2] [1] [7] [i_3] [i_5 - 2] = ((var_8 ? var_10 : (((var_3 ? 9174 : var_9)))));
                            arr_18 [4] [1] [4] [i_3 + 1] [i_3] = (arr_1 [i_1]);
                            arr_19 [i_0] [i_0] [i_3] [i_0 - 1] [i_0 + 1] = ((((((arr_3 [7]) % var_11))) ? (((var_0 ? (arr_4 [1]) : var_4))) : -8274062000378483304));
                        }
                        arr_20 [9] [i_0 - 2] [i_3] [i_3 - 3] [i_2] = (arr_0 [i_0]);
                        arr_21 [i_3] [i_1] [i_2] [10] = ((-((252 ? (arr_4 [i_0 - 1]) : (arr_4 [i_0 + 1])))));
                    }
                    arr_22 [i_0] [i_1] [i_2] [i_2] = var_8;
                }
            }
        }
        var_13 = var_3;
        /* LoopNest 3 */
        for (int i_6 = 4; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {
                        var_14 += ((!(((var_5 ? (var_9 && var_7) : (arr_24 [i_0] [11] [i_0]))))));
                        arr_33 [i_0] [10] [3] [i_6] = ((-4 * (1986084266 || -61)));
                        arr_34 [12] &= (((arr_8 [13] [i_0 - 1] [i_0 + 1] [10] [i_6 + 2]) ? ((((((((arr_1 [i_0]) > -8461890773998848867)))) != var_10))) : var_0));
                        arr_35 [17] [i_6] [4] [i_6] [i_0] = (((!var_11) >> (((((((var_9 ? (arr_30 [i_0 - 2] [6]) : (arr_7 [5] [i_0])))) ? (12 - var_6) : (arr_27 [i_0] [9] [4]))) + 6028777826832333138))));
                    }
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 10;i_9 += 1)
    {
        arr_38 [i_9] = -var_1;
        var_15 |= ((((((arr_6 [i_9 + 1] [i_9 - 1]) ? var_1 : (arr_6 [i_9 - 1] [i_9 + 2])))) ? (arr_6 [i_9 + 1] [i_9 + 1]) : (((arr_6 [i_9 - 1] [i_9 + 1]) ^ (arr_6 [i_9 - 1] [i_9 + 1])))));
    }
    var_16 = var_10;
    #pragma endscop
}
