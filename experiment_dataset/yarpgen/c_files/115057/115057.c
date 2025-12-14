/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (max(var_20, (((+((((((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (6615 > var_3))))))));
        var_21 = (min(var_21, ((((((var_16 ? -1881780360 : (arr_0 [i_0])))) ? ((var_18 ^ (((min(65535, 256)))))) : ((((!(-257 >= -247))))))))));
        var_22 = (((arr_0 [i_0]) ? (((((0 ? 1 : (arr_1 [i_0])))) ? 22016 : var_18)) : ((((((arr_1 [i_0]) & var_10))) ? 256 : (((arr_0 [i_0]) ? var_3 : 1356921156))))));
        var_23 = (max((arr_0 [i_0]), var_16));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_24 = ((var_16 ? (max(-var_3, ((4251843155207500683 ? 1 : (arr_3 [i_1]))))) : ((((arr_1 [i_1]) ? var_6 : 265)))));
        var_25 = (arr_1 [i_1]);
        var_26 &= var_13;
    }
    var_27 -= var_9;
    var_28 ^= var_18;

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_29 += (arr_0 [i_4]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_30 = (min((((arr_1 [i_5]) ? (arr_1 [i_2]) : (arr_1 [i_3]))), ((var_9 ? (((arr_9 [i_4]) - -17632)) : -257))));
                                var_31 = (min(var_31, ((min((min((var_5 >= var_16), (arr_16 [i_2] [i_2] [10] [i_2] [i_2]))), ((((arr_11 [i_2] [i_2]) <= (((arr_20 [i_4] [i_4] [i_4] [i_4] [i_5] [i_4]) ? var_0 : 10681068925548875308))))))))));
                                var_32 &= min((43519 & var_4), (min((arr_11 [i_4] [i_5]), 63488)));
                                var_33 = (((arr_7 [i_2] [i_3]) ? var_2 : (((arr_18 [i_4] [i_3] [i_3] [i_4]) ? (arr_18 [i_2] [20] [i_4] [i_4]) : (arr_18 [i_2] [i_2] [i_2] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        var_34 &= ((((1336863184 ^ (arr_8 [i_7 + 1] [i_8 + 1]))) != ((var_8 ^ (arr_2 [i_2] [i_8 - 1])))));
                        var_35 = 43339;
                        var_36 |= (min(((((1 ? 1480254453 : -1336863184)) + (arr_11 [i_9] [i_7 + 1]))), (((-(arr_19 [i_9] [i_8 + 1] [18] [i_2] [i_2]))))));
                    }
                }
            }
        }
        var_37 &= var_13;
        var_38 = (arr_23 [i_2]);
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_39 &= (max((arr_16 [2] [i_10] [2] [2] [i_10]), ((max(1, var_18)))));
        var_40 = (min((min(1, 1336863184)), var_1));
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        var_41 = max(var_11, 1);
        var_42 = (((max(var_11, ((min(var_1, -238))))) * ((((var_18 << (((arr_1 [i_11]) + 353108053))))))));
        var_43 &= 1;
        var_44 = (max(1336863184, 1));
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            var_45 = (max(var_45, 0));
            var_46 ^= (((arr_17 [0] [i_12] [i_12]) != (((var_0 == var_10) ? ((min((arr_2 [12] [i_12]), var_19))) : (1341 / var_1)))));
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 14;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_16 = 1; i_16 < 15;i_16 += 1)
                        {
                            var_47 -= 0;
                            var_48 = (var_11 > 61964);
                        }
                        for (int i_17 = 1; i_17 < 12;i_17 += 1)
                        {
                            var_49 = (-(arr_27 [i_13] [i_13] [i_13] [i_13]));
                            var_50 = (arr_40 [i_12]);
                        }
                        var_51 = (((((var_4 ? var_5 : (((arr_45 [i_14] [i_14]) ^ (arr_43 [i_12] [i_14] [i_14])))))) ^ (((13861629591888823288 * var_18) ? 1 : ((341823161 ? -643250252462465833 : -25))))));
                    }
                }
            }
            var_52 = (arr_10 [i_12]);
        }
        /* vectorizable */
        for (int i_18 = 3; i_18 < 14;i_18 += 1)
        {
            var_53 = (min(var_53, 1));
            var_54 = ((var_1 ? (arr_52 [i_18 + 1] [i_18 - 2] [i_18] [i_18 - 1] [i_18 + 2]) : (arr_52 [i_18] [i_18] [i_18] [i_18] [i_18])));
        }
        var_55 = (arr_6 [i_12]);
        var_56 *= ((((max((1 / 1147846976), 10))) ? ((((arr_8 [i_12] [i_12]) && (arr_8 [i_12] [i_12])))) : (((min(1, var_3))))));
    }
    #pragma endscop
}
