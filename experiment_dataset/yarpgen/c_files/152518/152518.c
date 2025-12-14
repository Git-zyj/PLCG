/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_10 = ((-14754 ? var_1 : (((~(~22))))));
        arr_2 [4] = ((-((~((var_0 ? -22 : var_2))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_11 = var_3;
                        arr_9 [i_0] [i_1] [i_2] [10] [i_3] = ((var_5 ? (arr_1 [i_3]) : ((((min(22, var_8))) & var_7))));
                        var_12 = arr_0 [i_0];

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_13 &= ((((((var_3 | (arr_8 [i_4] [i_3] [i_2] [i_1] [i_0]))) != ((min((arr_8 [10] [16] [i_2] [i_2] [i_4]), var_5))))) ? ((((((arr_11 [i_0] [i_1] [i_2] [4] [i_4]) ? (arr_0 [i_3]) : var_0))) ? 22 : (arr_3 [1] [i_3] [i_0]))) : 0));
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] [i_1] = (max((max(-1431981032, -1962910134)), (var_3 <= 28)));
                            var_14 = (!-18);
                            var_15 = ((((((max((arr_3 [i_1] [i_3] [i_4]), var_1)) / 16835270120695724286))) ? (min((arr_3 [i_0] [i_0] [i_0]), (-32 && var_1))) : (55038 % -25155)));
                            var_16 += (arr_11 [i_0] [2] [i_2] [12] [2]);
                        }
                        var_17 = ((((var_2 ? 23 : ((var_0 ? 24 : 27)))) >> (((min(55020, 206215268)) - 55015))));
                    }
                }
            }
        }
        arr_13 [i_0] [i_0] = (((min(-25, (min(var_1, 24)))) << ((((((max(var_6, -51))) % (arr_1 [0]))) - 159))));
        arr_14 [i_0] [i_0] = ((!((((max(1921300988, var_7)) & var_8)))));
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_18 = (max(27, (min(((max(var_6, 1))), -var_6))));

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_19 = ((26 ? 37 : -25));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                var_20 = (max(var_20, ((((1 || var_9) ? ((((arr_17 [i_5]) && (arr_20 [i_5] [i_5])))) : (0 && -1653141740))))));
                var_21 = (max(var_21, (arr_16 [19] [i_5])));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                arr_29 [i_5] [i_5] [i_8] [14] = 10502;

                /* vectorizable */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    arr_34 [i_5] [i_8] [i_8] = ((~(((arr_23 [i_5] [i_6] [i_5] [i_9]) ? var_0 : 881240538))));
                    var_22 = (((-(arr_20 [i_5] [i_8]))));
                }
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    var_23 = (max(4005811174, -28));
                    arr_37 [5] [1] [i_10] [1] [i_6] [10] = var_3;
                }
                for (int i_11 = 1; i_11 < 20;i_11 += 1)
                {
                    var_24 &= -22;
                    arr_40 [i_5] [i_6] [i_8] [i_11 - 1] = (((10478 ? (((!(arr_25 [i_5] [i_8] [16])))) : 22)));
                    var_25 = 32768;
                    var_26 -= ((max(22, var_8)));
                }
            }
            /* vectorizable */
            for (int i_12 = 3; i_12 < 20;i_12 += 1)
            {
                var_27 *= (arr_26 [i_5] [i_6] [i_5]);
                var_28 = 1047166471;
                var_29 += ((10481 ? (((var_9 << (var_3 - 869270685)))) : var_2));
            }
            for (int i_13 = 0; i_13 < 23;i_13 += 1)
            {
                var_30 = (((((~((max(57505, 5191)))))) ? (~0) : (max((((arr_39 [i_5] [i_6] [i_13]) % var_7)), (arr_39 [i_5] [i_6] [i_13])))));
                var_31 = (((((max(13755540330898513652, 2456016979)) % (((var_5 ? var_2 : var_3))))) < (arr_41 [7] [22])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 15;i_15 += 1)
        {
            {
                arr_53 [i_14] [i_15] = (min(-20954, var_9));
                var_32 += (arr_16 [i_14] [i_14]);
                var_33 = var_9;
            }
        }
    }
    var_34 &= ((var_1 % (((((max(2141812852, 180))) ? var_5 : -2)))));
    #pragma endscop
}
