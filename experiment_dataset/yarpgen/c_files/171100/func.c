/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171100
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) 16065009580686734751ULL);
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_1 [i_0 - 2] [i_0 - 1]))));
                    arr_8 [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned short) ((2381734493022816878ULL) + (2381734493022816878ULL)));
                    var_17 |= ((/* implicit */int) (((-(var_10))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_7 [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                }
                for (long long int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_3] |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((1069547520U), (2564239291U)))) ? (((/* implicit */unsigned int) ((arr_6 [i_0] [i_1]) ? (arr_5 [i_0] [i_0 + 2] [i_1] [i_3]) : (((/* implicit */int) arr_10 [i_0] [i_3]))))) : (arr_7 [i_3]))), (((/* implicit */unsigned int) 797362786))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_1))));
                        arr_14 [i_1] [i_1] [i_1] |= arr_5 [i_0] [i_1] [i_3] [i_4];
                        arr_15 [i_0] [i_3] |= ((/* implicit */unsigned char) ((max((arr_10 [i_0 + 2] [i_0 - 2]), (arr_0 [i_0 - 1]))) ? (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_3] [i_4] [i_4]))) < (4247723154U))) ? (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 1])))) : ((~(((/* implicit */int) arr_13 [6ULL] [i_1] [i_1] [i_3] [i_4] [i_4]))))))) : (var_4)));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        var_19 ^= ((/* implicit */unsigned long long int) ((arr_5 [i_5] [(short)21] [i_5 - 1] [i_5]) ^ (((/* implicit */int) arr_3 [i_0 + 3] [i_5 + 2] [i_5 + 1]))));
                        arr_18 [i_1] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [19] [i_0] [19] [i_0 + 2] [i_5 + 2] [i_5])) ? (((((/* implicit */_Bool) -8317448049579831012LL)) ? (((/* implicit */long long int) var_1)) : (-4443797465459037114LL))) : (((/* implicit */long long int) ((var_11) >> (((/* implicit */int) arr_4 [i_0 - 1])))))));
                        arr_19 [i_0] [i_1] [i_1] [i_3] [i_3] [i_5 + 2] = ((/* implicit */unsigned long long int) var_13);
                        var_20 ^= ((/* implicit */short) ((((/* implicit */int) arr_12 [i_0 + 3] [i_5 + 1] [i_5] [i_5] [i_5 + 1] [i_5])) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [10U] [i_1] [i_1] [i_1] [i_1] [i_1]))) > (var_7))))));
                        var_21 = ((/* implicit */unsigned short) ((((var_0) != (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_3] [i_5])))) ? (((/* implicit */unsigned int) var_1)) : (var_11)));
                    }
                    var_22 = ((/* implicit */unsigned long long int) (unsigned char)128);
                }
                for (long long int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0] [i_6] [i_0 + 1] [i_6] [i_6])) ? (((/* implicit */int) arr_13 [i_6] [i_1] [i_1] [i_1] [6U] [i_0])) : (2097151)))) - ((((+(1364400259U))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)36)))))));
                    var_24 |= arr_12 [i_0 - 1] [i_0 - 1] [i_6] [i_6] [i_6] [(unsigned short)7];
                    arr_24 [i_0] [i_1] [i_6] = ((/* implicit */int) ((unsigned short) arr_4 [i_0]));
                }
                arr_25 [i_1] = ((/* implicit */unsigned char) (+(((arr_6 [i_0 + 3] [i_0 + 1]) ? (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 1])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 3]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        {
                            arr_36 [i_7] [i_8] [i_9] [i_9] [i_10] |= ((/* implicit */unsigned long long int) var_1);
                            arr_37 [i_7] [i_7] [17U] [i_9] [i_7] = ((/* implicit */int) arr_32 [i_10] [i_8]);
                            var_25 = var_9;
                        }
                    } 
                } 
                arr_38 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_12 [i_7] [i_8] [i_8] [i_7] [i_8] [i_8])), (((((/* implicit */_Bool) arr_23 [i_7] [i_7] [19LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_7] [i_7] [i_8] [18] [i_7] [i_7]))) : (arr_7 [i_7])))))) | (((((var_8) << (((((/* implicit */int) (unsigned char)239)) - (239))))) & (min((arr_29 [i_7]), (((/* implicit */long long int) arr_3 [i_7] [7] [i_8]))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) var_14)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_8) : (((/* implicit */long long int) 4294967295U))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 3822520530U)) : (var_0)))) ? (((/* implicit */unsigned long long int) var_11)) : (((unsigned long long int) 2280038148U))))));
    /* LoopSeq 3 */
    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
    {
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) arr_26 [i_11] [3]))));
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                {
                    arr_46 [i_11] [i_11] [i_12] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_11)) > ((((-(var_0))) >> (((((/* implicit */int) var_3)) - (79)))))));
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_11))));
                    var_29 |= ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_13] [(unsigned char)11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_34 [i_11] [i_11]))))))) + ((-(((/* implicit */int) arr_33 [i_11] [i_11])))));
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) arr_12 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))));
                }
            } 
        } 
        arr_47 [i_11] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_11] [i_11])) && (((/* implicit */_Bool) var_6))))), (min((((/* implicit */long long int) (-(1162947922)))), (((((/* implicit */_Bool) 16ULL)) ? (var_2) : (var_4)))))));
        arr_48 [i_11] = ((/* implicit */short) var_6);
    }
    for (long long int i_14 = 0; i_14 < 11; i_14 += 4) 
    {
        arr_51 [i_14] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_20 [i_14] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) arr_29 [i_14])) : (arr_20 [i_14] [i_14] [i_14]))), (((/* implicit */unsigned long long int) (signed char)-23))));
        arr_52 [i_14] = ((/* implicit */unsigned long long int) (-(max((var_11), (((/* implicit */unsigned int) arr_6 [i_14] [i_14]))))));
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 15; i_15 += 1) 
    {
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11)))))));
        arr_56 [i_15] [i_15] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) var_7)) == (var_6))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_15] [i_15]))) : (((((/* implicit */_Bool) 197942211)) ? (((/* implicit */unsigned long long int) var_13)) : (18446744073709551615ULL)))));
    }
}
