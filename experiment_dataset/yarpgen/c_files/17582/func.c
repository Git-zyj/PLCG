/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17582
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) >= (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))))))));
    var_11 += ((/* implicit */unsigned char) var_3);
    var_12 -= (+(((/* implicit */int) var_9)));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) /* same iter space */
        {
            var_13 |= ((/* implicit */long long int) ((int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)0)), (arr_2 [i_0] [i_1 - 2] [i_1])))) - (((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (short)255)))))));
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 2] [i_0])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_1 - 1] [i_1])) : (var_6))) >= (((/* implicit */int) ((650923371) > (((/* implicit */int) arr_0 [i_0 - 1] [20ULL])))))));
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) - (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) ((unsigned char) var_1)))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */signed char) ((unsigned char) var_7));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 1; i_5 < 23; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [i_0] [i_2] [i_3] [i_3] [i_3] [i_4] [i_5]))));
                        arr_18 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((-1593130270) + (2147483647))) >> (((((/* implicit */int) arr_15 [i_5] [i_5] [i_5 + 1] [i_5] [i_5] [i_3] [i_2 - 2])) - (99)))));
                    }
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
                    {
                        var_16 ^= var_8;
                        arr_22 [i_6] [i_6] [i_4] [i_3] [i_2] [i_0] = ((/* implicit */int) (+(var_5)));
                        arr_23 [i_0] [i_2 + 1] [i_3] [i_3] [i_4] [i_6] [i_6] = ((/* implicit */short) var_2);
                    }
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                    {
                        var_17 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0 - 1]))));
                        arr_26 [i_0] [i_0] [i_2] [i_3] [i_4] [i_7] |= ((/* implicit */long long int) ((((arr_17 [i_4] [i_2 - 2] [i_0] [i_0 + 1] [i_0 + 1]) + (2147483647))) >> (((var_8) - (3431848128948203763LL)))));
                        var_18 -= ((((/* implicit */_Bool) 7)) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (short)25266)));
                    }
                    var_19 ^= ((/* implicit */_Bool) var_7);
                    arr_27 [i_4] [i_3] [i_2] [i_0] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 - 1] [i_2 - 1]))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) arr_8 [i_2 - 1]);
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */int) (_Bool)0))))) ? (var_8) : (((/* implicit */long long int) ((var_6) | (((/* implicit */int) (unsigned char)152)))))));
                }
                var_22 |= ((/* implicit */_Bool) arr_8 [i_0 - 2]);
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_2 - 2] [i_2] [(short)13] [i_2] [i_3] [i_2 - 2] [i_0 + 1])) > (((/* implicit */int) arr_14 [i_2 - 2] [i_2] [i_3] [i_0] [i_0 + 1] [i_3] [i_0 - 2]))));
                var_24 = (((_Bool)1) ? (-2475801687515920865LL) : (((/* implicit */long long int) ((/* implicit */int) (short)511))));
                var_25 += ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)90)) ? (var_8) : (((/* implicit */long long int) 3607421495U)))) > ((+((-9223372036854775807LL - 1LL))))));
            }
            for (int i_9 = 2; i_9 < 22; i_9 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_10 = 3; i_10 < 21; i_10 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) ((unsigned char) var_3));
                    var_27 = ((/* implicit */unsigned char) 6549717991808230819LL);
                    arr_39 [i_0] [i_2] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_3))) ? (((/* implicit */int) (unsigned short)43159)) : (((/* implicit */int) (short)9891))));
                }
                var_28 = ((/* implicit */short) (-(((/* implicit */int) arr_28 [i_0 - 1] [i_2 - 1] [i_0 - 1] [i_9] [i_9 - 1] [i_9 - 1]))));
                var_29 = ((/* implicit */unsigned int) ((((arr_21 [i_0] [i_2] [5] [i_2] [i_2 - 1] [(_Bool)0]) + (2147483647))) >> (((((((/* implicit */int) (short)-1)) + (((/* implicit */int) arr_16 [i_9] [i_2 - 2] [i_2 + 1] [i_0] [i_0])))) - (170)))));
            }
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                arr_43 [i_11] = ((/* implicit */unsigned int) arr_11 [i_0] [i_2] [i_2] [i_11] [i_11] [i_11]);
                arr_44 [i_2] [i_2] [i_2] [i_2] &= ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (var_0))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)58)) : (arr_35 [i_11] [i_11] [i_11] [i_11]))) : (-1440816251));
            }
            for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                var_30 = ((/* implicit */_Bool) 12536856332741355355ULL);
                var_31 |= ((/* implicit */short) ((((/* implicit */int) (short)30096)) > (((/* implicit */int) (unsigned char)7))));
                var_32 = ((/* implicit */unsigned char) 161010142U);
            }
            var_33 &= ((/* implicit */unsigned short) -9223372036854775791LL);
        }
        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 4) 
        {
            var_34 = var_9;
            var_35 = min((((/* implicit */int) arr_29 [i_0 - 2] [i_13] [(unsigned char)23] [16] [i_0 - 2])), ((+(((((/* implicit */_Bool) 78599839)) ? (145772396) : (((/* implicit */int) (unsigned char)255)))))));
            arr_52 [i_0 - 1] [i_0 - 1] [i_13] = (unsigned char)254;
        }
        /* LoopSeq 1 */
        for (int i_14 = 1; i_14 < 22; i_14 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_15 = 2; i_15 < 20; i_15 += 1) 
            {
                var_36 = ((/* implicit */unsigned char) ((arr_56 [(unsigned short)11]) >> (((((/* implicit */int) arr_0 [i_0] [(unsigned short)17])) - (144)))));
                var_37 = ((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1)));
            }
            arr_58 [i_0 - 2] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) (short)20999)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115))) : (-1LL)));
            var_38 = ((/* implicit */short) (unsigned char)234);
        }
        arr_59 [i_0 - 1] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) (+(127)))) + (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_7)) : (var_0))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1933086717)) ? (-3) : (602824673))))));
        arr_60 [8LL] &= ((/* implicit */_Bool) 963367408376826412ULL);
    }
}
