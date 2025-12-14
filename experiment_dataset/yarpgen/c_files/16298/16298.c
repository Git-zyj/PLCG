/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_17 = var_16;
        arr_3 [i_0] [i_0] = (arr_2 [i_0 - 1]);
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_18 ^= (min(((max((((100 || (arr_6 [10])))), 100))), ((30 ? (((var_6 ? 1 : 100))) : (max(2599926737, 1))))));
        var_19 = var_13;
        arr_8 [i_1] [i_1 - 1] = var_7;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_20 = 205258284;
                        arr_18 [i_1] [i_1] = (((((max(var_2, (arr_15 [i_1] [i_1 - 1] [i_1 - 1] [i_1]))))) != ((-3401318988229087408 ? (arr_14 [i_1] [i_1 - 1] [i_1 + 1] [i_1]) : (arr_6 [i_1])))));
                        var_21 = (min(var_21, (((var_0 << ((min(100, (205258271 > 41)))))))));
                    }
                    arr_19 [i_3] [i_1] [i_1] = 812469504;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_22 = ((!(arr_14 [i_5] [i_5] [i_5] [i_5])));
                                arr_33 [i_5] [i_6] = var_8;
                            }
                        }
                    }
                    arr_34 [i_7] [i_5] [i_5] = ((-555191883 ? (arr_27 [i_5] [i_5]) : (var_4 - 555191883)));
                }
            }
        }
        var_23 = 1;
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        arr_39 [i_10] = (((max(6966, -4171506976709745800)) >= (arr_24 [i_10] [i_10] [i_10])));
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 9;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    {
                        var_24 = ((((arr_41 [i_11 + 1] [i_12 + 1] [i_13]) > 2334416068)));

                        for (int i_14 = 0; i_14 < 0;i_14 += 1)
                        {
                            var_25 = (max(var_25, 100));
                            var_26 = (((max(-var_8, (arr_36 [i_12 - 1]))) * (-5 + 152)));
                            arr_51 [i_10] [i_11 + 3] [i_12] = (arr_36 [i_10]);
                            arr_52 [i_11] [i_12] = (max((min((arr_24 [i_11] [i_12] [i_13]), 3666183695)), (arr_15 [i_10] [i_11 - 2] [i_11] [i_12])));
                            arr_53 [i_12] [i_11] = 59222;
                        }
                        arr_54 [i_12] [i_13] = (6966 == 16256);
                        var_27 = 100;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 12;i_16 += 1)
        {
            for (int i_17 = 3; i_17 < 12;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 9;i_19 += 1)
                        {
                            {
                                arr_69 [i_15] [i_17 - 3] = 102;
                                var_28 = ((((var_10 ? var_15 : var_6)) <= (arr_25 [i_15])));
                                var_29 = -86;
                                arr_70 [i_15] [i_16] [i_17] [i_18] [i_19] = (4294967295 == 3739775413);
                            }
                        }
                    }
                    var_30 = (205258280 ? (arr_30 [i_16] [i_15] [i_16] [i_16] [i_16] [i_15] [i_16]) : 4091555528);
                    var_31 -= (var_2 + 15);
                    var_32 = 0;
                    arr_71 [i_15] [i_15] [i_15] [i_15] = (((arr_63 [i_15] [i_15] [i_17]) ? -16269 : 74));
                }
            }
        }
        arr_72 [i_15] [i_15] = (arr_5 [i_15]);
    }
    for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 0;i_21 += 1)
        {
            for (int i_22 = 2; i_22 < 10;i_22 += 1)
            {
                for (int i_23 = 3; i_23 < 12;i_23 += 1)
                {
                    {
                        var_33 = (max((6336 && var_3), (var_1 || 14)));

                        /* vectorizable */
                        for (int i_24 = 1; i_24 < 11;i_24 += 1)
                        {
                            var_34 = var_10;
                            arr_87 [i_20] [i_20] [i_21] [i_23] [i_23] [i_24 + 1] [i_24] = ((var_3 >> (-210761392 + 210761405)));
                        }
                        var_35 = min((!555191887), (min(0, 3739775409)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_25 = 1; i_25 < 10;i_25 += 1)
        {
            for (int i_26 = 1; i_26 < 12;i_26 += 1)
            {
                for (int i_27 = 1; i_27 < 9;i_27 += 1)
                {
                    {
                        var_36 = (max(var_36, -7144017856778138341));
                        var_37 = var_13;
                    }
                }
            }
        }
    }
    var_38 += var_8;
    var_39 = 13590;
    var_40 = (min(var_3, -1966194616));
    #pragma endscop
}
