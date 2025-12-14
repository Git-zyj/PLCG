/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_4 ? 63 : ((((93 ? 1 : var_4)) + var_0))));
    var_13 = ((-211 ? ((((3923916096898679411 | var_11) ? (-3923916096898679428 && var_3) : var_0))) : var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [1] [i_0] = ((-(((arr_4 [i_1 + 1] [i_2 - 4] [i_2 - 2]) - (var_7 + var_1)))));
                    arr_9 [i_0] [i_1 + 1] [i_0] [i_1] = ((3923916096898679417 ? ((min(var_3, (~var_10)))) : 18446744073709551615));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [21] = ((var_9 ? ((var_3 ? var_4 : var_1)) : ((var_4 ? var_7 : var_6))));
                        arr_13 [i_3] [2] [i_1] [0] = 63979;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1 + 2] [i_0] [i_1 + 2] [i_0] = (-2147483647 ? 1958105347 : 65467);
                            arr_20 [7] [17] [i_2 - 1] [i_4] [i_2 + 2] = (arr_2 [i_4] [i_1] [i_1 + 2]);
                            arr_21 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 1] = 33554431;
                            arr_22 [i_0] [15] [i_0] = (arr_18 [i_0] [i_0] [i_0] [i_0] [i_5]);
                            arr_23 [6] [i_4] [i_2 + 1] [6] [i_0] = (arr_4 [i_4] [i_1] [i_2 - 3]);
                        }

                        for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            arr_28 [i_0] [i_0] [1] [i_0] [i_2] [i_0] [i_0] = ((63 ? var_1 : (arr_14 [i_0] [15])));
                            arr_29 [i_0] [i_0] [i_2] [i_0] [i_4] [i_1 - 1] [i_6] = (~(arr_27 [i_0] [i_2 - 2]));
                            arr_30 [20] [i_2] [20] [i_2] [i_6 + 2] |= (136365211648 ^ (arr_25 [i_0] [i_0] [i_0] [i_2 - 1] [i_4] [i_6]));
                        }
                        for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            arr_33 [i_1 + 1] [i_1] [i_1] [i_4] [i_2 - 4] = 65448;
                            arr_34 [1] [i_1 + 2] [10] [i_1 + 1] [i_1 + 1] [i_1 + 2] [4] = (var_6 + (arr_32 [i_7 - 1] [i_7]));
                            arr_35 [i_0] [i_0] [10] [i_1 + 3] [i_2] [i_4] [4] = ((var_7 ? -8070450532247928832 : ((((arr_4 [i_0] [i_1] [3]) ? var_3 : var_7)))));
                        }
                        arr_36 [1] = ((~(arr_18 [8] [8] [8] [10] [i_1 + 1])));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                    {
                        arr_39 [i_0] [12] [i_2] [i_8] = -0;
                        arr_40 [i_0] [18] [5] [i_8] = 419518604;
                        arr_41 [i_0] [i_1 + 3] [i_1 + 3] [i_2] [i_8] [i_0] = var_1;
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        arr_45 [20] [i_1 + 1] [9] [i_9] = 2065570964752608220;
                        arr_46 [i_0] [i_1 + 1] [i_9] [i_0] = (((var_3 ? (arr_24 [i_2 + 1] [i_1 + 2] [i_2 + 1] [i_1 + 2] [1]) : 419518607)));
                        arr_47 [i_0] [i_1 + 2] [i_2 - 2] [12] = ((65535 ? (min(67108863, (arr_43 [i_0]))) : (~4267363188137967292)));
                    }
                }
            }
        }
    }
    var_14 = (520192 & 419518604);
    var_15 = (min((var_6 & var_6), (!1)));
    #pragma endscop
}
