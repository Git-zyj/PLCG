/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (arr_1 [i_0]);
        arr_3 [i_0] [i_0] = (((((((-127 - 1) + 2147483647)) << (112 - 112))) >= var_11));
        var_20 *= (!1);
        arr_4 [8] = ((arr_1 [i_0]) ? (arr_0 [i_0]) : var_13);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_9 [i_1] = 7167479525273594578;
        var_21 = (((arr_0 [i_1]) ? ((-10375 ? (arr_6 [i_1]) : (arr_2 [i_1]))) : var_4));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_22 = 110;
            var_23 = ((~(arr_0 [i_1 - 1])));
            var_24 |= 17467109512101085816;
            var_25 *= (!1219689078);
        }
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            arr_14 [i_1] [i_1] [i_1] = ((var_8 ? (arr_6 [i_1 + 2]) : (((!(arr_6 [i_1]))))));
            var_26 = (arr_6 [i_1 + 1]);
            arr_15 [i_1] [i_3] [i_1] = (((arr_10 [i_1 + 1] [10] [i_3]) ? (((var_11 ? (arr_1 [i_3 + 2]) : var_8))) : ((var_17 / (arr_7 [14] [i_3])))));
            var_27 = (arr_0 [i_1 + 1]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    {
                        arr_20 [i_1] [5] [i_1] = ((18 << (189 - 183)));
                        arr_21 [i_1 + 2] [i_1] = (arr_10 [i_5] [i_4] [i_3]);

                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            arr_25 [i_1 + 2] [i_3 - 2] [i_1] [i_5] [i_1 + 2] [i_1 + 2] = (((arr_5 [i_1]) % (arr_23 [i_1 + 2] [i_3 - 1])));
                            arr_26 [i_1] [6] [i_3 + 2] [i_4] [i_3 + 2] [i_6] = (var_10 - var_3);
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] = -63;
                            var_28 = ((((((arr_11 [i_1] [i_4] [i_1]) ? -1145356628 : 10))) ? 17 : (21155362367115761 - var_1)));
                        }
                        arr_30 [i_5] [i_4] [i_1] [i_3] [i_1 + 2] = (((((arr_2 [i_1]) >= (arr_22 [i_5 + 2] [i_3] [12] [i_5 - 3] [i_5 + 3] [3]))) ? (arr_2 [10]) : (((arr_16 [i_1] [i_3] [i_3] [i_1]) ? (-2147483647 - 1) : 1))));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_29 = (((arr_28 [i_8] [i_8] [i_8] [14] [8]) ? (arr_2 [i_1 - 1]) : (216 != 31744)));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 14;i_11 += 1)
                    {
                        {
                            arr_41 [14] [i_11] [i_1] [i_10] [i_11] = (((var_9 / 2939629563269494139) / (~45501)));
                            arr_42 [i_1 - 1] [i_1] [i_9] = 120;
                            arr_43 [i_1] [i_8] [8] [6] [7] [i_11] = var_5;
                        }
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                arr_52 [4] [i_13] [16] [16] = ((max((min((arr_45 [7] [i_13]), 123)), ((((arr_46 [i_12] [i_12]) <= (arr_47 [1])))))));

                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    var_30 = ((-(4 + 15178)));
                    arr_56 [i_15] [17] [i_13] = (arr_45 [0] [8]);
                }
            }
            var_31 = (arr_49 [i_13]);
        }
        arr_57 [i_12] = (8473467667704499655 / 46);
    }
    var_32 = 4433462409354229571;
    var_33 = (var_9 > var_1);
    var_34 = ((15851331277783595941 ? 3646584277 : (max((~var_7), var_4))));
    #pragma endscop
}
