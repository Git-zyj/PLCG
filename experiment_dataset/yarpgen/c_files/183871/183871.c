/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((0 || ((min((6194445921230429943 + var_11), (var_5 && 1110455590))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = -1110455590;
        arr_4 [i_0] [i_0] = (((((0 * 23) * (arr_1 [i_0]))) == (min(2861916658, 14845167346397832127))));
        var_14 |= (-2147483647 - 1);
        var_15 = (max(var_15, 0));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_16 = (max(var_16, ((min((min((arr_0 [0]), (min(1433050637, 4294967295)))), (((14845167346397832147 || (arr_2 [i_0])))))))));
            arr_7 [i_0] [i_0] = 2861916658;
            arr_8 [i_0] [16] [i_1] = arr_3 [5] [i_1];

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                arr_12 [5] [4] [i_2] = min((min((min(3601576727311719469, 4022289772)), ((((arr_11 [i_2]) | 4146647778))))), 360343278);
                var_17 = (max(var_17, ((((arr_0 [i_0]) != (max((max((arr_9 [i_0] [i_0] [i_0] [i_2]), (arr_5 [i_0]))), ((((arr_10 [i_0]) + (arr_6 [i_0])))))))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((min(((((arr_15 [i_0] [i_0] [i_2]) == (arr_10 [i_0])))), (max((min((arr_9 [i_1] [i_1] [i_1] [i_4]), (arr_16 [i_4] [i_3] [i_2] [i_1] [1]))), (arr_17 [i_0] [i_0] [i_1] [i_0] [i_1] [i_3] [i_4]))))))));
                            var_19 = (((min((arr_16 [i_2] [i_2] [i_2] [i_2] [i_2]), (min((arr_17 [i_0] [3] [11] [i_2] [12] [i_3] [i_4]), (arr_1 [i_0])))))) || ((((17904561245963569840 | 3601576727311719469) ^ (min(1462948641, (arr_18 [i_3] [i_3])))))));
                            var_20 |= (arr_3 [i_3] [i_3]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        {
                            arr_23 [i_5] [i_0] = ((((min(((min((arr_20 [i_0] [i_1] [i_2] [i_6] [i_6]), 61069))), (((arr_5 [3]) - (arr_15 [i_6 + 3] [i_1] [i_1])))))) * (((arr_2 [i_5]) / (arr_15 [i_0] [i_0] [i_0])))));
                            var_21 = 26787;
                            var_22 = (arr_21 [i_6] [i_5] [i_5] [14] [i_5] [8] [i_0]);
                            var_23 = (min(((((arr_10 [i_0]) * (23 * 0)))), (arr_17 [i_0] [i_1] [i_1] [i_6] [i_6] [i_1] [i_0])));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_27 [i_7] [1] [i_7] = (arr_24 [i_0] [i_7]);
            var_24 = (min(var_24, (arr_3 [i_0] [i_7])));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_32 [i_7] = ((((((min(30788, 2861916658))) && (arr_2 [i_9]))) && (arr_13 [i_7] [i_0] [i_8] [i_7] [i_7])));
                        var_25 -= (arr_26 [i_0] [i_7] [i_9]);
                        arr_33 [i_0] [i_0] [i_0] [i_8 - 1] [i_8 + 2] [i_8 + 2] |= 13929429849940957377;
                        var_26 += (min((arr_5 [i_9]), (((4517314223768594259 == (((min((arr_3 [i_0] [i_8 + 2]), (arr_5 [i_8]))))))))));
                    }
                }
            }
            arr_34 [i_7] [i_7] = 123;
        }
    }
    var_27 |= (min((1 + var_7), 131101655));

    for (int i_10 = 3; i_10 < 18;i_10 += 1) /* same iter space */
    {
        var_28 ^= (arr_16 [i_10] [i_10 - 3] [i_10] [i_10] [i_10]);
        var_29 = 13929429849940957371;
        var_30 *= (min(-9906, (((3218006299 >= (min(0, (arr_15 [1] [1] [i_10 - 1]))))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 18;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 16;i_14 += 1)
                        {
                            {
                                var_31 = (max(var_31, 1));
                                var_32 = (arr_5 [i_13]);
                            }
                        }
                    }
                    var_33 = (min(var_33, (arr_19 [0] [i_11] [i_11] [0])));
                }
            }
        }
    }
    for (int i_15 = 3; i_15 < 18;i_15 += 1) /* same iter space */
    {
        var_34 = min((arr_43 [i_15] [14] [i_15] [i_15]), (arr_26 [i_15] [i_15] [i_15]));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                {
                    var_35 = (max(var_35, ((min(14845167346397832146, (11138508443035812133 | 0))))));
                    var_36 = (min(var_36, (arr_48 [i_17])));
                    arr_53 [i_15] [i_15] = 11135;
                }
            }
        }
    }
    var_37 = var_1;
    #pragma endscop
}
