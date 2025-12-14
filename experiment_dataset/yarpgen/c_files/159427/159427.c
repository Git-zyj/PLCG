/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((!(((-(arr_1 [i_0]))))));

        for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_12 [13] [i_3] = ((arr_10 [i_0] [i_0] [i_1] [i_1] [i_3] [i_3]) * (arr_5 [i_1 + 3] [i_1 + 2]));
                        arr_13 [i_3] [11] = (arr_6 [i_0]);
                        arr_14 [10] [10] [i_2 - 1] [i_3] = ((18446744073709551602 <= ((224 ? (arr_11 [i_0] [4]) : (arr_6 [14])))));

                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            arr_18 [i_0] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_3] [i_1 + 3] [20] = (-32767 - 1);
                            arr_19 [i_0] [i_1] [i_3] [i_1] [i_4] [i_2] = ((!((-31849 <= (arr_11 [i_0] [i_3])))));
                            arr_20 [i_0] [i_3] [i_0] = 34;
                            arr_21 [i_3] [i_0] [i_3] = (arr_17 [i_0] [i_0] [i_0] [i_0]);
                            arr_22 [10] = (((~1010631135) & (arr_6 [i_3])));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_26 [i_0] [14] [14] [i_5] = 25536;
                            arr_27 [i_0] [i_0] [i_2] [i_3] [i_5] [i_3] [i_0] = 2147483647;
                        }
                        for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            arr_30 [i_1 + 1] [i_0] [i_2] [i_3] [0] = 1;
                            arr_31 [1] [i_1] [1] [1] [i_3] [i_6] = ((1 - (arr_1 [i_2 + 1])));
                            arr_32 [i_0] [i_3] [i_2 - 2] [i_2 - 2] [i_3] = (arr_15 [i_6 + 1] [i_2] [i_2] [i_3] [i_6] [i_2] [i_1 + 1]);
                            arr_33 [i_3] [i_1 + 1] [i_1 + 1] [i_3] [i_1 + 1] = arr_2 [i_6 - 1] [i_1 + 2];
                        }
                        for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            arr_38 [i_0] [i_3] [i_2] [i_3] [i_7 + 2] = (((arr_1 [i_2 - 2]) - (arr_17 [i_0] [18] [9] [18])));
                            arr_39 [i_0] [i_1] [16] [i_3] [i_3] [i_7] = 9223372036854775807;
                            arr_40 [i_0] [i_1] [i_2] [10] [i_2] = ((((((arr_5 [i_3] [i_7 - 2]) <= (arr_8 [i_1 - 1] [i_2] [i_3] [i_7])))) >> (((arr_36 [i_0] [6] [i_1 + 1] [6] [i_7 - 2]) - 239007652))));
                            arr_41 [i_2 + 2] [i_1] [i_3] [i_3] [i_7] = (!(arr_29 [i_2 + 1] [i_2] [i_3] [i_2] [i_2 + 1] [i_2]));
                        }
                    }
                }
            }
            arr_42 [i_0] [i_0] [i_0] = (!9223372036854775807);
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_52 [i_0] [i_1] [i_10] [i_10] = ((arr_51 [i_0] [i_1] [i_8 - 1] [12] [i_10] [i_9 + 1]) && (arr_51 [17] [i_1] [i_8 + 2] [i_1 + 1] [i_10] [20]));
                            arr_53 [i_0] [6] [6] [i_0] [i_10] = (arr_29 [i_0] [i_1 + 3] [20] [i_9] [i_10] [20]);
                        }
                    }
                }
            }
        }
        for (int i_11 = 1; i_11 < 18;i_11 += 1) /* same iter space */
        {
            arr_56 [i_11] [i_11] [17] = 742601144;
            arr_57 [i_11] [i_11] = (arr_44 [i_0] [2] [i_11]);
        }
    }
    var_20 = 19957;
    #pragma endscop
}
