/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = (arr_3 [7]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 = ((((((((arr_8 [i_0] [i_1] [i_0]) ? 115 : 115))) ? (((141 ? (arr_2 [0] [5]) : (arr_0 [i_2])))) : ((var_8 ? (arr_7 [i_0] [i_0] [i_1] [i_0]) : 909040492)))) >> (((arr_4 [i_0] [i_1]) ? (arr_8 [i_0] [i_1] [i_1]) : (min(var_13, (arr_0 [i_4])))))));
                                var_20 = 909040492;
                            }
                        }
                    }
                    var_21 ^= 7836428239260356337;
                    var_22 &= (arr_0 [i_0]);
                }
            }
        }
    }
    var_23 = ((-1887785790 ? 3385926800 : 2));
    var_24 = var_10;

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_25 = (arr_13 [12]);

        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            var_26 *= (!((!(arr_0 [i_6]))));
            var_27 = 19828;
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            var_28 = 909040492;
            var_29 = (+(((arr_10 [9] [9] [i_7] [9]) ? (arr_0 [i_7]) : ((min(2, (arr_8 [i_7] [i_5] [5])))))));
        }
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    {
                        var_30 = 141;
                        var_31 = (min(4294967295, ((((arr_21 [i_8]) != 65530)))));
                        var_32 = min((arr_30 [i_8]), (arr_30 [i_9]));
                    }
                }
            }
        }
        var_33 = (min((min((arr_28 [i_8] [i_8] [i_8] [8]), -490824490)), ((233 + (arr_28 [i_8] [i_8] [i_8] [9])))));
        var_34 = 3385926804;

        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            var_35 = (min((min((arr_26 [i_12] [i_12] [i_8]), (((18446744073709551615 || (arr_23 [i_8])))))), (min((min(1, 4056834211)), ((min(4080, 45723)))))));
            var_36 = (~909040484);
        }
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            arr_38 [i_13] = (((((0 ? (arr_21 [i_13]) : (min((arr_25 [2] [4]), (arr_25 [i_8] [16])))))) & ((536870400 ? (((arr_23 [i_8]) | var_1)) : 28))));
            var_37 = 16;
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 17;i_14 += 1)
    {
        var_38 = ((!(arr_36 [i_14] [12] [i_14])));
        var_39 = ((((var_17 ? 32 : 28)) ^ (var_14 * 45708)));
    }
    for (int i_15 = 0; i_15 < 10;i_15 += 1)
    {
        arr_45 [i_15] = (((arr_26 [i_15] [i_15] [i_15]) >= ((((min(1, 16384))) ? (arr_3 [9]) : ((0 ? (arr_3 [i_15]) : 1786642797))))));
        var_40 = (((((((min(3856631856, (arr_24 [i_15] [i_15])))) * 0))) ? ((((min(var_9, 73)) < (arr_24 [i_15] [i_15])))) : ((-(arr_8 [i_15] [i_15] [i_15])))));
        var_41 = ((((((arr_30 [i_15]) ? (arr_30 [13]) : (arr_30 [i_15])))) ? (((((~49142) && (arr_6 [4] [1] [0]))))) : (6 ^ 17538044757449105696)));
    }
    #pragma endscop
}
