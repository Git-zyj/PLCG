/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161456
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] [15ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) arr_0 [9U])))));
        arr_3 [(unsigned char)10] = ((/* implicit */short) ((signed char) ((arr_0 [12U]) <= (arr_0 [i_0]))));
    }
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            arr_10 [i_1] [(unsigned char)3] = ((/* implicit */unsigned char) arr_0 [i_1 + 1]);
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)36)))))) | (3647253768U)));
            var_21 = ((/* implicit */unsigned long long int) var_16);
            /* LoopSeq 2 */
            for (unsigned short i_3 = 2; i_3 < 14; i_3 += 1) 
            {
                var_22 &= ((/* implicit */unsigned char) ((12028792503141268241ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44853)))));
                arr_13 [i_1] [i_2 + 1] [i_2 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_2 + 1] [i_2 - 1])) ? (arr_7 [i_1 + 1] [i_2 - 1] [i_3 + 2]) : (arr_7 [i_1 + 1] [i_1 + 2] [(unsigned char)6])));
            }
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                arr_16 [i_1] [0LL] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1] [i_1]))));
                arr_17 [i_1] [(unsigned short)7] [16ULL] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)44853)) & (((/* implicit */int) var_4)))) & (((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1]))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [(unsigned short)2] [i_2 + 1] [(short)8])) ? (9LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)20682)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [(signed char)3])))))));
                arr_18 [i_4] [2U] [i_4] &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_2 + 1])))) || (((/* implicit */_Bool) arr_15 [i_1 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
            }
            arr_19 [(unsigned short)6] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) 4294967295U))));
        }
        for (long long int i_5 = 1; i_5 < 16; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 3) 
                {
                    for (unsigned int i_8 = 1; i_8 < 16; i_8 += 3) 
                    {
                        {
                            arr_29 [i_1 + 2] [i_1] [(unsigned char)1] [i_7 - 2] [i_8 - 1] [15U] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((0U) & (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_7 - 3] [7ULL] [(short)10] [i_7 + 1])))))));
                            arr_30 [12ULL] [i_1] [(unsigned char)7] [i_1] [8U] = ((/* implicit */short) min((min((4294967292U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) (unsigned short)22656)) : (((/* implicit */int) arr_20 [i_5 + 1] [i_6]))))))), (4294967291U)));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) min((((/* implicit */long long int) 4294967292U)), (-39LL)));
            }
            arr_31 [i_1] = ((/* implicit */long long int) (short)32767);
            arr_32 [8U] [10LL] |= (-(-7232693067546710330LL));
        }
        var_25 -= (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_4))))))) ? (arr_8 [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)126)))))));
    }
    for (short i_9 = 0; i_9 < 21; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
        {
            for (unsigned int i_11 = 3; i_11 < 20; i_11 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_12 = 1; i_12 < 19; i_12 += 3) 
                    {
                        var_26 &= ((/* implicit */unsigned short) min((var_7), (4294967293U)));
                        arr_45 [i_9] [i_10] [(unsigned char)18] [i_10] &= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 4294967285U)) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)94))))));
                    }
                    arr_46 [(short)3] [i_10] [i_9] [(unsigned short)11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_2) + (9223372036854775807LL))) << (((/* implicit */int) ((var_9) == (((/* implicit */long long int) var_8)))))))) || (((/* implicit */_Bool) (((+(-1187926957729743020LL))) % (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_9] [i_9] [(short)10] [i_9]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_13 = 2; i_13 < 18; i_13 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 4) 
                        {
                            var_27 -= ((/* implicit */unsigned int) ((((((/* implicit */long long int) var_19)) <= (9LL))) ? (((((/* implicit */_Bool) 9LL)) ? (((/* implicit */int) arr_37 [6U] [i_13 + 2])) : (((/* implicit */int) (unsigned char)223)))) : (((/* implicit */int) (unsigned char)223))));
                            arr_53 [11LL] [i_9] [16LL] [i_9] [7LL] = ((/* implicit */short) ((((/* implicit */long long int) 4294967292U)) | (var_2)));
                            var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_51 [i_10] [i_9] [i_11 - 2] [i_13 + 1] [(unsigned short)9] [i_13 + 1]))));
                            arr_54 [(_Bool)1] [i_9] [12ULL] [(short)2] [(signed char)15] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (-3725692047698172771LL)))));
                        }
                        for (short i_15 = 4; i_15 < 20; i_15 += 4) 
                        {
                            arr_59 [(unsigned char)10] [(unsigned char)3] [i_9] [i_13 + 1] [(unsigned char)9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [(unsigned short)18] [15LL])) ? (arr_48 [(unsigned char)7] [i_10] [i_9] [(unsigned char)13]) : (arr_48 [i_9] [i_10] [i_9] [i_15 - 3])))) ? (((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)45))) : (arr_51 [16U] [i_9] [i_11 - 3] [5LL] [i_15 - 2] [i_15 - 2]))) : (arr_51 [i_9] [i_9] [(unsigned char)15] [i_9] [19LL] [i_9]));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((-4245728733134880084LL) & (((/* implicit */long long int) 4294967270U)))))));
                            arr_60 [i_9] [i_9] [2ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)23064))));
                        }
                        arr_61 [8LL] [i_13] [(signed char)4] [(unsigned char)8] [i_13 - 2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_13])) ? (((/* implicit */int) arr_34 [i_13])) : (((/* implicit */int) arr_34 [i_10]))));
                    }
                    arr_62 [i_10] [i_9] [(short)16] [1U] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (arr_33 [i_9]))))))) < (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))) * (((((/* implicit */_Bool) arr_57 [i_9] [(unsigned short)17] [(unsigned char)17] [(unsigned char)15] [15ULL])) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [11ULL] [i_10])))))))));
                }
            } 
        } 
        var_30 -= ((5765162369572687844LL) / (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (short)32767)) == (((/* implicit */int) (_Bool)1))))), ((-(((/* implicit */int) arr_1 [i_9]))))))));
        var_31 = max(((-(((((/* implicit */_Bool) arr_42 [i_9] [i_9] [19LL])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_14))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_9] [(unsigned char)5] [15U] [(short)12] [i_9] [19LL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61703))) : (9223372036854775807LL)))) ? ((((_Bool)1) ? (((/* implicit */int) (short)-16)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_37 [(unsigned short)5] [3U]))))));
    }
    var_32 = ((/* implicit */unsigned long long int) var_16);
}
