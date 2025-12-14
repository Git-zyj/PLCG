/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 *= (((arr_1 [i_0] [i_0]) & 65528));
        var_20 = (max(var_20, ((((~var_11) ? var_13 : (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_12)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_21 &= (var_4 ? -32766 : ((var_5 ^ (arr_4 [i_1]))));
        var_22 = (max(var_22, (((!(arr_3 [i_1] [i_1]))))));

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_23 = var_2;
            var_24 = ((65535 >> (65528 - 65514)));
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            var_25 += (((arr_15 [i_3] [i_4] [i_5] [1]) ? var_11 : 65535));
                            var_26 = (min(((min((arr_16 [i_3] [i_4] [i_4] [i_5] [i_6] [i_7]), ((7 ? var_4 : (arr_8 [i_7])))))), (max((arr_5 [i_3] [i_5] [i_6]), var_8))));
                        }
                        arr_20 [i_3] [i_4] [i_5] [2] = ((((max((arr_16 [i_3] [i_6] [8] [i_6] [i_4] [i_3]), (arr_16 [i_3] [i_5 - 1] [i_5 - 1] [i_4] [i_4] [i_3])))) && (((-(arr_4 [i_5 + 2]))))));
                    }
                    arr_21 [2] [i_3] [i_5] = (((arr_5 [i_5 - 1] [i_4] [i_3]) == (~32745)));
                }
            }
        }
        var_27 += ((3028642608179429052 ? 105 : (((3661531075 / 24) ? ((~(arr_15 [i_3] [i_3] [i_3] [i_3]))) : (!-105)))));

        /* vectorizable */
        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        {
                            arr_33 [i_3] [i_8] = ((((2195848327 ? (arr_26 [i_3] [i_8] [i_8]) : 65514))) ? var_8 : ((65520 ? 2988 : 2099118977)));
                            var_28 *= ((~((var_17 ? var_10 : (arr_12 [i_11] [i_8] [i_11])))));
                            arr_34 [i_3] [i_10] [2] = (((arr_19 [i_9]) ? (!var_14) : (~115)));
                        }
                    }
                }
            }
            var_29 = (min(var_29, var_10));
            var_30 *= ((var_10 ? (var_13 >= 7) : (arr_8 [i_3])));
        }
        for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
        {
            var_31 = (((!21589) ? (7 ^ 110) : (arr_29 [i_3] [i_12])));

            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_32 |= ((((arr_17 [i_15] [i_15] [i_15] [i_15] [i_14] [i_14 + 1]) & (arr_17 [i_15] [i_15] [i_15] [i_15] [i_15] [i_14 - 1]))) ^ var_10);
                            arr_46 [i_3] [i_12] [i_13] [i_14] [i_15] &= (~-119);
                        }
                    }
                }
                arr_47 [i_3] = (((arr_45 [i_3] [i_12] [i_13] [i_13]) == ((1872124823 ? (arr_45 [i_13] [i_12] [i_3] [i_3]) : (arr_28 [i_13] [i_13] [i_12] [i_12] [i_3] [i_3])))));
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 16;i_16 += 1)
            {
                var_33 = ((-(arr_0 [i_16])));
                var_34 = (1 ^ 9223372036854775807);
                var_35 = ((-121 ? (arr_15 [i_3] [i_3] [10] [i_16]) : (arr_23 [i_3])));
                arr_50 [i_3] [i_12] [i_3] = (((arr_6 [i_3] [i_12]) ? 0 : var_12));
            }
            for (int i_17 = 0; i_17 < 16;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 16;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 16;i_19 += 1)
                    {
                        {
                            var_36 = (arr_57 [i_19] [i_18] [i_17] [i_12] [14]);
                            var_37 = ((806285367 | ((min((var_17 ^ var_3), (arr_3 [i_17] [i_19]))))));
                            var_38 |= (arr_4 [i_17]);
                            var_39 = (max(var_39, ((((((var_4 * ((((arr_37 [i_19] [i_12]) ? var_11 : var_7)))))) ? (((arr_45 [i_3] [i_12] [i_18] [i_19]) ? (arr_45 [i_3] [i_17] [i_18] [2]) : 7538999486180716290)) : (((1 ? (((((arr_51 [i_12]) || (arr_43 [i_3] [i_17] [i_17] [i_18] [i_19]))))) : (min(var_13, 0))))))))));
                            var_40 = (max(var_40, (arr_24 [i_12])));
                        }
                    }
                }
                var_41 = ((((min(38851, var_5))) <= (((((!(arr_1 [i_3] [i_17])))) ^ var_11))));
                arr_58 [i_3] [i_12] [i_17] = (((arr_38 [i_3]) + (arr_38 [i_3])));
                var_42 = (((arr_7 [i_17]) * (((-var_13 % (arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))));
            }
            for (int i_20 = 0; i_20 < 16;i_20 += 1)
            {
                var_43 *= ((((6 ? (arr_11 [i_3] [i_12] [i_20]) : 65526)) / (arr_38 [i_12])));
                var_44 += 1;
                var_45 = (arr_38 [i_3]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 25;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 25;i_22 += 1)
        {
            {
                arr_69 [i_22] [19] = 1;
                var_46 &= (((arr_65 [i_21] [i_22] [i_22]) ? (arr_63 [i_21] [23]) : (arr_63 [i_22] [i_21])));
                var_47 = max(((((31 ? (arr_62 [i_22]) : var_1)) | (arr_65 [11] [11] [i_22]))), (((var_12 && (arr_63 [i_22] [i_21])))));
                var_48 = (max(var_48, (((-24661 ? 0 : -1)))));
            }
        }
    }
    #pragma endscop
}
