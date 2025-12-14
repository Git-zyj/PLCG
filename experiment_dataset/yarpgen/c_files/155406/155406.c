/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_0] = ((((max(119, 1))) < (((112 | (((var_4 >= (arr_7 [i_0] [i_0] [13] [11])))))))));
                    arr_10 [8] [6] [8] = -105;
                    arr_11 [i_0] [i_0] = -45;
                }
                for (int i_3 = 4; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    var_16 = (min(var_16, (((~((~(arr_8 [i_1] [i_1] [i_3] [i_1]))))))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_17 -= (((arr_2 [i_4] [i_3]) ? (arr_16 [16] [i_3] [i_3] [16] [i_3 + 2]) : var_0));
                        var_18 -= ((28 ? 45 : 189));
                        var_19 = (arr_15 [i_1 + 1] [i_3 - 1] [i_3] [i_3] [i_3 + 2]);
                        var_20 = (~var_0);
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_3] |= ((((((var_4 < 108) | var_2))) ? (arr_5 [i_0] [2]) : (!-16)));
                        arr_21 [15] [i_1 + 2] [i_5] [i_1] = (max((((arr_13 [i_0] [6] [12] [i_0]) ? ((max(var_6, (arr_5 [i_0] [i_0])))) : var_6)), var_12));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        var_21 += ((((min(107, -6))) | (min(((max(147, 0))), (~var_8)))));
                        var_22 = ((-((max(var_0, (125 < 22))))));
                        arr_26 [2] [12] [15] [15] = (arr_24 [5] [4] [i_3] [i_3] [4]);
                        arr_27 [i_0] [9] [15] [i_1] [i_3 - 4] [13] = (arr_22 [i_0] [i_0] [0] [i_0]);
                    }
                }
                arr_28 [i_0] [i_0] = var_3;
                arr_29 [i_0] [i_0] = (arr_15 [10] [i_1 - 1] [i_0] [i_0] [i_0]);

                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    arr_34 [i_7] &= ((var_3 ? 332953 : 108));
                    var_23 = (min((var_15 ^ var_6), (((arr_33 [i_7] [17] [17] [i_7]) & -16))));
                    var_24 = var_4;
                    arr_35 [i_1] [i_1] = ((((max(1, 1720519851))) ? ((-30 | (arr_24 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))) : ((max((max(var_11, (arr_13 [14] [9] [8] [14]))), ((min((arr_18 [4] [10] [4]), 0))))))));
                    var_25 -= ((((var_11 | (arr_25 [i_7] [1] [i_1] [i_0]))) - -var_3));
                }
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_26 = var_14;
                                var_27 = (max((arr_19 [i_1 + 1] [i_8 + 2] [i_10]), (max(0, 45))));
                                arr_44 [i_10] [1] [i_8] = var_6;
                                arr_45 [i_10] [i_10] [i_8] [i_8] [2] = (((((((var_6 <= (arr_5 [i_0] [i_0]))) ? ((max(0, 94))) : var_6))) ? (arr_19 [i_8 - 2] [i_8 + 2] [i_10]) : (arr_42 [i_0] [i_0] [i_10] [0] [i_0])));
                            }
                        }
                    }
                    var_28 = (arr_38 [17] [i_1] [i_1] [10]);
                    var_29 = (max(var_29, ((max(var_12, (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    var_30 = (min(var_30, 0));
                }
            }
        }
    }
    var_31 ^= ((-((((0 ? 0 : 4294634326)) / -1))));
    #pragma endscop
}
