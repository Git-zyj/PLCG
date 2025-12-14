/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183282
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_2] [i_2 + 3] [i_3] = ((/* implicit */int) var_8);
                            var_20 ^= var_10;
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_4 = 3; i_4 < 17; i_4 += 1) 
                {
                    var_21 = ((((/* implicit */_Bool) (+(18446744073709551598ULL)))) ? (((/* implicit */int) arr_10 [i_0] [i_1 + 2])) : (((/* implicit */int) var_15)));
                    arr_12 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) var_10);
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    arr_15 [i_0] [i_1] [i_0] [i_5] = (~(var_1));
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 2; i_6 < 19; i_6 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] [(short)15] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) 1137435076U));
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = (~(arr_6 [i_0 - 3] [i_1 - 1]));
                    }
                    for (unsigned short i_7 = 2; i_7 < 19; i_7 += 1) /* same iter space */
                    {
                        arr_22 [9LL] [i_0] [i_5] [i_5] [i_0] = (((+(((/* implicit */int) (unsigned char)165)))) * (((/* implicit */int) var_0)));
                        arr_23 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = ((arr_21 [i_0] [i_7 - 1] [i_5] [i_1 - 3] [i_0]) * (var_1));
                    }
                    for (unsigned short i_8 = 2; i_8 < 19; i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_5] [i_5] |= ((/* implicit */signed char) var_18);
                        var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 + 1] [i_5] [i_0 + 2]))) : (((-1LL) * (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_1 + 3])))))));
                        arr_29 [i_0] = ((/* implicit */short) ((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    }
                    var_23 = ((/* implicit */unsigned char) ((4671302309487218756LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                    /* LoopSeq 4 */
                    for (signed char i_9 = 3; i_9 < 18; i_9 += 4) 
                    {
                        arr_33 [i_0] [i_5] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 + 3])) ? (var_3) : (((/* implicit */int) arr_0 [i_1 - 2]))));
                        var_24 = ((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) var_17)))));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_20 [i_9 + 1] [(short)6] [i_9 - 3] [i_9] [i_9] [i_9 - 3])))))));
                    }
                    for (short i_10 = 1; i_10 < 17; i_10 += 4) 
                    {
                        var_26 = ((938707385) * (((((/* implicit */int) arr_14 [i_0])) * (((/* implicit */int) var_15)))));
                        arr_36 [i_0 + 3] [i_0] = ((/* implicit */short) (!(arr_10 [i_0] [i_1 + 4])));
                        var_27 ^= ((/* implicit */unsigned short) (short)32762);
                    }
                    for (unsigned char i_11 = 2; i_11 < 16; i_11 += 4) 
                    {
                        arr_40 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (signed char)-1))));
                        var_28 = ((/* implicit */_Bool) max((var_28), (arr_5 [i_11] [i_11] [i_5] [i_1])));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4530736069738701580ULL)) ? (-1029559110) : (-105881319)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) * (var_1)))))));
                    }
                    for (long long int i_12 = 2; i_12 < 18; i_12 += 1) 
                    {
                        arr_43 [i_0] [(short)18] [18] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_1 - 3] [i_1 - 2] [i_0 - 3])) && (((/* implicit */_Bool) arr_41 [i_1 - 3] [i_0] [i_0 - 3]))));
                        arr_44 [i_0] [i_5] [i_5] [i_0] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-4)) ? (134217727ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5])) / (var_12))))));
                    }
                }
                var_30 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_13 = 3; i_13 < 21; i_13 += 1) 
    {
        for (signed char i_14 = 0; i_14 < 22; i_14 += 4) 
        {
            for (int i_15 = 0; i_15 < 22; i_15 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 1; i_16 < 18; i_16 += 1) 
                    {
                        var_31 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)152)) && (((/* implicit */_Bool) (unsigned short)41176))));
                        /* LoopSeq 1 */
                        for (long long int i_17 = 0; i_17 < 22; i_17 += 1) 
                        {
                            arr_59 [i_13] [(unsigned short)16] [i_17] [i_16 + 2] [(unsigned short)1] [i_17] [i_14] = var_5;
                            arr_60 [5] [i_14] [7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_54 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1]))) * (((((/* implicit */_Bool) arr_57 [i_16] [i_16 + 4] [i_16] [i_16] [8ULL] [i_16])) ? (((/* implicit */long long int) 3U)) : (arr_57 [i_16] [i_16 + 1] [(short)13] [i_16] [i_16] [i_17])))));
                        }
                        var_32 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_49 [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_13 + 1] [i_16 + 2]))) : (((((/* implicit */long long int) var_14)) / (4602678819172646912LL))))) * (((/* implicit */long long int) 1750727385))));
                    }
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) var_5))))))));
                    arr_61 [i_13] [i_15] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned char)104)), ((+(((((/* implicit */_Bool) arr_58 [i_14] [(unsigned short)4] [i_15] [i_14])) ? (((/* implicit */unsigned long long int) 9223372036854775801LL)) : (13103200618713071520ULL)))))));
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 22; i_18 += 1) 
                    {
                        for (short i_19 = 0; i_19 < 22; i_19 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) -1674447710))));
                                var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) -1059035741)) && (((/* implicit */_Bool) (short)28360))))) * ((~(((((/* implicit */_Bool) 2047U)) ? (((/* implicit */int) arr_48 [(unsigned short)3] [i_14] [(unsigned short)3])) : (((/* implicit */int) (short)30021))))))));
                                arr_68 [i_19] [i_18] [i_18] [i_13] [i_18] [i_13] = ((/* implicit */short) ((var_15) || (((arr_54 [i_13] [i_13 + 1] [i_13 + 1] [i_18]) || (arr_54 [i_13] [i_13 - 1] [i_13 - 1] [i_18])))));
                                var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_67 [i_13] [i_14] [i_19] [i_13] [i_13])))), ((-(((/* implicit */int) var_9))))))) * (max((((8318800543645120038ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64740))))), (((/* implicit */unsigned long long int) arr_63 [i_14])))))))));
                                var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_13 - 3] [i_14])) ? (arr_64 [i_13 - 3] [i_14]) : (arr_64 [i_13 - 3] [i_19])))) ? (((arr_64 [i_13 - 3] [i_14]) / (var_3))) : (((((/* implicit */_Bool) arr_64 [i_13 - 3] [i_14])) ? (arr_64 [i_13 - 3] [i_14]) : (-516707380))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_16))))))));
    var_39 -= ((/* implicit */long long int) var_9);
}
