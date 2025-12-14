/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (min((min((arr_6 [i_0 + 1]), 4549013356784553109)), ((((min((arr_0 [i_1]), (arr_3 [i_1]))) <= (arr_0 [i_0]))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_10 [i_0] [i_2] [i_0] = 1;
                    var_12 = (min(var_12, (max(((max((((arr_4 [3] [i_1]) / (arr_3 [i_0 + 2]))), (((-(arr_7 [i_2] [i_2] [i_1] [i_2]))))))), ((-((210 ^ (arr_1 [i_0])))))))));
                    arr_11 [i_2] = (2132331442752485044 * 2575868035);
                    var_13 *= (max(((((min((-9223372036854775807 - 1), 98))) ? ((((!(arr_7 [i_0] [i_0] [i_1] [i_1]))))) : (max(9223372036854775785, (arr_5 [i_0 + 1]))))), (((!(((74 ? -6919572963817399274 : -74))))))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_15 [i_0] [2] [i_2] [i_0] = ((((max((min((arr_0 [i_1]), (arr_0 [i_0]))), (((-7288 != (arr_9 [i_0] [i_0] [i_0] [i_3]))))))) ? (((((-291883918 ? (arr_1 [i_2]) : (arr_4 [i_2] [i_1])))) ? (((arr_1 [i_1]) & (arr_9 [i_0] [i_1] [i_2] [i_3]))) : (max(13897730716924998517, 1)))) : (min((arr_5 [i_2]), ((~(arr_6 [i_0 - 1])))))));

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            var_14 = (max(var_14, ((((arr_14 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]) ? ((var_2 ? (arr_4 [i_0] [1]) : (arr_12 [i_2] [i_4] [i_2]))) : -291883926)))));
                            arr_19 [i_0] [i_3] [i_2] [i_2] [i_0] = (arr_9 [i_4] [9] [i_2] [i_1]);
                        }
                        arr_20 [i_2] [i_2] = max((arr_4 [i_0 + 1] [i_1]), (arr_4 [i_0 + 1] [i_1]));
                        arr_21 [i_2] = (max((((max((arr_6 [i_0]), 0)))), (max(65532, 4294967276))));
                        arr_22 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] = (~(arr_16 [i_0] [i_0] [i_2] [i_0] [i_3]));
                    }
                }

                for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_1] [i_0] [i_5] = (arr_9 [i_0] [i_0] [2] [i_0]);
                    arr_26 [i_0] [i_0] [i_1] [i_5] = (min(14288, ((max((!-7675476667689018602), ((74 && (arr_4 [i_5] [6]))))))));
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    var_15 = (arr_3 [9]);
                    arr_30 [i_0] [8] [i_6] = max((((((max(4294967288, (arr_2 [i_6])))) ? (max(-328214318, 11645)) : (arr_14 [i_0] [i_1] [i_6] [i_0] [i_1] [i_0 + 2])))), (((arr_13 [i_6]) - var_2)));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    arr_33 [i_7] [i_1] [i_0 + 1] = ((((-(arr_1 [i_1]))) < (arr_0 [i_0 + 2])));
                    var_16 = (arr_4 [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_41 [i_0] [i_0] [i_0] [i_0] [i_8] [i_9] = ((((54 ? (arr_7 [7] [i_1] [i_8] [i_8]) : var_5)) - ((((arr_1 [i_0]) >= -7675476667689018584)))));
                                var_17 = 58892;
                                var_18 = (arr_13 [i_8]);
                                arr_42 [i_9] [i_8] [i_9] [i_1] [i_9] [i_1] [i_9] = var_7;
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    var_19 = (min(var_19, (arr_3 [i_0 - 1])));
                    var_20 = (!3029987541);
                    arr_46 [i_10] [i_10] = (((((-((213 + (arr_16 [i_10] [i_0] [i_1] [i_0] [i_0])))))) ? (((arr_44 [i_0] [i_1] [i_10]) ? 4784078842269611055 : (((max(63, var_3)))))) : -9536));
                }
                var_21 = (min(91, 11644));
                var_22 = (max(((max((min(var_5, 1)), (9223372036854775754 < var_2)))), var_2));
            }
        }
    }
    var_23 = (max(95, 63));
    #pragma endscop
}
