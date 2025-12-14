/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((210 ? 3925492463521367147 : 14521251610188184474));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (~(min((arr_0 [i_0]), 3925492463521367147)));
        arr_4 [i_0] [i_0] = 14521251610188184474;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 ^= -var_0;
                    var_21 = (min(var_21, -28871));
                    var_22 = (-122 % -1163743083);
                    var_23 = (max(var_23, 4212649669783792490));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_24 = (arr_5 [5] [i_3] [11]);
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {
                    var_25 = (max(var_25, 5087703046842998387));
                    var_26 = (min(var_26, 6661062248892444422));
                }
            }
        }
        arr_19 [i_3] [i_3] = ((-(var_6 % 9)));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {

                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        var_27 += ((+(max((arr_27 [i_8] [i_8] [i_8] [i_8 - 1] [i_8]), 7))));

                        for (int i_9 = 1; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            var_28 = (arr_20 [i_9 - 1] [i_9 - 1] [i_8 - 1]);
                            arr_30 [5] [i_6] [i_3] = var_2;
                            var_29 = ((((((arr_24 [i_3] [i_9 - 1] [i_3]) / (arr_8 [i_8 - 1] [i_8 + 1] [i_8 + 1])))) ? (max((arr_27 [i_9] [i_9] [i_9] [i_9 + 2] [i_9]), (arr_27 [i_8] [i_8] [i_9] [i_9 + 2] [i_8]))) : (((min((arr_16 [i_3] [i_9 - 1]), (arr_16 [i_3] [i_8 - 1])))))));
                        }
                        for (int i_10 = 1; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            var_30 = (max(((8187089614426683243 | (arr_34 [i_10 - 1] [i_3] [i_10 - 1] [i_10 - 1] [i_10 + 2]))), (((arr_31 [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10]) ? (arr_34 [i_10] [i_3] [i_10] [i_10] [i_10 - 1]) : 3925492463521367147))));
                            arr_35 [i_3] [i_3] [i_8 - 1] [i_8 - 1] = (arr_26 [i_6] [0]);
                        }
                        var_31 = (arr_10 [i_6]);
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        arr_38 [i_3] [i_6] [i_7] [i_11] = (((24840 ? (arr_33 [i_3] [i_3] [i_6] [i_6] [i_6]) : (arr_11 [i_3] [i_6]))));
                        var_32 += var_1;
                    }
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 17;i_13 += 1)
                        {
                            arr_46 [i_3] [i_3] [i_7] [i_3] [i_3] = var_4;
                            var_33 = (arr_14 [i_3] [i_3] [i_12]);
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_49 [i_3] [i_6] [i_7] [i_3] [i_14] [i_3] = (((!-28871) / (max(((max(var_9, (arr_15 [i_7])))), (min((arr_13 [i_3] [i_3] [i_7]), 3925492463521367146))))));
                            var_34 = (max(var_34, (max((max(((var_7 ? var_3 : var_13)), (arr_7 [i_6] [i_6] [i_12] [i_14]))), ((((arr_21 [i_7] [i_12] [i_7]) ? (((arr_9 [i_12] [i_12] [i_12] [i_12]) | (arr_16 [i_7] [i_7]))) : 32668)))))));
                            arr_50 [i_3] [i_12] [i_3] = (((3925492463521367136 + var_8) ^ ((((min(var_6, (arr_37 [i_3] [i_6])))) ? var_4 : (((var_3 >> (-26341 + 26372))))))));
                            var_35 = (max((arr_24 [i_3] [i_6] [i_6]), (((arr_14 [i_3] [i_6] [i_7]) & (max(var_3, var_9))))));
                            arr_51 [i_3] [i_3] [i_7] [i_7] [i_3] [i_14] = (min(-66, 18446744073709551615));
                        }
                        arr_52 [i_3] [i_3] [i_3] [i_3] = var_4;
                        var_36 = (min(var_36, ((min(((4161708171827176072 ? (arr_42 [i_12] [i_7] [i_6] [i_3] [i_3]) : (arr_42 [i_12] [i_12] [i_7] [i_6] [i_3]))), (arr_42 [i_3] [i_6] [11] [i_7] [i_12]))))));
                        arr_53 [i_3] [i_12] [i_7] [i_3] = (arr_0 [i_12]);
                        var_37 ^= (arr_11 [i_12] [10]);
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 16;i_15 += 1)
                    {
                        for (int i_16 = 1; i_16 < 16;i_16 += 1)
                        {
                            {
                                arr_61 [i_6] [i_3] = (max(var_9, (arr_18 [i_3] [i_15 + 1] [i_7] [i_3])));
                                arr_62 [i_3] [i_3] = max(var_8, (max(-10, -28871)));
                            }
                        }
                    }
                }
            }
        }
        arr_63 [i_3] = (min((arr_14 [i_3] [i_3] [i_3]), (((arr_7 [1] [10] [i_3] [i_3]) % (arr_20 [12] [i_3] [i_3])))));
    }
    #pragma endscop
}
