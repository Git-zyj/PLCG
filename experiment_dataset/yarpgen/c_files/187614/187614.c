/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (((((((arr_9 [i_0] [i_0] [i_2] [i_3 + 1]) + (arr_9 [i_0] [i_0] [i_2] [i_3 + 3])))) ? (arr_4 [i_3 + 4] [i_3 - 2] [i_3] [i_3 - 2]) : (((((~(arr_3 [i_0] [i_0])))) ? (!12705261565214696470) : var_10)))))));
                                var_15 = (max(var_15, ((((((arr_6 [i_4] [i_3 + 4] [i_0]) > (arr_6 [i_0] [i_1] [i_3 - 1]))) ? var_10 : (65526 >= 2901266393))))));
                            }
                        }
                    }
                    var_16 = (((~var_9) == ((14 ? 3230242556 : 638293941701377797))));
                    var_17 = 2901266377;
                }
            }
        }
        arr_13 [i_0] = (-67 <= -6972606069928497647);
        arr_14 [i_0] = var_5;
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_18 = ((((var_13 >= (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]))) ? (((var_2 <= (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])))) : (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])));
        arr_18 [i_5] = ((((arr_0 [i_5]) <= var_11)));
        arr_19 [i_5] = var_12;

        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_19 = (((var_0 + var_1) == ((((((arr_20 [i_5]) ? 24427 : var_1)))))));
            var_20 = (max(var_20, (((~((0 ? 8849044638071153307 : 18287666484199417586)))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_30 [i_8] [i_7] [i_6] [i_5] = ((((min((((!(arr_2 [i_7] [i_8])))), ((var_4 ? (arr_0 [i_6]) : 2))))) >= ((((arr_1 [i_8]) ? var_5 : (arr_4 [i_5] [i_5] [i_5] [i_8]))))));
                        var_21 = ((-1 ? 2047 : -297386356));
                        var_22 = ((((var_0 % var_9) % (((var_3 != (arr_5 [i_5] [i_5] [i_5])))))));
                    }
                }
            }
        }
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    {
                        var_23 = (18010000462970880 % 32767);

                        for (int i_12 = 2; i_12 < 7;i_12 += 1)
                        {
                            arr_42 [i_9] = ((~(((arr_28 [i_9 + 1] [i_9 - 1] [i_12 + 3]) ? ((((arr_29 [i_5] [i_5]) == (arr_39 [i_5] [i_9] [i_9 + 1] [i_11] [i_9] [i_9])))) : (var_11 != var_6)))));
                            var_24 = (max(var_24, (!11534265227232777711)));
                        }
                    }
                }
            }
            var_25 ^= var_8;
            var_26 = ((+((((arr_10 [i_9 - 1] [i_9 + 1] [i_9 + 1]) > var_12)))));
            var_27 = (((((~var_8) ? (((var_7 + (arr_7 [i_5] [i_5] [i_9])))) : (max(var_3, (arr_5 [i_5] [i_5] [i_5])))))) ? ((((var_7 ? var_7 : (arr_4 [i_5] [i_5] [i_9] [i_9]))) + (((-6876765460043351980 ? -32750 : -468156390874820814))))) : ((((((arr_32 [i_5] [i_9 - 1]) == var_11)) ? (arr_21 [i_9] [i_5]) : ((var_7 ? var_6 : var_7))))));
        }
    }
    var_28 = var_3;
    var_29 = (var_9 ? ((~((var_11 ? var_1 : var_2)))) : var_0);
    #pragma endscop
}
