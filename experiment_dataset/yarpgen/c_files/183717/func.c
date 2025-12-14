/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183717
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned char) (+((((-(((/* implicit */int) (short)9686)))) | ((+(((/* implicit */int) (short)9697))))))));
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 4; i_3 < 16; i_3 += 1) 
                {
                    arr_10 [i_0] = ((/* implicit */unsigned char) (_Bool)0);
                    arr_11 [i_0] [i_1] [i_1] [i_2] [i_0] [i_3 - 4] = ((/* implicit */short) arr_5 [i_0]);
                }
            }
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_15 = ((/* implicit */unsigned int) var_11);
                    var_16 ^= (!(((/* implicit */_Bool) ((8380416U) % (((/* implicit */unsigned int) ((/* implicit */int) ((5U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95)))))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [(unsigned short)6])) ? (((/* implicit */int) ((unsigned char) arr_14 [i_0] [i_1 + 1] [i_6] [i_6] [8LL]))) : (((/* implicit */int) (!((_Bool)1))))));
                        arr_20 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1))))) || ((!(((/* implicit */_Bool) arr_1 [i_1])))))))));
                        var_18 ^= ((/* implicit */unsigned int) max((((unsigned short) arr_15 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1])), (((/* implicit */unsigned short) (_Bool)1))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_0] [14LL] = ((/* implicit */unsigned int) var_10);
                        var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-117))));
                        arr_24 [(unsigned short)14] [(signed char)4] [i_4] |= ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned short)10] [(short)8] [i_4]))) != (arr_16 [i_0] [(short)2] [i_0] [(short)6]));
                    }
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        var_20 ^= ((/* implicit */unsigned char) arr_4 [i_1 + 1] [i_4] [i_5]);
                        arr_29 [i_8] [(signed char)11] [i_0] [9U] [i_0] = 3559125405013884907LL;
                        arr_30 [(short)5] [i_1] [i_4] [i_5] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1]))) * (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [(signed char)5] [i_1 - 1] [(_Bool)1] [(_Bool)1] [i_0]))) : (((((/* implicit */_Bool) arr_21 [i_0] [i_1 - 1] [i_4] [i_5] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-13LL))))));
                    }
                    for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        var_21 += ((/* implicit */short) max((((((/* implicit */int) ((signed char) arr_16 [i_0] [16LL] [i_0] [i_5]))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_4] [i_9]))))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) ((unsigned char) arr_6 [i_9] [(_Bool)1] [12ULL]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1ULL)))))))));
                        arr_35 [i_4] [i_4] [i_4] [i_4] [4LL] &= ((/* implicit */long long int) (_Bool)1);
                        var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-65)), (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_28 [i_0] [i_0] [i_0] [i_0] [4U] [10LL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))) & (((((arr_7 [i_0] [i_1 - 1] [(_Bool)1]) ? (-863039383748313857LL) : (arr_32 [0ULL] [i_1 + 1] [i_9] [8U] [i_9] [i_1] [i_9]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)53079)) ? (((/* implicit */int) arr_33 [i_4] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_0])))))))));
                        var_23 = ((/* implicit */_Bool) var_4);
                        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [(_Bool)1] [(unsigned short)3] [i_0] [11U])) ? (arr_22 [16ULL] [i_1] [5ULL] [i_0] [i_9]) : (arr_22 [(signed char)9] [(_Bool)1] [i_4] [i_0] [(unsigned short)8]))))));
                    }
                }
                for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    var_25 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_8 [i_10] [i_0]))))));
                    arr_39 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_1 [i_1 + 1])), (((((/* implicit */int) arr_1 [i_1 - 1])) - (((/* implicit */int) arr_1 [i_1 - 1]))))));
                    var_26 = ((/* implicit */unsigned short) ((signed char) 1340331588U));
                    arr_40 [i_0] [i_1] [(unsigned char)7] [i_1] [i_1 - 1] = ((/* implicit */long long int) arr_27 [i_0] [i_0] [i_0] [i_0]);
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    var_27 ^= ((/* implicit */_Bool) (short)-9687);
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_46 [i_11] [(_Bool)1] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-57))) < (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) | (4286586879U))) + (((/* implicit */unsigned int) ((/* implicit */int) max((arr_9 [i_0] [15LL] [i_4] [i_11] [i_12]), (arr_25 [i_0] [i_1] [(_Bool)1] [(short)14] [i_12] [9ULL])))))))));
                        arr_47 [i_0] [i_0] [i_1] [i_4] [i_0] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 18446744073709551614ULL)) ? (arr_16 [i_0] [i_0] [i_0] [11LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9675))))), (((/* implicit */unsigned int) arr_9 [(_Bool)1] [2LL] [i_4] [i_4] [i_4]))))) ? ((~(((unsigned int) (unsigned char)0)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                    }
                }
            }
            /* vectorizable */
            for (unsigned int i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                arr_51 [i_0] = ((/* implicit */signed char) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    for (unsigned short i_15 = 3; i_15 < 15; i_15 += 1) 
                    {
                        {
                            arr_56 [i_0] [i_1 - 1] [i_13] [9LL] [i_15] = ((/* implicit */unsigned long long int) ((arr_19 [i_1 + 1] [2ULL] [(unsigned char)1] [i_0] [(unsigned short)13] [i_15 - 2]) ? (1069547520U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_0] [12LL] [(_Bool)1] [(short)4] [i_1 + 1] [i_15 + 2] [10U])))));
                            var_28 = ((/* implicit */unsigned short) arr_19 [i_0] [(short)16] [i_13] [i_0] [i_14] [i_15]);
                        }
                    } 
                } 
            }
            var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_5 [i_0]), (((/* implicit */signed char) arr_7 [i_0] [i_0] [i_1 - 1])))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_17 = 3; i_17 < 14; i_17 += 3) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 3) 
                {
                    {
                        arr_64 [i_0] [i_0] [i_16 + 1] [i_17] [(_Bool)1] [11LL] = ((/* implicit */_Bool) ((arr_22 [i_0] [i_16 + 1] [i_17 - 3] [i_0] [i_17 + 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_22 [i_16] [i_16 + 1] [i_17 + 2] [i_0] [i_17 + 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191)))))))));
                        var_30 = ((/* implicit */signed char) -1LL);
                        var_31 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_0] [i_16] [i_17])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_52 [i_17 + 1] [(unsigned short)6]))))) : (arr_61 [i_0])));
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) arr_48 [i_18] [(unsigned char)0] [i_16])), (((17563369444429687567ULL) ^ (1ULL)))))))));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned short) (~((-(arr_38 [i_16 + 1] [(_Bool)1] [i_16 + 1] [i_16] [i_0] [i_16 + 1])))));
            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) arr_42 [(_Bool)1] [i_16]))));
            var_35 = ((/* implicit */unsigned int) arr_48 [4U] [i_0] [i_16]);
        }
        arr_65 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9690)) ? (((/* implicit */int) arr_53 [i_0] [i_0] [(signed char)10] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (max((arr_54 [i_0]), (((/* implicit */long long int) arr_53 [i_0] [(unsigned short)6] [i_0] [11LL])))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_53 [i_0] [i_0] [i_0] [i_0]) || (((/* implicit */_Bool) (unsigned short)1639)))))));
        arr_66 [i_0] [i_0] = ((/* implicit */_Bool) arr_34 [i_0] [i_0] [2ULL] [i_0] [i_0] [i_0] [i_0]);
    }
    var_36 = ((/* implicit */unsigned int) max((var_2), (((/* implicit */unsigned short) (short)9686))));
}
