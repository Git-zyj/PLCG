/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max((-2048 - 14411683525865595385), 23356);
    var_12 += var_7;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = 2048;
        var_13 ^= (((((arr_1 [i_0 + 1]) << (var_5 - 4700))) == var_10));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_14 = (min(var_14, var_2));
        var_15 -= (((((var_8 ? -23806 : var_3)))) ? (((((var_4 ? var_6 : var_5))) ? (var_5 + -398512930) : (max(var_2, var_6)))) : ((((var_0 ? var_10 : var_3)))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_16 *= (min((((((max(23806, var_0))) > (var_6 > var_10)))), (max((arr_8 [i_2] [i_2]), (var_8 % var_10)))));

        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            var_17 = ((~(((((398512929 ? 23448 : 1951184156506660))) ? ((max(23727, var_2))) : var_9))));
            var_18 = ((((((var_1 ? var_0 : var_3)))) != (((-23800 < var_0) * (min(var_8, var_2))))));
            arr_13 [9] [i_3] [i_3] = (((((min((arr_10 [i_2] [i_2]), (-32767 - 1))))) >= (var_10 || 10537331844312932532)));
            var_19 = (((min((arr_10 [i_3 - 1] [i_3 + 1]), var_6)) / ((~(-32767 - 1)))));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_20 = min(((min(32767, (((var_5 != (arr_15 [i_2]))))))), (arr_7 [i_2]));
            arr_18 [i_2] [i_4] [i_4] = (((((((min(var_10, var_0))) ? var_9 : (((arr_4 [i_4]) ? (arr_7 [i_4]) : var_9))))) ? (((((arr_6 [i_2]) != var_8)) ? var_5 : (((var_9 || (arr_17 [i_2] [i_4])))))) : (max(var_3, (min(var_7, var_1))))));
            arr_19 [i_4] [i_2] = (max(((((((max(var_0, var_4)))) * (-2448 * 0)))), (min(8, var_9))));
            arr_20 [i_2] [i_2] [4] = 1;
            var_21 = ((-(max(var_6, var_4))));
        }
        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {
            var_22 = (max(var_22, ((((((var_0 ^ (var_8 == var_1)))) ? ((((min(23806, var_7))) ? var_10 : (min(var_5, var_6)))) : (max((arr_8 [i_5 + 1] [i_5 - 2]), var_9)))))));
            var_23 = (min(((var_2 / (arr_6 [i_5 + 2]))), (arr_6 [i_2])));
            var_24 = (max(var_24, var_7));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_25 = ((arr_24 [i_2] [i_6]) ? var_4 : var_6);
            var_26 = (max(var_26, (var_7 || var_9)));

            for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
            {
                var_27 = (max(var_27, ((((var_7 || var_4) ? var_0 : (~var_9))))));
                arr_29 [i_2] [i_6] [i_6] &= ((4119457173603415860 ? 14 : var_5));
                arr_30 [i_7] [i_6] [i_2] [i_2] = (var_6 ? (arr_17 [0] [i_6]) : var_2);
                arr_31 [i_7] [i_6] &= (var_6 ^ var_1);
                var_28 = (var_8 ? (arr_6 [i_6]) : var_3);
            }
            for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
            {

                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    var_29 = ((10694815114303204335 ? var_7 : (arr_23 [i_2] [i_8])));
                    var_30 = var_1;
                    var_31 = var_10;
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    var_32 = var_8;

                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        var_33 = (((arr_33 [i_11 + 2] [i_8] [i_8] [i_6]) > var_9));
                        var_34 = (min(var_34, ((((arr_14 [i_2]) < 32730)))));
                    }
                    for (int i_12 = 1; i_12 < 13;i_12 += 1)
                    {
                        arr_44 [i_2] [i_6] [i_8] [i_10] [i_2] = var_7;
                        arr_45 [i_2] [i_6] [i_6] [i_6] [i_12] = -11394;
                    }
                    for (int i_13 = 1; i_13 < 12;i_13 += 1)
                    {
                        var_35 = (max(var_35, ((((arr_21 [i_2] [i_2]) ^ var_7)))));
                        var_36 = (((arr_34 [i_6] [i_6]) != var_8));
                        var_37 *= (((arr_36 [i_2] [i_6] [i_6] [i_2]) < var_8));
                        arr_49 [i_2] [i_6] [i_8] [9] [i_13 + 2] = ((var_0 * (23807 <= 13157)));
                    }
                    var_38 ^= (((arr_46 [i_2] [0] [i_8] [i_2] [i_10] [i_10]) ? 19495 : var_1));
                }
                var_39 = ((var_7 + (arr_27 [i_2] [i_6] [i_6] [i_8])));
            }
            for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
            {
                arr_52 [i_2] [i_2] [i_6] [i_14] = var_1;
                var_40 = (439742306400925073 + -23807);
                arr_53 [i_2] [i_2] [i_2] = (var_6 - var_4);
            }
            for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
            {
                arr_57 [i_15] = (~-8191);
                arr_58 [i_2] [i_2] [i_2] [i_15] = ((var_7 != (arr_22 [i_2])));
                var_41 *= var_0;
                arr_59 [i_15] = 13585058874471456366;

                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    var_42 = (min(var_42, (var_7 | var_9)));
                    arr_62 [i_6] [i_15] = ((var_1 ? var_5 : var_6));
                }
            }
            arr_63 [i_2] [i_2] [i_2] = var_1;
        }
        var_43 = (((((((var_0 ? var_8 : 137438953471))))) & ((var_3 | (arr_11 [i_2] [i_2] [i_2])))));
    }
    for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
    {
        arr_66 [i_17] [i_17] = (arr_4 [i_17]);
        var_44 = (max(var_44, (~-15004)));
    }
    #pragma endscop
}
