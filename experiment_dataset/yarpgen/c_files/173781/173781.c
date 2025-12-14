/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_15 ^= (arr_0 [i_0]);
        arr_2 [i_0] [i_0] = (((min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])))) || var_1);
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_5 [4] [i_1] &= ((((((!(arr_3 [6]))))) * (min((arr_3 [6]), (arr_1 [i_1])))));
        var_16 = (max(var_16, (1 >> 19)));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            var_17 = (arr_1 [i_1 - 1]);

            for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
            {
                var_18 = (min(var_18, (arr_10 [i_3] [7] [i_1])));
                var_19 = (arr_4 [1] [i_2 + 2]);
                var_20 = (arr_4 [i_1] [i_1]);
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
            {
                var_21 = var_2;
                var_22 = (arr_6 [i_1 + 1]);
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
            {
                var_23 = ((65535 && (arr_12 [i_1 + 1] [i_2 - 1] [i_5] [i_2 - 1])));
                arr_18 [i_1] [i_1] = (arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 1]);
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    var_24 = (arr_23 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1] [i_1]);
                    arr_25 [i_1] [i_6] [i_2] [i_1] = (((arr_24 [i_2 - 1] [0] [0] [i_7 - 1]) < (arr_10 [i_2 + 1] [i_6] [i_6])));
                }
                for (int i_8 = 2; i_8 < 8;i_8 += 1)
                {
                    var_25 += var_11;
                    var_26 = -2;
                }
                for (int i_9 = 1; i_9 < 7;i_9 += 1)
                {
                    var_27 = (min(var_27, (arr_9 [i_9 + 2] [i_1 - 1] [i_2 + 2])));
                    arr_31 [i_1] [i_2] [i_2] [i_9] = ((12 >> (((arr_16 [i_2 + 3] [i_2 + 3]) - 3651368906))));
                    var_28 *= (!-2);
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_29 = (var_5 < (arr_13 [i_11] [i_1] [i_1] [i_1]));
                            arr_38 [i_1] [i_1] [i_1] [i_10] [i_11] = (arr_10 [i_1 + 1] [i_1 + 1] [i_2 - 1]);
                            var_30 = (max(var_30, (!1)));
                            var_31 = (min(var_31, (arr_19 [i_1 - 1])));
                        }
                    }
                }
            }
            arr_39 [i_1] = (((arr_14 [i_1] [i_1] [i_2 + 2]) || var_10));
            arr_40 [i_1] = (arr_3 [i_1]);
            var_32 = (((arr_30 [i_2] [i_2] [i_2] [i_2 + 1]) == (arr_30 [i_2] [i_2] [i_2] [i_2 + 2])));
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
        {
            var_33 ^= ((((max((arr_26 [0] [i_1] [i_1] [0]), (arr_26 [2] [i_1 - 1] [i_1 - 1] [2])))) >> ((((var_11 - (arr_26 [4] [i_1] [i_1] [4]))) + 133))));
            var_34 = (min(var_34, (((var_7 && ((((arr_22 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1]) >> (var_3 - 43345)))))))));
        }
        for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
        {
            arr_47 [i_1] [i_13] [i_1] = (arr_21 [i_1] [i_1] [4]);
            var_35 = (min(var_35, var_6));
        }
    }
    for (int i_14 = 1; i_14 < 9;i_14 += 1) /* same iter space */
    {
        var_36 |= (((!(arr_19 [i_14]))));
        var_37 = (min(var_37, (((min((arr_42 [i_14 - 1] [3] [i_14]), (arr_42 [i_14 - 1] [i_14] [i_14])))))));
        arr_51 [i_14] [i_14] = var_4;
    }
    #pragma endscop
}
