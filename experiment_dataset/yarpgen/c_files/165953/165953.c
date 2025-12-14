/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    var_16 = (11622508126471707002 / 125);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0 + 2]) & (~18)));
        var_18 = (arr_0 [i_0 + 2]);

        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            var_19 ^= var_11;
            var_20 = (min(var_20, 62796));

            for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    var_21 = var_9;
                    var_22 = ((-((8116 ? 120 : (arr_2 [i_3])))));
                    var_23 = 232;
                }
                for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_4] [i_2] [i_2] [i_0] = ((~(((arr_9 [i_0] [i_0] [i_2] [i_0]) ? 41282 : var_7))));
                    var_24 = ((var_0 ? (arr_5 [i_4]) : (~232)));
                    var_25 = (((var_13 - (arr_0 [i_0]))));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_26 = 2739;
                        arr_18 [i_0] [i_0] [i_2] [i_4] [i_2] = (arr_4 [i_0 + 2] [i_2 + 1] [i_2 + 1]);
                    }
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_27 = (max(var_27, (var_12 / 24576)));
                        var_28 = ((3566106017 - (((((arr_10 [i_0] [i_0 + 2] [i_1 - 3] [i_2] [i_0] [i_1 - 3]) >= (arr_22 [i_0 - 1] [i_1 - 1] [i_0 - 1] [i_2] [i_6])))))));
                        var_29 = -106;
                    }
                    var_30 = (((((!(arr_3 [i_1 - 3])))) - (~125)));
                }
                var_31 = (arr_0 [i_0]);
                var_32 = (!197);
            }
            for (int i_7 = 2; i_7 < 12;i_7 += 1) /* same iter space */
            {
                var_33 = (((arr_11 [i_0] [i_0 + 1] [i_0 - 1] [i_1 - 4] [i_1 - 1] [i_7 + 1]) * 0));
                arr_25 [i_1 - 3] [i_1] [i_1 - 3] [i_0 - 1] = (((((arr_2 [i_0]) ? 13685 : -121)) - (-659106118123938433 < 3835590898)));
                var_34 = (((arr_11 [i_7] [i_7 + 1] [i_7] [i_7] [i_7 - 2] [i_1 - 3]) ? (arr_19 [i_7 - 2] [i_7 + 1] [i_7 - 1] [i_1 - 1]) : (arr_11 [i_7] [i_7 - 1] [i_7 - 2] [i_7 + 1] [i_7 + 1] [i_1 - 3])));
            }
            for (int i_8 = 2; i_8 < 12;i_8 += 1) /* same iter space */
            {
                arr_28 [i_8] [i_1] [i_8] = ((((((arr_8 [i_0 + 1] [i_0 - 1] [i_1 - 2] [i_8] [i_8] [i_1 - 2]) ? (arr_3 [i_8 + 1]) : var_1))) ? var_13 : (((arr_13 [i_8] [i_1 - 4] [i_1 - 4] [i_8]) ? var_2 : 10))));
                var_35 = (min(var_35, var_10));
                var_36 = (-121 + -0);
            }
            arr_29 [i_0] [i_1 - 2] = -64;
            var_37 = (((arr_8 [i_0] [i_0] [i_1 - 3] [i_0 + 1] [i_1] [i_1 - 3]) ? (arr_8 [i_1] [i_1 - 3] [i_0 - 1] [i_1 - 3] [i_1] [i_1]) : (arr_8 [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_1] [i_0 + 2])));
        }
        for (int i_9 = 1; i_9 < 1;i_9 += 1)
        {
            var_38 = ((~(arr_3 [i_9])));
            var_39 = 26;
            arr_34 [i_0 + 1] = (((3651380527 + 15872) ? (arr_8 [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1] [0] [i_9]) : (((arr_16 [i_0] [i_0] [0] [i_0] [i_9] [i_9 - 1] [i_0 + 2]) + (arr_30 [i_0 + 1] [i_9 - 1])))));
        }
        for (int i_10 = 4; i_10 < 12;i_10 += 1)
        {
            var_40 = (((238 ^ var_4) > (((var_8 < (arr_21 [8] [i_10] [i_10] [i_0] [8]))))));
            var_41 = ((-103 == (var_2 ^ var_10)));
        }
    }
    var_42 ^= (((0 <= 1) <= 213));
    #pragma endscop
}
