/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = min((((((arr_2 [i_0] [11]) + var_10)) / ((((var_6 + 2147483647) << (((arr_1 [i_0] [i_0]) - 4947393108467633242))))))), (arr_0 [i_0]));
        var_16 = (((arr_0 [12]) % (arr_2 [i_0] [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_0] [i_1] = arr_4 [i_0] [i_1];

            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                var_17 ^= (arr_1 [i_1] [i_2]);
                var_18 = (min(var_18, ((((arr_8 [i_2] [i_0] [i_2 + 2] [i_2 + 3]) ? (arr_8 [i_2] [i_0] [i_2 - 1] [i_2 + 4]) : (arr_8 [14] [i_0] [i_2 + 1] [i_2 - 1]))))));
            }
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_19 = (max(var_19, ((min(((((min(var_5, 3672195861350218092))) ? (arr_1 [i_0] [i_0]) : (arr_9 [i_0]))), var_10)))));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_22 [i_0] [i_3] [i_3] [i_5] [i_6] = (arr_10 [i_5]);
                        var_20 ^= (((var_11 || (arr_19 [12] [12] [i_4] [i_5] [i_5]))) ? (arr_1 [i_0] [i_3]) : -1);
                        var_21 = (((arr_7 [i_3] [4] [i_5]) >= (arr_12 [i_0])));
                    }
                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        var_22 ^= ((var_3 << (((arr_2 [i_5] [i_5]) / (((arr_16 [i_0] [i_0] [4] [1]) % (arr_15 [i_0] [10] [i_7])))))));
                        var_23 ^= (((arr_14 [i_0] [i_4] [i_5] [9]) ? (((((-9223372036854775807 - 1) > (var_9 == var_10))))) : (~-5340099356110277749)));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_28 [4] [i_3] [i_4] [i_5] [1] = (arr_21 [1] [i_5] [i_5] [i_4] [i_3] [i_0] [5]);
                        var_24 = ((+((var_1 ? (arr_2 [i_0] [i_3]) : (arr_7 [i_3] [i_4] [i_0])))));
                    }
                    var_25 = ((((max((arr_10 [i_4]), 4))) ? (((arr_10 [i_0]) ? (arr_10 [i_0]) : (arr_10 [i_4]))) : ((max((arr_10 [i_0]), (arr_10 [i_0]))))));
                    var_26 += ((((!(arr_25 [i_0] [8] [i_0] [i_0] [i_4]))) ? var_0 : ((((var_9 < (arr_12 [i_0])))))));
                }
                var_27 = ((27274 ? (((arr_25 [i_0] [i_3] [i_0] [14] [i_4]) ^ (arr_8 [12] [i_0] [i_0] [10]))) : ((min((arr_0 [i_3]), -21565)))));
                var_28 ^= -2620;

                /* vectorizable */
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        var_29 = (max(var_29, (((140737488355327 ? (arr_8 [i_0] [i_0] [i_9 + 1] [i_9 - 1]) : (arr_6 [i_0] [i_3] [i_3] [i_10]))))));
                        var_30 ^= (!var_8);
                        var_31 ^= ((var_5 ? ((var_5 * (arr_7 [i_0] [i_0] [i_4]))) : (2620 && var_9)));
                    }

                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        arr_39 [i_9] [i_9] [i_9] = ((10789919029810667475 ? (!-6894662887388421212) : (30697 - var_7)));
                        arr_40 [i_9] [i_9] [6] [i_9] [8] = ((!(arr_13 [i_11] [i_9] [i_3])));
                    }
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_32 = (((arr_11 [i_9] [i_4] [13]) ? (arr_11 [i_3] [i_4] [i_4]) : (arr_11 [5] [5] [7])));
                        var_33 = (((arr_3 [i_9 - 1]) || 6940972756237083408));
                        var_34 = (min(var_34, (-16262 <= var_0)));
                        var_35 = (min(var_35, (arr_38 [i_0] [9] [2] [i_0])));
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_36 = (max(var_36, (arr_11 [i_4] [i_4] [i_4])));
                        var_37 += (((arr_21 [i_9 + 1] [4] [i_9 - 1] [0] [i_9 - 1] [i_9 + 1] [i_9]) > (arr_21 [i_9 + 1] [7] [i_9 + 1] [i_9] [i_9 + 1] [i_9 - 1] [i_3])));
                        arr_45 [i_0] [i_0] [3] [i_4] [i_9] [i_9] [i_9] = (arr_41 [i_9] [i_9 - 1]);
                        var_38 = arr_17 [i_0] [i_3] [i_3] [i_9] [i_13] [13];
                    }
                    arr_46 [i_0] [i_9] [i_4] [9] = ((~(arr_23 [i_9 - 1] [i_4] [i_4] [i_4] [i_3] [i_0] [i_0])));
                    var_39 ^= ((~((10789919029810667479 ? (arr_32 [9] [i_3] [i_4] [i_9 + 1]) : -26979))));
                }
            }
        }
        var_40 ^= 2504364384357456338;
    }
    for (int i_14 = 0; i_14 < 22;i_14 += 1)
    {
        arr_49 [3] = (arr_48 [15]);
        var_41 = var_12;
        var_42 = ((((((((arr_47 [i_14]) ? 3672195861350218105 : (arr_47 [i_14])))) ? (arr_47 [11]) : (((arr_48 [i_14]) & var_11)))) | (arr_47 [19])));
    }
    #pragma endscop
}
