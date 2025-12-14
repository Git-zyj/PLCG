/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_11 = -var_5;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_0] [i_0] [i_0] [i_0] [17] = ((!(arr_8 [i_0] [i_0 - 1] [i_0 - 1])));
                        var_12 = (arr_0 [i_0 - 2]);
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_1] [i_0] = (arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2]);
                        var_13 = (min(var_13, ((((14627 ? 78 : 834367787))))));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_2] [i_2] [i_5] = (3569684492815265040 || 0);
                        var_14 = (((arr_3 [i_0] [i_1]) ? ((-728476515487206942 ? -26 : -78)) : (arr_14 [i_0] [i_0 + 1] [19] [i_0] [i_0])));
                    }
                    arr_16 [i_0] [i_0] [i_0] = 178;
                    arr_17 [i_0] = ((78 ? -24 : 32768));
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_24 [i_0] [i_0 - 2] [i_0 - 2] [16] [8] [i_0] [i_0] = (max((((3569684492815265040 ? 127 : 63071))), 104));
                                arr_25 [6] [i_1] [i_1] [i_1] = ((min(18862, var_6)));
                                arr_26 [9] [i_1] [i_1] [i_1] [9] = ((-(~var_10)));
                            }
                        }
                    }
                    var_15 = min(16944152804560217657, (!var_6));
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                arr_32 [i_0] [19] [i_0 - 3] [i_10] [i_0] [i_0] [i_0 - 1] = -32;
                                var_16 = ((-((((807732657529546805 ? 16 : 255))))));
                                arr_33 [i_10] [i_1] = (((arr_14 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] [2]) ? (min(((max(170, 77))), 10386555569847108661)) : var_7));
                                arr_34 [i_10] [i_9] [i_6] [i_1] [i_10] = ((33 ? ((0 ? 93 : -2351016754879150427)) : ((((!3360266487749317341) ? (arr_29 [i_0] [12] [i_0 - 1] [i_0] [12] [5]) : var_6)))));
                                arr_35 [i_1] [i_10] = ((((max(3829512798, (arr_1 [i_9 + 3])))) ? (arr_30 [18] [i_10]) : (arr_20 [i_9 + 1] [i_9 + 2] [i_0 - 4] [i_0] [i_0 - 4])));
                            }
                        }
                    }
                }
                arr_36 [i_1] [i_0] |= ((((((min(32002, -18))))) ? ((95 ? (arr_3 [i_0] [i_1]) : (min(var_7, 159)))) : (((arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? 64 : (arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 1])))));
                arr_37 [i_0 - 4] = ((65409 & ((var_2 ? (arr_11 [i_0] [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_0] [i_0]) : var_2))));
                arr_38 [i_0] = ((((95 ? 64 : 17663)) >= (~174)));
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}
