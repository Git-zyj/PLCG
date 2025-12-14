/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107320
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
    var_14 = ((/* implicit */short) min((((int) ((((/* implicit */int) (short)2927)) * (((/* implicit */int) (unsigned char)4))))), (((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (!((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) 17232336737642112952ULL))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_16 = ((/* implicit */int) min((var_16), ((~(((/* implicit */int) (unsigned char)21))))));
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((unsigned char) -1754105281)))));
            /* LoopSeq 4 */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 1) 
                {
                    var_18 = ((/* implicit */short) ((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    arr_13 [i_1] [i_1] [i_3] [i_4 - 1] = (-(((/* implicit */int) (unsigned char)232)));
                    arr_14 [i_1] = (!(var_7));
                    var_19 ^= ((((/* implicit */int) var_7)) * (((/* implicit */int) ((arr_0 [i_2] [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (1641346295) : (var_13)));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 1) 
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_6);
                        var_21 |= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_18 [i_1] [i_2] [i_3] [i_2] [i_5] [i_6] [i_6 + 1])) << (((((/* implicit */int) arr_1 [i_2])) - (68)))))));
                        var_22 = (i_1 % 2 == 0) ? (((18446744073709551615ULL) << (((((/* implicit */int) arr_10 [i_6 - 1] [i_1] [i_5])) + (12228))))) : (((18446744073709551615ULL) << (((((((/* implicit */int) arr_10 [i_6 - 1] [i_1] [i_5])) + (12228))) - (28747)))));
                        var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_6 + 1] [(unsigned char)10] [12] [i_1] [i_6 + 1] [(unsigned char)10] [i_6 + 1]))));
                    }
                    for (unsigned char i_7 = 2; i_7 < 12; i_7 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)71)) | (((/* implicit */int) (short)-1))));
                        arr_24 [(_Bool)1] [i_2] [(_Bool)1] [i_1] [i_7 - 1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (short)-10821))));
                    }
                    for (unsigned char i_8 = 2; i_8 < 12; i_8 += 2) /* same iter space */
                    {
                        var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_8 + 1] [i_8 + 2] [i_8] [i_8] [i_8 - 2])) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))) : (((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(short)8] [i_2] [i_3] [i_2] [i_1]))) : (var_6)))));
                        var_26 *= ((/* implicit */unsigned char) var_2);
                    }
                    for (int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        var_27 = ((/* implicit */int) var_2);
                        var_28 = ((/* implicit */_Bool) (short)-32532);
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (short)21544)) >= (((/* implicit */int) (short)6271))))))))));
                        var_30 *= ((/* implicit */unsigned long long int) (!(arr_23 [10] [10] [i_3] [10] [i_2])));
                    }
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3] [(unsigned char)6] [i_1]))));
                }
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    for (short i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        {
                            var_32 *= ((/* implicit */short) (_Bool)1);
                            arr_37 [i_1] [i_2] [i_1] [i_1] [i_11] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (var_11));
                        }
                    } 
                } 
            }
            for (int i_12 = 3; i_12 < 13; i_12 += 3) 
            {
                var_33 *= ((/* implicit */_Bool) (short)-3152);
                var_34 = ((/* implicit */_Bool) max((var_34), (((3169927732132452076ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) (short)26315)))))));
                /* LoopSeq 1 */
                for (int i_13 = 3; i_13 < 10; i_13 += 4) 
                {
                    var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (-((+(((/* implicit */int) (unsigned char)181)))))))));
                    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) == (var_0)))))))));
                    var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) var_1))));
                }
            }
            for (unsigned char i_14 = 0; i_14 < 14; i_14 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_15 = 2; i_15 < 13; i_15 += 4) 
                {
                    var_39 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_15 + 1] [i_15])) ? (((arr_36 [i_1] [i_2] [i_1] [i_14]) ? (((/* implicit */int) (short)-10893)) : (((/* implicit */int) (short)28437)))) : (((((/* implicit */_Bool) 4977577908004429366ULL)) ? (((/* implicit */int) arr_15 [i_14])) : (((/* implicit */int) var_3))))));
                    var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-8909)) >= (((/* implicit */int) arr_28 [i_2] [i_1] [i_14] [i_15 + 1] [i_2]))));
                }
                arr_48 [i_1] [i_1] [i_1] [i_1] = ((var_13) == (((/* implicit */int) (short)24068)));
            }
            for (unsigned char i_16 = 0; i_16 < 14; i_16 += 4) /* same iter space */
            {
                arr_51 [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((arr_36 [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */int) arr_11 [i_1] [i_16] [i_16] [i_2] [i_1])) : (((/* implicit */int) arr_43 [i_16] [i_16])))) : (((/* implicit */int) (short)24068))));
                var_41 *= ((/* implicit */_Bool) (unsigned char)63);
            }
        }
        var_42 *= ((/* implicit */short) var_3);
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 14; i_17 += 1) 
        {
            for (unsigned char i_18 = 2; i_18 < 11; i_18 += 2) 
            {
                {
                    var_43 = (short)16384;
                    var_44 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_18] [i_17] [i_17] [i_1] [i_1] [i_18]))));
                    var_45 = ((/* implicit */_Bool) min((var_45), (((/* implicit */_Bool) ((((/* implicit */int) (short)24043)) | (422495719))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 3) 
                    {
                        arr_60 [i_1] [(short)9] [i_17] [(short)9] [i_1] = ((/* implicit */unsigned char) arr_26 [i_1] [i_17] [i_1]);
                        arr_61 [i_1] [i_17] [i_18 + 3] [i_1] = ((/* implicit */unsigned char) arr_17 [i_1] [i_1] [i_1] [i_1] [i_19]);
                        var_46 = ((/* implicit */short) var_10);
                    }
                }
            } 
        } 
    }
    var_47 = ((/* implicit */short) (!(var_8)));
}
