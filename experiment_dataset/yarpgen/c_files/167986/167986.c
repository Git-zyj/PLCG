/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_7 ? (var_6 > 22169) : ((2646127760459182181 ? var_1 : -2646127760459182175)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_12 = var_0;
            arr_5 [i_0] [i_1 - 1] [8] = (arr_2 [0]);
            arr_6 [i_0] = (~((7 ? (arr_4 [i_1 - 1]) : -3823004035887899892)));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_13 = (((-4952746571428794859 + 9223372036854775807) << (var_4 - 85)));

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_14 = (arr_4 [i_0]);
                var_15 = (arr_8 [i_0] [i_0]);

                for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    arr_15 [i_2] = ((-(arr_11 [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2 + 1])));
                    var_16 = var_2;
                    arr_16 [2] [2] [5] [i_3] [i_4] = 3;

                    for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
                    {
                        var_17 = 13;
                        arr_19 [6] [i_4] [i_3] [i_2] [i_0] = var_5;
                    }
                    for (int i_6 = 2; i_6 < 9;i_6 += 1) /* same iter space */
                    {
                        var_18 = (((-1 * (arr_3 [4] [i_4]))));
                        arr_22 [i_0] [i_2 + 2] [7] [i_4] [i_6 - 2] = (arr_10 [i_6 + 2] [i_4] [0] [i_2]);
                    }
                    var_19 = (min(var_19, -30));
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    var_20 = ((!(!2646127760459182183)));
                    var_21 = (((((-1 ? 4294967295 : 9223372036854775807))) ? (var_4 / var_3) : (((arr_8 [i_3] [i_0]) ? 0 : (arr_18 [i_7] [i_2 + 2] [i_3] [i_7] [i_2])))));

                    for (int i_8 = 3; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_0] [i_3] [i_7] [i_7] = (((~-102) ? var_2 : -1));
                        var_22 = (max(var_22, -13574));
                        arr_28 [i_0] [0] = (var_2 * -80);
                        var_23 = (((arr_20 [4] [i_8 + 1] [i_7] [i_7] [3] [i_0]) ? (arr_20 [i_8] [i_8 + 1] [8] [i_8] [i_8] [i_8]) : (arr_20 [i_8] [i_8 + 1] [9] [i_8] [i_7] [i_7])));
                        arr_29 [i_0] [i_0] [i_0] [i_0] [5] = ((((arr_14 [i_2 - 1] [i_3] [i_7] [2]) - var_9)));
                    }
                    for (int i_9 = 3; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        var_24 = var_7;
                        arr_33 [i_9] = 128;
                        var_25 = arr_0 [10];
                        var_26 = var_3;
                    }
                    for (int i_10 = 3; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        var_27 = (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_28 = (max(var_28, 127));
                    }
                    var_29 = -6812009315008509957;
                }
                for (int i_11 = 2; i_11 < 7;i_11 += 1)
                {
                    arr_39 [i_0] [i_0] [i_0] [i_2 - 1] [i_3] [i_11] = (((arr_11 [i_0] [i_2 + 1] [i_11 - 1] [i_11 - 2]) ? (arr_11 [7] [i_2 + 1] [7] [i_11 + 1]) : (arr_11 [i_2] [i_2 + 1] [i_2] [i_11 + 2])));
                    var_30 = (-127 - 1);
                }
                arr_40 [i_3] [i_2] [i_0] = (~119);
            }
            var_31 = (arr_32 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 2]);
        }
        var_32 = (min(var_32, ((min((((-127 - 1) ? (((max(1, var_4)))) : var_6)), ((-9223372036854775807 ? 1121045204 : 511)))))));
        var_33 = (min(var_33, ((max((-127 - 1), 7)))));
    }
    var_34 = 65514;
    #pragma endscop
}
