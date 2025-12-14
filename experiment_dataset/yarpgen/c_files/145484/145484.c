/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (((!14565400087179603911) ? var_1 : ((((8631963207561493338 ? var_10 : var_14)) >> var_0))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_19 ^= (min((!var_10), ((var_7 & (arr_0 [i_0] [12])))));

                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        var_20 = (min(var_20, var_0));
                        var_21 = ((((-(arr_7 [i_0 + 3]))) == 37));
                    }
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_22 = arr_10 [i_0 - 1] [i_1] [i_4];
                        var_23 = var_16;
                    }

                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        var_24 = ((((((arr_3 [i_1] [i_6]) < 11))) + ((-1540 ^ (arr_3 [i_0 + 1] [i_6])))));
                        var_25 = ((((var_2 / (arr_6 [i_1 + 1] [i_0] [i_0] [i_0])))) ? (arr_6 [i_1 - 1] [i_0] [i_0] [6]) : 18304711673250701046);
                        arr_18 [i_0] [13] [i_6] = (!-1540);
                        var_26 = var_1;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_27 = (max((((!((((arr_1 [i_0] [i_1]) ? 218 : var_6)))))), var_13));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_28 ^= (((!var_3) < (((var_7 && (arr_0 [12] [12]))))));
                            var_29 = (((((!(var_11 > var_11)))) << (((arr_10 [i_4] [i_7] [i_8]) - 11401577883344839675))));
                            var_30 = var_10;
                            var_31 ^= var_1;
                            var_32 = (((!15864) + (((var_5 && (arr_8 [i_1 - 1] [i_0 + 2] [i_0 + 1]))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        arr_26 [i_0] = (!18446744073709551615);
                        var_33 ^= (((arr_6 [i_0] [i_0] [14] [i_9]) != (var_3 < var_12)));

                        for (int i_10 = 2; i_10 < 21;i_10 += 1) /* same iter space */
                        {
                            var_34 = ((!(arr_5 [i_1 - 1] [i_0 - 1])));
                            var_35 = (!-1);
                            var_36 = (min(var_36, -var_2));
                        }
                        for (int i_11 = 2; i_11 < 21;i_11 += 1) /* same iter space */
                        {
                            var_37 = (var_14 + 19486);
                            var_38 = (min(var_38, (((var_15 ? (arr_21 [0] [i_4] [i_11 + 1] [i_11] [i_11]) : var_5)))));
                        }
                        for (int i_12 = 2; i_12 < 21;i_12 += 1) /* same iter space */
                        {
                            var_39 = ((var_10 ? (((arr_24 [1] [15] [i_0]) ? (arr_3 [1] [i_1 + 1]) : var_0)) : 38));
                            var_40 -= var_8;
                        }
                    }
                    var_41 = var_3;
                }
                var_42 -= ((((min((arr_16 [i_0 - 2] [4] [10] [i_0]), (1627337548844496116 | -1540)))) || var_10));
                var_43 = ((-7801 != ((-(arr_0 [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}
