/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_16 = 1;
        var_17 = (min(var_17, ((max(9223372036854775808, (((((-(arr_1 [i_0] [i_0]))) ^ ((max(var_14, var_15)))))))))));
        var_18 = var_12;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_19 += ((-((((var_1 ? 32256 : var_14))))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_9 [10] [i_2] [i_2] = (max((!4294935040), ((-(arr_6 [i_1] [i_2])))));
            var_20 = (((180765503328897343 * var_6) ? ((var_4 ? (arr_5 [i_1]) : (arr_5 [i_2]))) : -1));
            var_21 ^= ((1 ? ((((min((arr_4 [17] [i_2]), 25725))) ? (((arr_6 [i_1] [i_2]) ^ var_5)) : 1)) : (min(var_7, (arr_5 [i_1])))));
            var_22 += (arr_5 [i_1]);
        }
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            arr_13 [i_1] [i_3] = (min(((~(arr_12 [i_3]))), ((((~var_4) ? -var_14 : (arr_10 [i_3 + 1] [i_3 - 3] [i_3 - 1]))))));

            /* vectorizable */
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                var_23 = (min(var_23, (((!(arr_10 [i_3 - 2] [i_3 - 2] [i_4 + 1]))))));
                var_24 = (((arr_8 [10] [i_3 - 2] [i_4 - 1]) ? (arr_8 [i_1] [i_3 + 1] [i_4 + 1]) : (arr_14 [16] [i_3 - 2])));

                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_25 = (var_1 < var_1);
                        var_26 -= (arr_18 [i_5]);
                        var_27 = (arr_4 [i_4] [i_6]);
                    }
                    arr_22 [i_1] [i_3] [i_3] [i_3] [i_5 - 1] = (((arr_10 [i_3 - 3] [i_4 + 1] [i_5 - 1]) + var_8));
                }
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                arr_25 [14] [i_3] [i_7] = (arr_23 [i_1] [i_3] [i_7]);
                arr_26 [i_3] = (arr_8 [i_1] [i_3] [i_3]);
                var_28 = (!(((((min(var_9, (arr_23 [i_1] [i_1] [i_1])))) ? 1 : (1 + var_5)))));
            }
            /* vectorizable */
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    var_29 -= (!var_15);
                    arr_32 [i_1] [i_3 - 2] [i_3] [1] = -var_6;

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        arr_35 [i_1] [i_3] [i_8 - 1] [i_3] [i_10] = ((var_12 > ((var_8 ? 18446744073709551615 : 1))));
                        arr_36 [i_1] [i_1] [i_3 + 1] [i_8] [i_9] [i_3] = (((arr_5 [i_8]) || -32));
                        arr_37 [i_1] [i_3] [5] [i_3] [1] = (((arr_14 [i_3 + 1] [i_10]) * (arr_10 [i_3] [i_8] [i_9])));
                        arr_38 [i_1] [i_3] [i_8] [i_8] [i_3] = (((arr_23 [i_3 - 1] [i_3 - 3] [i_8 - 1]) ? (arr_23 [i_3 - 1] [i_3 - 3] [i_8 - 1]) : var_12));
                    }
                    arr_39 [i_1] [i_3] [i_1] [i_3 + 1] [i_8] [i_1] = (((arr_19 [i_1] [i_3] [i_8 + 1] [i_9]) / var_8));
                    var_30 ^= ((var_5 ^ (arr_4 [i_1] [i_9])));
                }
                for (int i_11 = 2; i_11 < 16;i_11 += 1)
                {
                    arr_42 [i_1] [i_3] = ((((!(arr_31 [i_1] [16] [i_3]))) ? 1 : var_1));
                    var_31 = ((!(arr_41 [13] [i_3] [i_8] [i_11 - 2])));
                }
                var_32 += (~7);
                var_33 = (max(var_33, 18));
            }
            arr_43 [i_1] [i_3] = ((((-(arr_31 [14] [i_1] [i_3]))) != ((min((!128), 1)))));
            arr_44 [i_3] = (((min((arr_19 [i_1] [i_3 - 1] [i_1] [i_3 - 2]), (arr_4 [i_1] [i_3])))) && -var_1);
            var_34 = (min(var_34, ((((max(var_4, ((62 * (arr_34 [i_1] [7] [i_1] [i_1] [i_1] [i_1] [1]))))) > (min((min((arr_28 [i_1] [i_1]), var_7)), ((var_10 ? var_13 : 63)))))))));
        }
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            arr_48 [i_1] [i_1] [i_12] = (min(1, 1));
            var_35 += (-var_2 | -2153617278);
            arr_49 [10] [i_1] [10] = ((!(arr_18 [1])));
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 17;i_13 += 1)
        {
            var_36 = -1;
            var_37 = ((!(arr_51 [i_13] [i_13 - 1] [i_13])));
        }
        var_38 = (max(var_38, (((((arr_29 [i_1] [i_1] [14] [i_1] [i_1]) == var_9))))));
        var_39 += (arr_11 [0] [i_1]);
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        arr_56 [7] [i_14] = (((((!(arr_19 [i_14] [i_14] [i_14] [i_14])))) * (max(var_7, -26082))));

        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            var_40 ^= -96;
            arr_60 [i_14] = ((max(var_9, (min(var_9, 1)))));
        }
    }
    for (int i_16 = 2; i_16 < 20;i_16 += 1)
    {
        var_41 = (min(var_41, (((-((((((((arr_62 [i_16]) == 2527632824)))) < ((var_14 ? 1 : (arr_61 [i_16])))))))))));
        var_42 = (!11347);
        var_43 = (arr_61 [i_16 + 3]);
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 18;i_17 += 1)
    {
        for (int i_18 = 1; i_18 < 1;i_18 += 1)
        {
            {
                var_44 = 1;
                arr_70 [i_17] [i_17] [i_18] = (((((min(2239097129, 1)) ? (arr_66 [i_17] [i_18 - 1]) : (arr_46 [i_17] [i_17])))));
                var_45 = (min(((var_11 ? (arr_4 [i_17] [i_18 - 1]) : (arr_4 [i_17] [i_18 - 1]))), (((!((min(2758555680, 0))))))));
            }
        }
    }
    var_46 = (((var_5 ? var_1 : ((1 ? var_7 : 327102730997566057)))) == var_1);
    #pragma endscop
}
