/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1 + 1] [i_1 + 1] = (arr_2 [i_0 - 1]);
            var_18 |= (arr_2 [i_1]);
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_19 = 13711689314539828130;
            var_20 = 0;
        }
        for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_21 = 1;

                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_22 = 1;
                        var_23 = (max(var_23, (((var_9 ? 1 : (-14378246289526201 < var_6))))));
                        var_24 += ((var_7 ? (((!(arr_20 [12] [12] [i_4] [i_5] [i_4])))) : (0 < 1494934489)));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_25 [i_0 - 3] [i_3 - 1] [i_4] [i_0 - 3] [i_0] = -636738557;
                        var_25 = 32767;
                    }
                    var_26 = (arr_10 [i_0]);
                    var_27 = var_15;
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    arr_29 [i_0] = ((((60 ? 17703123303249237220 : -32759)) / (arr_0 [i_8])));
                    var_28 = (min(var_28, (arr_9 [1])));
                    var_29 = (((arr_13 [i_4] [i_8]) ? var_0 : 8532462633866002666));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    arr_32 [i_0] [i_3] [i_4] [i_0] [i_9] = ((158 ? (arr_7 [i_0 - 1] [i_3 + 1] [i_4]) : (arr_7 [i_0 - 2] [i_3 + 1] [i_4])));
                    var_30 = (max(var_30, (((523882785 >> (var_13 - 19621))))));
                    var_31 = var_14;
                    arr_33 [i_0] [i_0] [13] [i_0] [i_0] = var_12;
                }
            }

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {

                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {
                    var_32 = (var_12 | 1);
                    var_33 = (((arr_8 [i_0]) || 11));
                    var_34 = -1429001767993124683;
                }
                var_35 = 1;
                var_36 = 1779876204;

                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    var_37 = (((arr_30 [i_0] [i_0] [i_0]) | ((var_11 >> (var_0 - 58)))));
                    arr_44 [i_0] [i_10] [i_12] = (arr_12 [i_0] [i_0 - 2]);
                    arr_45 [i_0 - 3] [i_0 - 3] [i_0] = var_1;
                }
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    var_38 = (!var_5);
                    var_39 = (var_14 ^ var_14);
                }
                var_40 += (!-17668);
            }
        }
        var_41 = var_16;
    }

    for (int i_14 = 4; i_14 < 19;i_14 += 1) /* same iter space */
    {

        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            var_42 = -32735;
            var_43 = 2147483647;
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            var_44 = (~14378246289526200);
            var_45 += (~14378246289526217);

            for (int i_17 = 1; i_17 < 17;i_17 += 1)
            {
                var_46 = ((((((arr_51 [i_16] [i_16]) / var_15))) ? var_9 : (~var_11)));
                var_47 = ((!(arr_51 [i_16] [i_17 + 3])));
            }
            var_48 = (((arr_48 [i_14]) > (arr_54 [i_14 - 4] [1])));
        }
        var_49 = (((max(var_15, 158))));
    }
    /* vectorizable */
    for (int i_18 = 4; i_18 < 19;i_18 += 1) /* same iter space */
    {
        var_50 = (-2147483647 - 1);
        var_51 = ((var_9 ? -26846 : (arr_59 [i_18 + 1])));
    }
    var_52 = ((!(((var_6 ? ((-2147483631 ? 0 : 54619)) : var_0)))));
    var_53 = 1;
    var_54 |= var_14;
    #pragma endscop
}
