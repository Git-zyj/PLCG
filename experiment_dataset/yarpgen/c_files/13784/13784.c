/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_12 = (((arr_2 [i_0 + 2]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1])));
        arr_3 [i_0] [i_0 + 2] = -10883963305696045;
        arr_4 [i_0] = ((((2255934097 ? (arr_1 [i_0]) : var_9)) == (!96)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                var_13 = (((arr_0 [i_2]) ? (2098525763138817086 ^ 1) : (arr_10 [i_1 + 1])));
                arr_13 [i_2] [i_2] [i_2] [i_2 - 1] = -var_7;
                arr_14 [11] [8] [i_1] = (arr_5 [i_1] [i_1]);
            }
            var_14 = (((arr_2 [i_1 - 1]) ? (arr_10 [i_2 + 1]) : (arr_10 [i_2 - 2])));
        }

        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            var_15 = (arr_2 [i_1 + 1]);

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_16 = (min(var_16, (arr_15 [i_1 + 1] [i_4 + 3])));
                var_17 = (min(var_17, ((((arr_15 [i_1 - 1] [i_1 + 1]) ? (arr_18 [i_4 + 4] [i_5] [i_5]) : (arr_15 [i_1 - 1] [i_1 + 1]))))));
                var_18 = (-(((arr_6 [i_4] [i_4]) * (arr_1 [i_5]))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 19;i_7 += 1)
                    {
                        {
                            arr_24 [17] = ((-(arr_16 [i_1 - 1] [i_6 + 1] [i_7 - 2])));
                            var_19 ^= ((6378490064353809741 ? 4294967295 : (arr_22 [i_1 + 1] [i_1 + 1] [i_5] [2])));
                            var_20 = (min(var_20, (!var_9)));
                        }
                    }
                }
            }
            for (int i_8 = 3; i_8 < 19;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_21 = (arr_26 [i_1] [i_1] [i_1]);
                            var_22 = (!-4093);
                            var_23 = (arr_18 [i_1 - 1] [i_9] [i_9]);
                            var_24 = (arr_8 [i_1 + 1] [i_4 + 3]);
                        }
                    }
                }
                arr_35 [8] [8] = (((arr_27 [i_1] [i_8 + 1] [i_8]) || (arr_27 [i_1] [i_8 - 2] [i_8])));
                arr_36 [i_1] [i_1] [i_4] [i_8 - 2] &= (arr_0 [i_1 - 1]);
                var_25 = var_11;
            }
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                var_26 = (arr_32 [i_1 + 1] [i_1 + 1] [i_4] [i_4 + 3]);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_27 = (max(var_27, -1));
                            arr_43 [i_1] [i_1 - 1] [i_1] [i_1] [i_1] &= ((7234494683070071193 ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 + 1])));
                            arr_44 [i_1] [i_1] [i_11] [i_12] [i_13 - 1] = (arr_27 [i_1] [i_1] [i_1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_28 = (max(var_28, ((1 ? 2305843009213691904 : 0))));
                            var_29 = (((!766026368) ? (arr_45 [10] [19] [i_15 - 2] [i_15 - 2] [i_15]) : 71776119061217280));
                            arr_49 [i_15] [i_14] [i_14] = var_3;
                        }
                    }
                }
            }
        }
        var_30 = (((arr_11 [i_1 - 1] [i_1 + 1] [i_1 - 1]) ? 4279432590 : (arr_29 [i_1 - 1] [10])));
    }
    var_31 |= (var_0 == 90);
    var_32 = var_4;
    /* LoopNest 3 */
    for (int i_16 = 2; i_16 < 8;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                {
                    var_33 &= ((~(min(51, (((arr_39 [i_16] [i_17] [i_16] [i_16]) ? (arr_5 [i_17] [i_16]) : (arr_29 [i_16] [i_18])))))));

                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 10;i_19 += 1)
                    {
                        arr_62 [i_16] [i_18] [i_18] [i_18] [i_17] &= (arr_9 [i_16 - 1] [i_16 + 1]);
                        var_34 = (max(var_34, (arr_39 [i_16] [i_17] [i_17] [i_19])));
                    }
                    var_35 = 2896792866;
                }
            }
        }
    }
    var_36 = (max(var_36, var_11));
    #pragma endscop
}
