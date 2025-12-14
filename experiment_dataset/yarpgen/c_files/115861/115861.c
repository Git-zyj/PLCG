/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_20 = var_18;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] = (max((((((var_1 < (arr_3 [i_0])))) >> (412141571 - 412141566))), (max((min(-412141572, 144)), ((var_10 ? -126 : 0))))));
            var_21 = (((127 == 9223372036854775807) < ((((max(16256, 0))) ? (arr_2 [i_1]) : -126))));
            var_22 -= 412141569;
            var_23 = min(((var_9 ? -412141567 : (arr_4 [i_0]))), (((!(arr_3 [i_0])))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_24 = 412141566;
            var_25 = (((arr_3 [i_0]) ? (((arr_7 [i_0] [i_0] [9]) ? (arr_6 [13]) : (arr_6 [1]))) : ((252 ? -127 : 24811))));
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                arr_13 [i_4] [3] [i_4] [7] = -751823767;
                var_26 &= -660911339;
                var_27 = (max(var_27, (((0 ? (arr_0 [i_0] [i_3 - 2]) : (arr_7 [i_3] [i_3 - 2] [i_3 + 1]))))));
            }
            var_28 = var_17;
            var_29 = 8622068298289496184;
        }
        var_30 = ((4 < ((((((var_10 ? (arr_8 [i_0] [0] [i_0]) : 0))) >= (max((arr_10 [i_0] [i_0]), var_3)))))));
        var_31 = (((arr_11 [i_0]) < 1));
        var_32 = 15;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_33 &= ((!(arr_12 [i_5])));
        var_34 = (204 ? var_14 : (arr_6 [i_5]));

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {

            for (int i_7 = 4; i_7 < 18;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_35 = 1999550263;
                            var_36 = -var_13;
                            var_37 = 706537065;
                        }
                    }
                }
                var_38 = (51 >= -660911335);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 16;i_11 += 1)
                    {
                        {
                            var_39 = ((~(((arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) % (arr_25 [i_11 + 2] [i_10] [i_10] [i_5])))));
                            arr_28 [i_10] = (~(((arr_7 [i_5] [i_5] [11]) ? (arr_10 [12] [i_5]) : var_0)));
                        }
                    }
                }

                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    var_40 = (((((-(arr_17 [i_12] [i_5] [i_5])))) ? 49 : (((!(arr_6 [i_5]))))));
                    var_41 = (min(var_41, 164));

                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        var_42 = ((8622068298289496184 << (((arr_17 [i_13] [i_7 - 1] [i_7 - 3]) - 8378308107438831582))));
                        var_43 = (660911339 ? 1 : (var_19 ^ var_7));
                    }
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        var_44 = ((var_6 ? (arr_29 [i_5] [i_6] [i_6] [i_6] [i_14]) : (arr_29 [i_7] [i_7] [i_7] [i_12] [i_14])));
                        var_45 = var_3;
                        var_46 = ((-14496 + 2147483647) >> (72 - 43));
                    }
                }
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    arr_40 [16] = (((~11924930240228777368) >= ((((arr_19 [i_5] [i_6] [i_5] [i_6]) ? (arr_20 [16] [16] [2] [1]) : 164)))));
                    var_47 |= var_1;
                }
            }
            var_48 = (((arr_19 [i_5] [i_6] [0] [i_6]) == (((25185 ? 1825599820 : 1)))));
            var_49 = -104;
            var_50 = (1 | 164);
        }
    }
    var_51 = ((((max(((min(var_6, 47564))), ((var_2 ? var_19 : var_4))))) ? (((max((-9223372036854775807 - 1), 248)) - (((min(var_13, 65521)))))) : -var_15));
    #pragma endscop
}
