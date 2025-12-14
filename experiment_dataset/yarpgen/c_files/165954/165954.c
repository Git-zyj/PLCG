/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 47;
    var_19 *= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] = min((((!((max(var_8, (arr_4 [i_1 - 2] [i_0]))))))), var_7);
                var_20 += (((var_15 << 1) ? var_8 : (arr_4 [i_0] [i_1 - 2])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_21 = (min(var_21, (((!(arr_3 [4] [4] [i_3]))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] = (((0 && 1015868360701676118) || ((9007035092816436793 || (arr_10 [i_3] [1] [i_1 - 1] [1] [i_0] [1])))));
                        arr_12 [i_1] [i_1] = (((var_0 >= var_4) & (var_5 != var_14)));

                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            arr_16 [i_4] [i_1] [i_2] [i_2] [i_1] [i_0] = (((!18) ? -70 : (arr_14 [i_4 + 1] [i_1 - 2] [i_1 - 1] [i_1 - 1])));
                            var_22 += (((arr_10 [3] [i_4 - 1] [i_4 + 2] [i_3] [i_1 - 3] [i_0]) ? (arr_10 [i_1] [i_4] [i_4 + 2] [i_1] [i_1 - 3] [i_1]) : (arr_10 [i_1 - 3] [1] [i_4 + 2] [i_1 - 3] [i_1 - 3] [i_1])));
                        }
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        var_23 = (min(var_23, (((var_8 >> (((arr_8 [i_0] [4] [i_1 - 2] [i_5] [i_5]) - 8151406492655454282)))))));
                        var_24 = var_17;
                        var_25 = -47;
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_1 + 3] [i_2] [i_1] = ((var_2 ? var_13 : var_11));
                        var_26 ^= (var_6 ? var_6 : (var_17 && var_4));
                        var_27 = ((var_8 ? (arr_19 [i_2] [i_1 + 3] [i_1 + 3] [i_1 - 2]) : var_15));

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_28 = var_14;
                            var_29 = 1;
                            var_30 = (0 ^ 776268628);
                            var_31 *= arr_2 [i_6] [i_6];
                        }
                        for (int i_8 = 3; i_8 < 14;i_8 += 1)
                        {
                            var_32 = (max(var_32, (((33554431 ? -1015868360701676118 : 41)))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((var_16 ^ (arr_20 [i_1 + 2] [i_1 + 3] [i_1 - 1] [i_1 - 3])));
                            arr_29 [i_0] [i_0] [i_0] [i_1] [i_8] = ((0 ? (arr_24 [i_0] [i_0] [i_2] [i_6] [i_1] [i_2] [i_0]) : var_2));
                            var_33 = (((251 & var_8) & (((var_7 + 9223372036854775807) >> (arr_1 [i_0])))));
                        }
                    }
                    arr_30 [i_0] [i_1] [i_0] [13] = (((arr_9 [i_1 + 1] [i_1 + 3] [i_1 + 1] [i_1 + 1]) ? 255 : 8867163547957637));
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    arr_33 [i_1] [10] [i_1] = var_0;
                    arr_34 [i_1] [i_1] = (min(195, (min(-586675853, (8867163547957651 >= 3781802821615581616)))));
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    arr_37 [i_1] = (((max((arr_0 [i_1] [i_1 + 3]), var_3))) ? (arr_0 [i_1] [i_1 + 2]) : (((arr_0 [i_1] [i_1 + 1]) ? var_6 : (arr_0 [i_1 + 3] [i_1 - 3]))));

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        arr_40 [i_0] [i_1] [i_0] [i_0] [i_0] = var_7;
                        arr_41 [i_1] [i_10] [i_1] [i_1] = var_8;
                        var_34 = (arr_24 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 2] [i_1] [i_1 + 3] [i_1 + 3]);
                    }
                    var_35 = var_1;
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 13;i_12 += 1)
                {
                    var_36 = ((-1 ? -103 : 1048572));
                    var_37 = arr_8 [i_1] [i_1 - 2] [i_1] [i_1 + 2] [i_1];
                }
            }
        }
    }
    #pragma endscop
}
