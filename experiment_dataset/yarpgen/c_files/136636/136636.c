/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(-59834, var_11));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 += (arr_2 [i_0 + 2] [i_0 - 1]);
        var_15 = (min(var_15, ((((arr_0 [1]) * 0)))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_8 [i_0 + 2] [i_1] [i_0 + 2] [i_0] = (((arr_1 [1]) ? (((!(arr_1 [i_0])))) : ((((arr_2 [i_0] [1]) != (arr_3 [i_0]))))));
                arr_9 [i_0] [i_0] [i_0] [i_2] = (arr_4 [i_0] [i_0 - 1] [i_0]);
            }
            arr_10 [i_0] [i_0 + 2] = (arr_5 [i_0] [i_0]);

            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                arr_13 [i_0] [i_1] [1] [i_3 + 2] = (arr_0 [i_0]);
                var_16 = ((!(arr_11 [i_3 + 3] [i_1] [i_3] [18])));
                arr_14 [i_0] = (((arr_11 [i_0] [i_1] [i_3 + 4] [i_3 + 3]) ? (arr_4 [7] [7] [i_0 + 2]) : (arr_3 [i_0])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_17 = (arr_1 [i_0]);
                            var_18 = 2365450895875014353;
                        }
                    }
                }
                arr_21 [0] [0] [i_3 + 4] [i_3] |= (!16059948202093134479);
            }
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
        {
            var_19 += ((~(arr_5 [1] [i_0 + 1])));
            var_20 = (17 >= 2365450895875014342);
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {
            var_21 = (arr_7 [i_0] [i_0 - 1] [i_7] [i_7]);
            var_22 = ((-(((arr_18 [13] [i_0] [i_0] [i_7] [13]) ? 16081293177834537276 : (arr_7 [0] [0] [21] [i_7])))));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
        {
            var_23 &= arr_16 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0];
            var_24 = (arr_22 [i_0]);
        }
        arr_30 [i_0] = arr_1 [i_0 + 1];
        arr_31 [i_0] = (arr_24 [i_0]);
    }
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        var_25 = (((((((max(52299, 16081293177834537273))) ? 17984 : -17689))) && (((+(((arr_33 [i_9]) ? 16 : 16)))))));
        arr_36 [i_9] = (((4684179829108563971 && (arr_33 [i_9 - 1]))));
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 22;i_13 += 1)
                {
                    {
                        arr_46 [i_10] [i_11] = (min((arr_38 [i_13 - 2]), (((arr_34 [i_13 - 1]) ? (arr_34 [i_13 - 1]) : (arr_38 [i_13 - 3])))));
                        arr_47 [i_11] [i_10] [7] [i_11] [i_12] [i_13 + 1] = (max((~1), 866230927));

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_26 = 16;
                            arr_50 [i_10] [i_11] [i_11] [i_12] [i_11] = (((arr_35 [i_11]) ? (max((arr_48 [i_13 + 1] [i_11] [i_13 + 1] [i_13 - 1] [i_13 - 2]), (arr_45 [i_11] [i_11] [i_13 - 3] [i_13 - 1] [i_13 - 1]))) : (arr_44 [i_10] [21])));
                            var_27 = ((13762564244600987644 >= ((~(arr_38 [i_10])))));
                        }
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            arr_54 [0] [i_11] [i_11] [i_11] [i_11] [1] = 1605900393;
                            var_28 = max(var_10, (arr_41 [i_12] [22] [i_10]));
                        }
                        var_29 = (max((!1), ((!(arr_53 [i_10] [i_13 - 1] [i_12] [1] [i_10])))));
                    }
                }
            }
        }
        var_30 = ((((arr_43 [i_10]) >= (arr_43 [i_10]))));
        var_31 = 1;
        var_32 = (-1 >= -1218775491);
    }
    var_33 = var_2;
    #pragma endscop
}
