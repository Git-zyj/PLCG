/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_19 <= (!var_0)));
    var_21 = ((((!(var_0 && var_18))) && ((var_12 || (!var_18)))));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_22 = -var_7;
            arr_4 [i_0] = (!-30965);
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                arr_11 [1] [i_2] [i_3] = (!3749897272);

                for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                {
                    var_23 = var_7;
                    var_24 = ((-(arr_12 [i_0 + 1] [i_2 - 1] [i_3] [i_3])));
                    arr_15 [i_0] [i_2 + 2] [10] [i_4] &= ((!(arr_12 [i_0] [i_0 + 1] [i_2 + 1] [i_4])));
                    var_25 = (arr_14 [20] [i_2] [i_3] [i_4] [i_2 + 2]);
                    var_26 = ((((((arr_12 [i_0] [i_2] [i_3] [i_3]) ? 16596702500824504840 : 16596702500824504859))) ? (arr_6 [i_0 - 1] [i_2 + 1]) : (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {
                    var_27 = (((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1]) : var_3));

                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_28 |= (arr_8 [i_3]);
                        var_29 = var_15;
                        var_30 |= var_0;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_22 [i_0] = (arr_17 [i_0] [i_0 + 1] [i_0] [i_0] [0]);
                        arr_23 [i_7] [i_0] [i_3] [i_2 + 2] [i_0] = (arr_19 [i_0 + 1] [12] [i_2 + 1] [i_2] [i_2] [i_7] [15]);
                    }
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    var_31 |= var_18;
                    var_32 = (((arr_21 [i_8] [i_2 + 1] [i_3] [i_8] [i_8] [i_3] [i_3]) ? (arr_21 [i_2 + 2] [i_3] [i_3] [i_3] [i_2 + 2] [i_2 - 1] [i_0 + 1]) : (arr_21 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [14] [i_0 - 1] [i_0])));
                    var_33 = -1850041572885046768;
                    var_34 = ((!(((arr_0 [i_0]) < -115))));
                }
                var_35 = (~1850041572885046778);
            }
            for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
            {
                var_36 = -32;
                var_37 = 36;
            }
            for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 3; i_11 < 20;i_11 += 1) /* same iter space */
                {
                    var_38 = (arr_26 [i_2]);
                    var_39 = (arr_29 [i_0] [i_0] [2]);
                    var_40 = (arr_30 [i_2 + 1] [i_2 + 2]);
                }
                for (int i_12 = 3; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    var_41 = (max(var_41, (((min((arr_29 [i_0] [i_0] [i_0]), 2846242138))))));
                    arr_35 [i_12] = var_7;
                }
                for (int i_13 = 1; i_13 < 20;i_13 += 1)
                {

                    for (int i_14 = 2; i_14 < 20;i_14 += 1)
                    {
                        var_42 = (min(var_42, ((((arr_13 [i_0] [i_13 - 1] [i_10] [i_0] [i_0 - 1] [i_10]) ? (min((arr_8 [i_0]), (arr_13 [i_0] [i_13 - 1] [i_0 + 1] [i_13] [i_0 - 1] [11]))) : ((min((arr_32 [i_0] [i_13 - 1] [i_10] [i_14] [i_0 - 1]), var_7))))))));
                        var_43 = ((1850041572885046763 ^ 1850041572885046763) ? var_10 : -6079206548214283174);
                    }
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_44 = (arr_31 [i_0] [1] [i_10] [i_15] [i_15] [i_10]);
                        arr_44 [i_15] [i_15] [20] [i_2] [i_2 + 2] = (arr_24 [i_0 + 1] [i_0]);
                    }
                    var_45 = (max(var_45, (((((((min(var_1, (arr_31 [i_0] [i_0] [i_2 - 1] [i_10] [i_13] [i_13]))) + 9223372036854775807)) >> ((min(0, (arr_31 [i_13] [i_10] [i_10] [3] [i_0] [i_0 - 1])))))) << ((((var_12 ? ((3462078177877102267 ? var_17 : 7551)) : (((~(arr_7 [i_0] [i_2])))))) - 7853975743435668278))))));
                }
                var_46 = (min(((var_11 ? (arr_2 [i_0 + 1] [i_0 - 1]) : -1160910592360460272)), (((!(arr_2 [i_0] [i_0 - 1]))))));
                arr_45 [i_0] [i_10] = (min((arr_32 [i_0 - 1] [i_0] [i_2] [i_10] [i_10]), (arr_40 [i_0 + 1] [i_2 + 2])));
                var_47 = (arr_1 [i_10]);
                var_48 *= (((((36 ? var_11 : (arr_33 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] [20])))) ? (((94 / 246) ? -79 : (min(3213528847440742037, 3154151778878969808)))) : ((((arr_16 [i_0 - 1] [i_2 + 2]) * var_12)))));
            }
            var_49 = (arr_12 [i_0] [i_2] [i_0] [i_2]);
            var_50 = 36;
            var_51 = 1850041572885046752;
        }
        arr_46 [i_0] = var_11;
    }
    var_52 |= 424231100;
    #pragma endscop
}
