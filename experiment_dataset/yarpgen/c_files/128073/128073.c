/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (((~15831) ? ((((((arr_2 [i_0]) ? (arr_0 [i_0] [i_0]) : 15821))) ? (arr_2 [i_0]) : (50 ^ var_6))) : var_14));
        arr_4 [i_0] = (2147483647 || var_13);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_21 = ((((((49697 ? (arr_7 [i_1]) : -32)) * ((min(var_2, var_10)))))) ? (((arr_6 [i_1] [i_1]) / (arr_6 [i_1] [i_1]))) : (arr_7 [i_1]));
        var_22 = (max(var_22, ((~(((~var_6) ? ((max(49705, 122))) : ((max((arr_5 [i_1]), 49705)))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((((((arr_8 [i_2]) >= (arr_8 [i_2])))) <= (!49704)));
        arr_11 [14] [16] = ((var_10 ? (arr_8 [i_2]) : (arr_8 [i_2])));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 3; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_23 = (((((((max((arr_7 [i_4 - 1]), 28431))) || 15824))) >> ((((min((arr_6 [i_4 - 3] [17]), var_14))) + 115))));
            var_24 = ((1738838970 ? 54 : 69));
            var_25 = 61933;
        }
        for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_26 = (((max(var_11, (arr_6 [i_5] [i_5 - 2])))));
            var_27 = (((~var_3) ? ((var_18 ? (-9 - 37104) : -1746799741)) : 1746799725));

            for (int i_6 = 3; i_6 < 17;i_6 += 1) /* same iter space */
            {
                var_28 *= (((49730 & 1048575) ? (~49675) : var_2));
                var_29 = ((((((-636544638 / 49699) ? (var_12 & var_6) : ((min(49705, (arr_14 [i_5]))))))) && (((var_3 ^ (arr_17 [i_5 - 2] [i_5 - 1]))))));
            }
            for (int i_7 = 3; i_7 < 17;i_7 += 1) /* same iter space */
            {
                var_30 = min(((var_9 << ((((-90 ? 61933 : -22)) - 61932)))), (((((max(-1048558, -29)) + 2147483647)) << (((max(379466126, (arr_7 [i_5]))) - 379466126)))));
                var_31 = (((((arr_17 [i_3] [i_5]) ? 32592 : (((arr_12 [13]) ? 40 : 5984)))) < ((28569 ? 57521 : (~var_10)))));
                arr_22 [i_3] [i_7] [i_7] [i_7] = (!1592568903);
            }
            var_32 = (((((31 ? 57344 : 2279)) * (7 / -2047601400))));
        }
        for (int i_8 = 3; i_8 < 18;i_8 += 1) /* same iter space */
        {
            arr_26 [i_3] [i_3] [i_8 - 1] = 1178039148;
            arr_27 [1] [i_8] = 1048538;
            arr_28 [18] [i_8 - 2] [i_3] = ((var_2 & (min((47 & 1048550), var_9))));
            arr_29 [i_3] [i_3] = ((max(((-76 ? -81 : var_2), (arr_9 [8] [4])))));
            var_33 = (max((((!(arr_6 [i_3] [i_8 - 3])))), (((arr_6 [i_8] [i_8 - 2]) ? 98 : 63844))));
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    arr_37 [i_10] [17] [i_3] = ((((min((min((arr_9 [i_9] [i_10]), (arr_5 [i_3]))), (arr_20 [i_9])))) || (((3602 ? 91 : var_9)))));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 17;i_12 += 1)
                        {
                            {
                                var_34 &= (arr_6 [10] [i_11]);
                                var_35 = ((((var_15 ? 3617 : (arr_39 [13] [i_9] [i_9] [i_11 - 1] [i_12 - 2] [i_11 + 2]))) < (arr_16 [i_3] [i_3])));
                            }
                        }
                    }
                    var_36 = (min(var_36, (((11300 ? (min(((max(53, -90))), var_6)) : ((min(65505, (arr_20 [i_3])))))))));
                }
            }
        }
        var_37 = (((((var_10 ? (arr_38 [i_3] [i_3] [i_3]) : -1))) ? (arr_25 [i_3]) : ((-var_18 ? var_14 : ((min((arr_24 [i_3] [i_3] [i_3]), var_19)))))));
        var_38 |= (~((~(arr_24 [i_3] [i_3] [i_3]))));
    }
    /* LoopNest 3 */
    for (int i_13 = 3; i_13 < 17;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 15;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                {
                    var_39 = (max(var_39, ((((((((max(43744, 28431))) >> (var_12 - 9022)))) ? (((arr_36 [i_14 + 3] [i_14 + 3] [i_14 + 3]) % ((max((arr_36 [5] [i_14] [i_14]), 8))))) : 15)))));
                    var_40 &= ((((((var_18 / var_15) ? 1998170543 : var_10))) ? var_19 : ((4026 ? var_16 : (min(-2147483642, var_18))))));
                    var_41 = -1048558;
                }
            }
        }
    }
    #pragma endscop
}
