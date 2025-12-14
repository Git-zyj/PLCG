/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (((((~((max(var_16, 25349)))))) ? (((var_13 ? var_0 : ((1338040935 ? var_13 : 110))))) : 1125625028935680));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 ^= (((arr_1 [i_0] [i_0]) ? var_3 : var_11));
        arr_4 [i_0] = ((+((205 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_19 = (-1125625028935681 - 2766298375);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = (max(var_20, var_16));
        var_21 = -21;
        arr_8 [i_1] = (var_6 ? ((0 ? var_11 : (arr_7 [i_1]))) : (0 >= var_0));
        arr_9 [i_1] = (min(((min(1, ((!(arr_7 [i_1])))))), var_3));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                var_22 = var_8;

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        var_23 = (max(var_23, 77));
                        var_24 = ((~((~(arr_6 [i_2])))));
                        var_25 = (min(var_25, (((-((var_3 ? 18183 : var_15)))))));
                        var_26 *= 1;
                    }
                    for (int i_7 = 2; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_2] [1] [i_2] = (((((~(arr_15 [i_4])))) ? 32763 : (((arr_10 [1]) >> (((arr_23 [i_2] [i_4]) - 195))))));
                        var_27 += -1125625028935681;
                        var_28 *= var_13;
                        arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (1 && 0);
                        arr_28 [2] [i_5] [i_5] [2] [i_7] = ((18 ? -1605140024 : 195));
                    }
                    for (int i_8 = 2; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_2] [3] [i_4] [i_5] = ((~(arr_16 [i_8 + 2] [i_8] [i_4] [i_3 + 3])));
                        var_29 = (~(arr_19 [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]));
                        var_30 += ((99 ? ((0 ? (arr_21 [i_2] [i_3 + 3] [i_3 + 3] [i_4] [i_5] [i_8]) : (arr_21 [i_2] [13] [8] [i_2] [i_2] [i_2]))) : 51));
                    }
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        var_31 -= 1;
                        var_32 = (!-11869);
                    }
                    arr_35 [4] [6] [5] [6] [6] = (arr_34 [i_2] [13] [9] [i_2] [i_2] [9] [i_2]);

                    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                    {
                        arr_39 [i_3] [i_3] [i_3] [i_2] = (((arr_23 [i_2] [i_2]) ? 4890981465788922086 : 1));
                        arr_40 [i_10] [1] [1] [i_4] [1] [1] [1] = 1;
                        var_33 += (arr_21 [i_2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_2]);
                        arr_41 [2] [6] [2] [i_3] [9] [i_3] [1] = (!var_15);
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                    {
                        arr_44 [1] [1] [2] = 2847129698;
                        var_34 ^= 1;
                        arr_45 [i_2] [i_2] [i_3] [i_2] [i_4] [i_5] [i_11] = ((var_10 ? (arr_34 [i_3] [i_3] [i_3] [i_3] [i_3 + 2] [i_3] [i_3 + 3]) : (arr_34 [13] [13] [13] [i_3 - 2] [i_3 - 1] [13] [i_3 + 2])));
                    }
                    for (int i_12 = 2; i_12 < 12;i_12 += 1)
                    {
                        var_35 = (min(var_35, (((!(!1))))));
                        var_36 ^= ((-2147483631 == (arr_25 [i_2] [i_3 - 1] [i_4] [i_5] [i_5] [i_12 - 2])));
                    }
                }
            }
            arr_50 [i_2] [i_2] [i_3 - 1] = (((arr_11 [4] [4]) >= (~var_16)));
            var_37 ^= (1 ? (arr_25 [i_2] [i_2] [12] [i_2] [i_3 + 1] [i_3 - 1]) : var_3);
        }
        var_38 = (min(var_38, (arr_7 [i_2])));
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 15;i_13 += 1)
    {
        var_39 = 1;
        arr_54 [i_13] = 1;
        var_40 = (max(var_40, (((var_1 ? ((1 ? 1 : 1897116683)) : 113)))));
    }
    var_41 = (max(var_41, 1897116684));
    #pragma endscop
}
