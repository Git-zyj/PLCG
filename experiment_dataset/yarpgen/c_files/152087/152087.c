/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 &= var_11;
        arr_2 [17] = (((-(arr_0 [i_0]))));

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            var_18 &= ((((var_0 ? (arr_0 [i_1 - 1]) : var_10)) % (((var_3 < (arr_3 [17] [i_1 - 1]))))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_10 [i_2] [i_1] [i_1] [i_0] = var_4;
                arr_11 [i_0] [i_0] [20] [8] = ((((var_1 && (arr_0 [i_2]))) || ((var_12 && (arr_5 [i_1 + 1])))));
            }
            var_19 = 1;
        }
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_20 -= ((var_15 ? var_13 : (((!(arr_1 [i_3 + 1] [i_3]))))));

            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                var_21 = (arr_9 [i_3 + 3] [8] [i_4 + 1]);
                var_22 = var_0;
                var_23 = ((-(arr_9 [i_3 + 1] [i_4 - 1] [i_4 + 1])));
            }
        }

        for (int i_5 = 4; i_5 < 23;i_5 += 1)
        {
            var_24 *= var_1;
            arr_18 [1] [1] = (!var_6);
        }
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        var_25 = (((arr_1 [i_6 - 1] [i_6]) | (arr_1 [i_6 - 1] [14])));

        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            arr_25 [i_7] = var_1;

            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                var_26 = (arr_26 [0] [i_7] [i_8]);

                for (int i_9 = 2; i_9 < 17;i_9 += 1)
                {
                    var_27 = (!var_5);
                    var_28 = (!(((133 ? 8191 : 57344))));
                    arr_33 [7] [i_8] &= (((var_3 * var_1) / var_9));
                }
                for (int i_10 = 3; i_10 < 17;i_10 += 1)
                {
                    arr_36 [i_6] [i_6] [i_6] [i_7 + 3] [i_8] [i_10 - 3] = ((((((arr_21 [i_7]) && var_10))) << (((~var_15) - 81))));
                    var_29 = (arr_29 [i_6 - 1] [i_7] [i_7] [i_10]);
                }
            }
            var_30 = (min(var_30, var_10));
        }

        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {
            arr_40 [i_11] [i_6 - 1] [i_6] = ((var_10 && (((arr_22 [i_11 + 1]) != (arr_22 [i_11 + 1])))));
            var_31 = (((var_10 | var_3) << ((((var_1 % (arr_7 [i_6 - 1] [i_11] [i_11] [i_11 - 1]))) - 92))));
            var_32 = ((1 ? 1 : 1));
        }
        for (int i_12 = 4; i_12 < 17;i_12 += 1)
        {
            var_33 &= ((((var_4 << ((((arr_5 [i_6 - 1]) <= var_15))))) * (arr_23 [10] [10])));
            var_34 = ((var_13 & (((arr_21 [i_6 - 1]) ^ var_3))));
            arr_45 [i_12] = var_3;
        }
    }
    for (int i_13 = 1; i_13 < 8;i_13 += 1)
    {
        var_35 = (((arr_41 [i_13 + 2] [i_13 + 1] [i_13]) ? (arr_41 [i_13 - 1] [i_13 + 1] [i_13]) : (((var_9 ^ (arr_41 [i_13 + 2] [i_13 + 2] [i_13 + 1]))))));
        var_36 = (max(var_36, var_2));
        var_37 = ((var_6 >= var_10) != (arr_7 [i_13 + 1] [i_13 + 2] [i_13 - 1] [i_13 - 1]));
        var_38 ^= (((arr_15 [i_13] [i_13]) == ((((!(!var_6)))))));
        arr_48 [i_13] [i_13] = var_0;
    }
    var_39 = (var_1 % var_9);
    #pragma endscop
}
