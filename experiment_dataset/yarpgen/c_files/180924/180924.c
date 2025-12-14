/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_20 = (!var_12);
        arr_3 [2] = (~-9240);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_21 = (min(var_21, ((((arr_4 [1] [i_1]) ? -2361230890630506542 : (((((!(arr_5 [10] [10]))) ? (arr_4 [i_1] [i_1]) : (max(-108, (arr_4 [i_1] [i_1])))))))))));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_9 [i_1] = (((arr_8 [i_1] [9] [i_1]) == var_13));

            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                arr_12 [i_2] [i_2] [i_2] &= ((+((1 >> (((arr_4 [4] [i_3]) + 949717532))))));
                arr_13 [i_2] [i_1] = (((-31 ? 118 : (max(115, 23)))));
            }
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_17 [i_1] [i_1] [i_1] = (i_1 % 2 == 0) ? ((((36428 && 6427934164188699468) >> (((max((arr_11 [i_1]), (!var_18))) - 91))))) : ((((36428 && 6427934164188699468) >> (((((max((arr_11 [i_1]), (!var_18))) - 91)) + 25)))));
            arr_18 [i_1] = (((arr_14 [i_1] [1] [i_1]) ? ((-4456795605784668212 ? (((max(-90, var_7)))) : (var_18 ^ 21))) : 120));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_22 = (max(var_22, (arr_16 [i_6])));
                        arr_26 [i_1] [i_1] [i_1] [i_1] = (arr_16 [i_1]);
                        var_23 |= (var_13 - (arr_25 [i_5] [i_5 + 1] [0] [i_5 - 1]));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 15;i_9 += 1)
                {
                    {
                        var_24 = (max(var_24, 4364868141151636994));
                        var_25 = (min(var_25, ((((((arr_14 [i_1] [i_5 - 1] [1]) && (arr_28 [12] [i_5] [i_8] [12]))) ? ((4364868141151637001 ? -24652 : (arr_28 [i_1] [i_5 + 1] [i_8] [i_1]))) : (!var_2))))));
                        var_26 = (max(var_26, (arr_21 [i_8] [i_8] [i_8])));
                    }
                }
            }
            var_27 += ((-9212 ? ((~(arr_23 [i_1] [i_1] [i_5] [i_5]))) : -32742));
            var_28 = (max(var_28, (((~(arr_22 [i_5 - 1]))))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_29 = var_1;
                            arr_38 [i_12] [i_1] [i_5] [i_1] [i_1] = (arr_33 [7] [i_1]);
                            arr_39 [i_1] [i_11] [i_12] = (arr_4 [i_5 + 1] [i_5 - 1]);
                            arr_40 [i_1] [i_1] [2] [i_1] [i_1] [i_12] = (36446 ^ 8);
                        }
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            var_30 = (min(var_30, (((arr_6 [i_1]) ? (!var_16) : (max(-24655, (max(36450, (arr_15 [i_1] [i_1] [i_13])))))))));
            var_31 ^= (arr_24 [i_13] [4] [i_1] [i_13]);
            var_32 ^= ((var_4 ? (max(((max((arr_8 [i_13] [i_13] [i_13]), 61778))), (arr_33 [i_1] [i_13]))) : 5436));
        }
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 15;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    {
                        var_33 = (min(var_33, (((((((arr_21 [4] [i_14] [i_15]) ^ var_16)) + ((max(32387, 9260)))))))));
                        var_34 = (max((((((~(arr_44 [i_1]))) >= (arr_7 [i_1])))), ((-((15 ? (arr_34 [i_15 - 2]) : var_12))))));
                        var_35 += var_11;
                        var_36 = (((max((arr_8 [i_15 + 1] [4] [8]), (arr_28 [9] [i_15 - 1] [i_15] [i_15 - 1]))) < ((((4 || (arr_14 [i_1] [i_15 - 1] [i_1])))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 16;i_17 += 1)
        {
            for (int i_18 = 2; i_18 < 14;i_18 += 1)
            {
                {
                    arr_56 [i_1] [i_17] [i_1] = ((((!(!1)))));
                    var_37 |= (max(((max((1 && 18372820374373785059), 13384))), (max(var_13, ((max(var_8, (arr_11 [8]))))))));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 16;i_19 += 1)
                    {
                        for (int i_20 = 2; i_20 < 15;i_20 += 1)
                        {
                            {
                                var_38 = (min(var_38, var_8));
                                arr_64 [i_18] [i_1] = (~29085);
                            }
                        }
                    }
                }
            }
        }
    }
    var_39 = (!var_4);
    var_40 = ((((max(-9251, var_0))) || ((max(((max(4088, -968324911))), ((var_2 ? var_9 : var_19)))))));
    #pragma endscop
}
