/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((max((max(0, 0)), (arr_0 [0] [i_0]))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = (min(((224 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_1] [i_0]))), ((var_4 ? (arr_0 [i_0] [i_1]) : var_0))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_13 [i_1] [i_4] [i_3] [i_2] [i_0] [i_1] = 1609907620;
                            var_15 = (((arr_5 [i_2] [i_1] [i_0]) ? -5 : 7696581394432));
                        }
                    }
                }
                var_16 = ((-(-1979455090 & 12627393215854947497)));
            }
            /* vectorizable */
            for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
            {
                arr_18 [i_1] [i_1] [i_1] [i_5 - 1] = (-8755649817931181253 != 222);
                var_17 *= var_12;
                var_18 = (arr_16 [i_1] [i_1]);
            }
            for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_19 = ((-5872874371118147733 ? 0 : 14320526214080838276));
                            var_20 = (max(var_20, (((min((arr_22 [i_1] [i_1] [i_1]), ((var_8 ? -2115065430601799792 : 0))))))));
                        }
                    }
                }
                arr_28 [i_1] [i_1] = (((var_1 && -2115065430601799792) ? (((min((-32767 - 1), var_0)))) : (min(((-4 ? 8928441929184719014 : 1)), (((14348 ? 12288 : 512)))))));
                var_21 = (min((arr_19 [i_1] [i_6 - 1] [i_6] [i_6 + 1]), (!65535)));

                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_22 = (min(((max(1, (1609907628 > -1979455081)))), (((arr_5 [i_6 + 1] [i_6 + 1] [i_6 - 1]) ? 57923 : 57923))));
                    arr_33 [i_1] [i_6] [i_0] [i_1] = (57914 >= var_12);
                }
            }
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {

                /* vectorizable */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    arr_42 [i_1] = ((var_8 ? var_3 : 19993));
                    var_23 = var_12;
                    arr_43 [i_0] [i_0] [i_1] [14] [i_1] [8] |= (((((var_13 ? var_4 : -17799))) * ((var_5 << (((-2115065430601799792 + 2115065430601799844) - 51))))));
                }
                var_24 = (min(var_24, (((4095 ? (max((arr_12 [i_0] [i_0] [i_0] [i_1] [7]), 31851)) : (arr_37 [8] [i_1]))))));
            }
        }
        /* vectorizable */
        for (int i_12 = 1; i_12 < 12;i_12 += 1)
        {
            var_25 = (29 < 24330);
            var_26 = -1;
            var_27 = arr_0 [i_0] [i_12];
        }
        var_28 = (min(var_28, (((((min(var_0, var_11))) >> (((((var_6 ? 5457111909876485494 : -32001))) - 5457111909876485492)))))));
        var_29 = (~65527);
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
    {
        arr_49 [i_13] = (155 >> 1);
        var_30 = (min(var_30, (((((1 ^ var_7) ? (arr_48 [i_13]) : (max(-1355724709, var_8))))))));
        arr_50 [i_13] = 1;
        var_31 = (max(57907, (arr_47 [i_13])));
        arr_51 [i_13] = (((155 * -2802) ? (min((arr_48 [i_13]), var_13)) : ((12837 - (arr_48 [i_13])))));
    }
    for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
    {
        var_32 ^= (22832 >= -1);
        arr_56 [i_14] [1] = ((((((32767 >> (var_3 + 7482312543854873251))) >> (((min(3863169480751911404, (arr_47 [i_14]))) + 6716241970351741219)))) >> (((((max(-32756, -1979455090))) >= (arr_54 [i_14] [i_14]))))));
        arr_57 [i_14] = (64313 << 0);
    }
    var_33 = (max(var_33, (((((((max(-1979455112, var_6)) - var_13))) >= var_9)))));
    var_34 = var_10;
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 15;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                {
                    var_35 = (min(((((min(var_8, var_10)) % (arr_16 [i_16] [i_16])))), ((((227 ? 20564 : 18446744073709551615)) * (max(5375064323726943739, 0))))));
                    arr_67 [i_15] [i_15] = (arr_1 [i_17]);
                }
            }
        }
    }
    var_36 = var_0;
    #pragma endscop
}
