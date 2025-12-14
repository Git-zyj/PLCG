/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 9223372036854775807;
    var_20 -= var_0;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_21 = (max(var_21, ((((var_7 & var_17) ? (((((~(arr_5 [0] [i_1])))) ? (~var_16) : (arr_3 [i_0]))) : (((var_1 >= ((519411678 ? 15 : 15))))))))));
            var_22 |= (arr_1 [i_0]);
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_23 = var_10;
            var_24 = (15 <= 0);
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_17 [i_0] [i_0] [i_5] [i_0] [i_0] = var_8;
                            var_25 = var_6;
                            var_26 = ((~((~((var_16 ? (arr_4 [i_0] [i_5]) : 1))))));
                        }
                    }
                }
            }
            arr_18 [i_0] [i_0] [i_0] = ((var_10 ? -0 : ((~(3946557493794554535 - -15)))));
            var_27 *= (((((arr_4 [10] [10]) + 0))) - -var_5);
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_9 [i_0] [i_0]);
                            arr_33 [i_0] [i_7] [i_7] [i_9] [1] = (-127 - 1);
                            arr_34 [i_0] [i_0] [i_0] [i_0] = ((~((var_3 ? var_11 : (arr_2 [i_0] [i_0])))));
                        }
                        arr_35 [19] [i_7] = ((-(arr_23 [i_9] [i_8] [i_7] [i_0])));
                        arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = var_3;

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_28 = 0;
                            arr_40 [0] [0] [i_9] = var_15;
                        }
                        arr_41 [i_8] [i_7] = (((arr_3 [i_0]) / (arr_3 [i_0])));
                    }
                }
            }

            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                var_29 = var_14;
                var_30 = 1;
                arr_44 [i_7] [i_7] = (((arr_10 [i_0] [i_0] [i_12]) == (arr_10 [i_7] [i_7] [0])));
            }
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        var_31 = (min(var_31, 10));
                        var_32 = ((15 && (arr_31 [i_13] [i_13 + 1] [i_0])));
                        var_33 = ((((127 & (arr_0 [i_0]))) & -16));
                        arr_51 [i_0] [i_13] [i_13] [i_13 - 2] [i_0] [i_0] = (arr_28 [2] [i_7] [i_0]);
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            arr_62 [i_0] [i_0] = (var_8 ? (var_8 <= 4155323695) : -16);
                            arr_63 [10] [i_15] [i_15] [i_0] = ((~((((arr_14 [i_16] [i_16] [i_16] [i_16]) < -6)))));
                            var_34 = (max(var_34, (((-(arr_6 [i_0]))))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 20;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 16;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 17;i_21 += 1)
                    {
                        {
                            arr_74 [i_0] [7] [i_0] [i_0] [i_19] = ((var_0 && ((((arr_64 [i_0] [14] [i_0] [i_20]) ? var_12 : 2)))));
                            var_35 ^= ((((0 || (arr_56 [17] [i_21]))) ? (~5) : -var_4));
                            arr_75 [i_20 + 2] [i_19] = (2685715521973526881 | -127);
                            arr_76 [i_19] = 1;
                            var_36 = ((1 ? (arr_24 [i_19] [i_19] [i_20 - 2]) : (arr_71 [i_19] [i_0] [i_19])));
                        }
                    }
                }
            }
            arr_77 [i_0] [i_0] = (((arr_21 [i_0] [i_15]) && (arr_73 [i_0] [i_0] [4] [4] [i_0] [i_0] [1])));
        }
        for (int i_22 = 0; i_22 < 20;i_22 += 1) /* same iter space */
        {
            arr_81 [i_0] [1] [i_22] = (!((((((arr_15 [i_0] [i_0]) >= (arr_67 [i_0] [i_0] [i_0] [i_0]))) ? var_14 : 7894790632414150927))));
            var_37 = (arr_2 [i_0] [i_0]);
        }
        var_38 = (arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        arr_82 [i_0] = ((~(~2)));
    }
    #pragma endscop
}
