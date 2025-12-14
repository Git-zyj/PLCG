/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [10] [10] [10] = ((-11876 == (min((arr_0 [i_0]), (arr_0 [i_0])))));
                arr_7 [i_0] = (max(1, var_2));
            }
        }
    }
    var_20 |= (min((((var_17 ? (var_2 < var_8) : 9852))), var_5));

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_21 = var_17;
        arr_11 [i_2] [i_2] = (((arr_9 [i_2]) ^ ((min((arr_10 [i_2]), (arr_10 [i_2]))))));
        arr_12 [i_2] = var_16;
        arr_13 [i_2] [i_2] |= var_16;
        var_22 = (((var_3 - var_4) ? (arr_0 [i_2]) : (arr_3 [i_2])));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_23 = var_13;
        arr_18 [i_3] = (((var_3 ? (!var_8) : ((-(arr_14 [i_3]))))));
        arr_19 [i_3] [i_3] = (((((arr_17 [i_3]) ? var_11 : (arr_17 [i_3]))) * (((arr_17 [i_3]) / (arr_17 [i_3])))));

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_24 = (arr_21 [i_4] [i_4] [i_3]);
            arr_22 [i_3] [i_4] = (((((~(arr_15 [i_3])))) ? (((arr_15 [i_3]) ? var_10 : (arr_15 [i_3]))) : ((min((arr_15 [i_4]), (arr_15 [i_4]))))));
            var_25 = (max(((-(arr_16 [i_3]))), ((-(max((arr_15 [i_4]), var_11))))));
            var_26 = (arr_17 [i_4]);

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_27 ^= var_12;

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_28 += (min(var_4, ((((arr_14 [1]) ? (arr_17 [i_4]) : var_1)))));
                    var_29 *= (min(((((arr_14 [i_6]) == (arr_14 [i_3])))), ((~(arr_14 [i_3])))));
                    var_30 = (min(var_30, (((~(arr_27 [i_3] [i_4] [i_5] [i_6]))))));
                    arr_28 [i_3] [i_5] [i_6] = var_18;
                    arr_29 [i_5] [i_5] = (((arr_14 [i_4]) ? ((((((arr_14 [i_6]) << 4)) <= (arr_16 [i_6])))) : ((-(arr_23 [i_3] [i_5] [i_5])))));
                }
                for (int i_7 = 4; i_7 < 22;i_7 += 1)
                {
                    var_31 = ((~(max(var_2, ((var_6 ? var_11 : (arr_27 [i_3] [i_4] [i_5] [i_5])))))));
                    arr_33 [i_5] [5] [i_5] = 1;
                    var_32 ^= (max((((((22731 ? var_3 : (arr_20 [i_3] [23])))) ? -2 : (arr_17 [i_7 - 4]))), ((((8168438530787785199 ? 21556 : var_18))))));
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    arr_36 [i_3] [i_4] [i_5] [i_5] = ((arr_31 [20] [i_5] [9] [i_8]) - var_5);
                    var_33 = ((~(arr_34 [i_3] [i_5])));
                }
                arr_37 [i_3] [i_5] [i_5] = (((min((arr_31 [i_3] [i_5] [i_3] [i_3]), (arr_31 [i_3] [i_5] [i_4] [i_5]))) != (((arr_21 [i_3] [i_4] [i_5]) ? (arr_21 [i_3] [i_3] [i_3]) : (arr_21 [i_3] [i_3] [i_5])))));
            }
        }
    }

    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            var_34 = 1;
            arr_44 [i_9] [i_9] = 65532;
            arr_45 [1] [i_10] = (min((arr_34 [i_9] [i_10]), ((min((arr_20 [i_9] [i_10]), (arr_20 [i_9] [i_10]))))));
        }
        var_35 -= ((275 ? ((((var_15 && (arr_41 [i_9] [i_9]))) ? (arr_20 [i_9] [i_9]) : 137)) : var_1));
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                {

                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        var_36 = (max(var_36, (arr_52 [i_11])));

                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            var_37 = ((((max(var_6, ((var_10 ? var_8 : (arr_55 [i_15] [i_13] [2])))))) ? ((+(((arr_23 [i_15] [i_15] [22]) ? var_1 : var_8)))) : ((~((max((arr_34 [16] [16]), var_6)))))));
                            var_38 ^= var_19;
                            var_39 += (((min(((!(arr_35 [i_12] [i_12] [i_13] [i_14] [i_15] [i_13]))), (var_17 && var_12))) ? ((max((max(var_1, -8842911498773380162)), (((var_17 ? 0 : var_10)))))) : (min(0, (((-19547 ? var_5 : (arr_51 [i_11] [16] [i_15]))))))));
                        }
                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            var_40 = (max(var_40, (arr_23 [i_11] [i_12] [i_16])));
                            var_41 = (min(var_41, var_16));
                        }
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        var_42 *= ((var_18 | (arr_32 [i_11] [i_12] [i_13] [i_17] [i_17] [i_17])));

                        for (int i_18 = 0; i_18 < 20;i_18 += 1)
                        {
                            arr_69 [i_17] [i_17] [i_17] [11] [i_17] [i_17] [6] = (((arr_56 [i_11] [i_12] [i_13] [i_13] [i_17] [i_18]) ? (arr_56 [i_18] [i_17] [i_17] [i_13] [i_12] [i_11]) : (arr_52 [i_12])));
                            arr_70 [i_12] [i_13] [i_17] [i_18] = ((arr_64 [i_18] [i_17] [i_13] [i_12] [i_11]) != 35903);
                            var_43 += (((arr_60 [i_12] [i_12] [i_12] [i_12] [i_12]) ? var_11 : var_13));
                            arr_71 [i_11] [i_11] [i_13] [i_11] [i_18] &= var_5;
                            var_44 = (min(var_44, (arr_31 [i_11] [i_17] [i_13] [i_17])));
                        }
                        for (int i_19 = 0; i_19 < 20;i_19 += 1)
                        {
                            var_45 -= ((-(arr_47 [i_11])));
                            arr_76 [17] [i_12] [i_12] [i_12] [13] = -var_16;
                            arr_77 [i_19] [i_17] [i_13] [i_12] [i_11] = (arr_65 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]);
                            var_46 = (((arr_57 [i_11] [13] [i_11] [19]) ? -4131895579389426552 : (arr_74 [i_11] [i_12] [i_13] [i_17] [i_17] [i_19])));
                        }
                    }
                    arr_78 [i_11] [i_12] [i_13] |= ((-(min((((arr_23 [i_11] [i_11] [1]) - var_3)), ((((arr_34 [i_11] [2]) % var_12)))))));
                }
            }
        }
        var_47 = (max(var_47, (((~(((arr_27 [18] [4] [i_11] [4]) ? var_14 : (arr_27 [i_11] [i_11] [i_11] [i_11]))))))));
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 20;i_20 += 1) /* same iter space */
    {
        var_48 ^= var_10;
        var_49 = (arr_15 [i_20]);
    }
    #pragma endscop
}
