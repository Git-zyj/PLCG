/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((~((var_9 / (arr_1 [i_0 + 4])))));
        arr_3 [i_0 + 3] |= ((-((((max(var_2, 109))) ? (max((arr_0 [i_0 + 2] [i_0 - 2]), var_15)) : (!var_18)))));
        arr_4 [i_0] [i_0 - 1] = ((-((~(~5631462882721784698)))));
        var_20 = (min(var_20, ((max((((var_10 % var_3) ? var_12 : ((var_8 ? var_12 : (arr_1 [i_0 + 4]))))), ((max((((arr_1 [i_0 + 1]) ? var_8 : (arr_1 [i_0]))), (-32767 - 1)))))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_21 = (arr_5 [i_1]);
        var_22 = (min(var_22, -var_0));

        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] [i_2] [i_1] = var_7;
            var_23 = (min((((-var_3 < (max(10, -1852008260354179858))))), (min(((var_10 ? 15935227226162219932 : var_12)), 1169821994851975181))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] [10] = (((((arr_11 [i_3]) + var_9)) < (var_17 || var_16)));
            var_24 = (!2314377445);
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
        {
            var_25 = ((239 ? 17276922078857576435 : -11));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                var_26 = (arr_15 [i_5] [i_4] [i_1] [i_1]);

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        arr_22 [i_7] [12] [i_4] [22] [i_7] = (((arr_15 [i_1] [i_5] [i_6] [i_7]) || var_15));
                        var_27 = ((var_14 ? ((var_2 ? (arr_16 [i_6] [i_4]) : var_5)) : (var_6 && var_11)));
                    }
                    var_28 = ((arr_5 [i_5]) ? (arr_7 [i_4]) : (arr_11 [i_4]));
                }

                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    var_29 = (min(var_29, var_5));
                    var_30 = (min(var_30, (((~(arr_13 [i_5]))))));
                }
                var_31 = (min(var_31, var_6));
                var_32 = (((arr_19 [i_4] [i_4] [i_4]) ? (arr_19 [i_1] [i_4] [i_4]) : (arr_19 [i_4] [i_4] [i_4])));
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
            {
                arr_28 [i_4] [i_1] [i_1] = ((!(17276922078857576434 * -6)));
                arr_29 [i_4] = ((((((((-127 - 1) % var_11)) | (((var_17 >= (arr_11 [i_4]))))))) < (((min(var_8, -256491823233073582)) / -var_18))));
                var_33 = (((min(var_15, (arr_6 [i_1] [i_4]))) >> (((arr_6 [i_4] [i_9]) - 2396578395))));
                var_34 = ((~((~((var_9 ? (arr_5 [i_4]) : var_0))))));
            }
            for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
            {
                var_35 ^= (((arr_10 [i_4]) ? (((arr_16 [i_4] [i_1]) ? var_8 : (arr_16 [i_10] [i_10]))) : ((min((arr_10 [i_1]), var_8)))));
                arr_33 [i_4] = (i_4 % 2 == 0) ? (((max((((arr_6 [1] [i_4]) << (((arr_14 [i_4] [i_4] [1]) + 3812)))), -var_4)))) : (((max((((arr_6 [1] [i_4]) << (((((arr_14 [i_4] [i_4] [1]) + 3812)) + 23226)))), -var_4))));
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    arr_38 [i_1] [1] [i_4] = (((min((arr_10 [i_11]), (arr_10 [i_11]))) >> (((((arr_21 [i_1] [i_4] [i_4] [i_12]) ? var_1 : (arr_21 [i_12] [i_4] [i_4] [i_1]))) + 49))));
                    arr_39 [i_4] [15] [15] [i_12] = (max(-3, var_2));
                    var_36 = (((!65534) ? (20 / 14) : (arr_23 [i_1] [i_12] [i_4] [i_4] [i_4] [i_1])));
                    var_37 = (min(var_37, (((((min((arr_30 [i_4] [i_4]), var_18))) ? var_7 : (((((var_17 | (arr_27 [i_1] [i_4] [i_12]))) + (~var_17)))))))));
                    arr_40 [i_4] [i_4] [i_11] [i_4] = (((((1980589851 ? (((var_3 && (arr_34 [i_1] [i_1] [i_1] [i_1])))) : (11739027098707351277 && 1)))) ? ((var_5 ? (arr_10 [i_1]) : (max((arr_14 [i_4] [15] [i_4]), (arr_6 [i_4] [i_4]))))) : (((min((arr_27 [i_4] [5] [i_4]), (arr_27 [i_1] [i_4] [i_4])))))));
                }
                var_38 = (((((-(min(var_12, -5290217661322929731))))) ? (((!(((var_17 ? (arr_13 [i_4]) : var_6)))))) : (((!20) ? (var_5 || var_7) : var_8))));
                var_39 = -8127;
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        arr_43 [i_13] [i_13] = (var_9 >= var_1);
        arr_44 [i_13] [i_13] = ((arr_21 [i_13] [i_13] [i_13] [i_13]) ? (arr_21 [i_13] [i_13] [i_13] [8]) : (arr_21 [i_13] [i_13] [i_13] [i_13]));
    }
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {

        /* vectorizable */
        for (int i_15 = 2; i_15 < 13;i_15 += 1)
        {
            var_40 = ((~(((arr_14 [i_14] [i_14] [i_14]) + 18446744073709551615))));
            var_41 = (((var_17 ? (arr_21 [i_14] [i_15 - 1] [i_14] [i_14]) : var_17)));
        }
        var_42 = (max(var_42, ((max(((3391615565 ? -var_8 : var_10)), (arr_15 [i_14] [i_14] [i_14] [i_14]))))));
        var_43 = (min(var_43, 252));
        var_44 = ((-(arr_6 [i_14] [12])));
    }
    #pragma endscop
}
