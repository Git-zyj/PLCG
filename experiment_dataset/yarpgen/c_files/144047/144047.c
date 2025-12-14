/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_10 = (max((((min(var_1, var_8)) / (arr_6 [i_2] [i_0] [i_0] [i_0]))), ((max((min((arr_1 [i_2]), (arr_1 [i_0]))), 1)))));
                    arr_7 [i_0] [5] = ((((min(31896, ((31908 ? (arr_6 [i_2] [i_0] [i_0] [i_0]) : var_9))))) ? (max(var_7, 6095828794798500638)) : 48574));
                    var_11 = (max((max((arr_1 [i_0]), (var_0 + 99))), ((var_1 ? (((max((arr_1 [i_0]), var_4)))) : 12403590962022320746))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_12 = (var_8 ? ((((min(65535, var_7))) ? ((12403590962022320746 * (arr_3 [i_0]))) : 2323713712)) : (((~(max(var_4, 1764079767))))));
                                var_13 = (arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] [i_4]);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_14 = (arr_4 [i_1]);
                    arr_16 [i_5] [5] [i_0] = (arr_9 [i_0] [i_1] [i_1] [i_0]);
                    var_15 = 11019277754167870830;

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_16 = var_4;
                        arr_19 [i_5] [i_0] = (((var_7 | var_3) ? var_3 : (arr_4 [i_1])));
                    }
                }
                var_17 = max(((var_9 ? var_1 : 6043153111687230870)), (((arr_4 [i_1]) / (arr_5 [i_0] [i_0] [i_1]))));
            }
        }
    }
    var_18 = var_7;

    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_22 [i_7] = ((-((-(arr_20 [i_7])))));

        for (int i_8 = 3; i_8 < 13;i_8 += 1)
        {
            arr_26 [i_7] [i_7] [i_8] = (arr_25 [i_8]);
            var_19 *= (min((16961 || 2323713727), 2139963115));
            arr_27 [i_8] [i_8] = (max((max((max(1, var_1)), var_5)), (((-(arr_24 [i_8] [i_8 + 1] [i_7]))))));
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 3; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_20 = (max((arr_29 [i_7] [i_9]), ((var_6 ? var_5 : (arr_29 [i_11] [i_12])))));
                            var_21 = (arr_36 [i_7] [i_9] [i_10] [i_11]);
                            var_22 = (((!1) / ((1 ? -var_4 : ((var_4 & (arr_34 [i_7] [i_7] [i_7])))))));
                            arr_40 [i_10] [i_11] [i_10] = ((63 ? 3682 : 45));
                        }
                    }
                }
            }
            var_23 = (((~2530887528) ^ 18042228446783810263));
            var_24 = (59 >> 1);
        }
        for (int i_13 = 3; i_13 < 13;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    var_25 = (min((((arr_46 [i_15] [i_14] [i_13]) ^ (arr_43 [i_13 - 2]))), (~9550)));
                    var_26 = (min(var_26, ((min(8191, var_1)))));
                }
                for (int i_16 = 2; i_16 < 14;i_16 += 1)
                {
                    arr_52 [i_13] = (arr_24 [i_7] [i_7] [i_14]);
                    var_27 = (((((((var_8 ? (arr_45 [i_7] [i_7] [i_13] [i_7]) : 63571)) << (877875880 - 877875869)))) | (((~-5486397569428220861) ^ 1971253583))));
                    arr_53 [i_13] [8] [i_14] [i_14] [i_14] = var_5;
                }
                arr_54 [i_13] [i_13 + 2] [i_13] = ((((((arr_34 [i_13 + 2] [i_13 - 2] [i_13 + 1]) + (arr_34 [i_13 + 1] [i_13 - 3] [i_13 - 3])))) ? (((((125 >> (var_6 - 81)))))) : 18446744073709551615));
                var_28 = var_0;
                arr_55 [i_7] [i_13 - 3] [i_7] &= (((~1) / (max(1971253589, 3846195586))));
            }
            var_29 = var_5;
        }
    }
    var_30 = ((-((((var_2 ? var_8 : var_9)) / var_9))));

    for (int i_17 = 1; i_17 < 19;i_17 += 1)
    {
        var_31 = var_1;
        var_32 = (15573540038132048343 - 2228755406468870695);
        var_33 = (max((2332332118 / 113), 1));
    }
    for (int i_18 = 0; i_18 < 21;i_18 += 1) /* same iter space */
    {
        var_34 = (min(var_34, ((((((-(arr_59 [12])))) ? (((arr_59 [16]) ? (arr_59 [2]) : var_6)) : 0)))));
        var_35 = (min(((((arr_60 [i_18]) % (arr_59 [i_18])))), (min(227, var_3))));
        arr_62 [i_18] [i_18] = ((((min(var_5, (arr_59 [i_18])))) && ((var_5 && (arr_59 [i_18])))));
    }
    for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
    {
        arr_65 [i_19] = ((min((arr_60 [i_19]), (arr_63 [i_19]))));
        arr_66 [i_19] = -8981;
        arr_67 [i_19] [i_19] = ((var_9 + (min((arr_61 [i_19] [18]), 65535))));
    }
    #pragma endscop
}
