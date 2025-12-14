/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_11 = (min(-854209499, 11008245885003584599));
        var_12 += (arr_3 [0]);
        arr_4 [1] &= (!var_4);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            var_13 = 1041;
            var_14 = var_5;
            var_15 = (((!var_10) | 239789131));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_16 = ((11008245885003584599 ? 7438498188705967018 : -8602482329876032629));
            var_17 |= (((var_8 ? var_9 : var_8)));
            var_18 = ((((arr_1 [i_1] [i_1]) != var_9)));

            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
            {
                var_19 = (6 ^ 1);
                arr_14 [i_1] [i_3] [i_4] = (((var_10 + var_5) | var_1));
            }
            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
                {
                    arr_21 [i_1] [i_1] = (arr_16 [0]);

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_20 = ((((((-(arr_17 [i_6] [i_6] [i_6] [i_6]))) + 2147483647)) >> var_10));
                        var_21 = 616976214;
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        var_22 -= (((arr_9 [i_8] [i_6 - 1] [i_6 - 1]) ? 12031480928673336774 : var_4));
                        var_23 += (((var_1 ? 656237202 : (arr_22 [i_1] [i_1] [i_1]))));
                    }
                }
                for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
                {
                    var_24 = var_6;
                    var_25 = var_3;
                }
                for (int i_10 = 1; i_10 < 14;i_10 += 1) /* same iter space */
                {
                    var_26 = (!(arr_15 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]));
                    arr_32 [i_10] [i_5] [i_3] [i_1] [i_1] [i_1] = (((arr_30 [i_3] [i_5]) < (((var_10 ? var_5 : 202)))));
                    var_27 = ((var_8 ? (arr_17 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 + 1]) : var_8));
                }
                var_28 = (((~1) ? (arr_1 [i_1] [i_3]) : (arr_6 [14] [i_3])));
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                var_29 = (((arr_29 [i_1] [i_3] [i_3] [i_11] [i_1] [i_11]) >= 365997750));
                arr_37 [i_1] [i_3] [i_11] = (arr_17 [i_1] [i_3] [i_11] [i_11]);
                var_30 -= ((var_9 ? ((768620525 ? 1690201341 : -7678762848197651435)) : var_1));
                var_31 &= (!var_3);
            }
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
        {
            var_32 = (arr_12 [i_1] [i_12]);
            var_33 *= ((((((arr_22 [i_1] [i_1] [i_12]) ? 16310782163750380788 : (arr_24 [i_12] [i_12] [i_12] [i_1] [i_12] [i_12] [i_1])))) ? (arr_27 [i_1] [6] [i_12] [i_1] [6]) : ((var_3 ? var_3 : (arr_10 [i_12])))));
        }
        arr_41 [i_1] [i_1] = (arr_5 [i_1] [i_1]);
        var_34 = ((((2793432034 ? 95 : 1)) << (6051 - 6049)));
        var_35 = 11630840769115541256;
        arr_42 [i_1] = var_7;
    }
    var_36 = (max(var_0, var_9));
    #pragma endscop
}
