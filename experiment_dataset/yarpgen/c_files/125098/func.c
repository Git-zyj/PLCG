/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125098
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
    var_17 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) var_4)), (((18446744073709551612ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
    var_18 = ((/* implicit */unsigned int) max((((((((/* implicit */unsigned long long int) var_12)) - (2576934822086675868ULL))) + (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_12) - (((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_1)) - (((/* implicit */int) var_10)))) : (((/* implicit */int) ((short) 6ULL))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((int) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_1 [(short)10]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33181)))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_20 += ((/* implicit */unsigned int) arr_1 [i_1]);
            var_21 = ((/* implicit */short) max((min((((/* implicit */unsigned int) arr_3 [i_0] [i_1])), (arr_4 [i_1] [i_1] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) arr_5 [i_0])) : (arr_6 [i_0]))))));
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_11 [i_0] [(signed char)15] [i_2] [i_0])))) ? (arr_9 [i_2] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) var_12))))) && (((/* implicit */_Bool) arr_1 [i_0]))));
                    arr_12 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) min((max((((/* implicit */short) (unsigned char)48)), ((short)-15957))), (((/* implicit */short) (signed char)74))))), ((+(((((/* implicit */int) var_4)) - (arr_10 [i_0] [i_0] [i_0] [i_1] [14ULL] [i_3])))))));
                    var_23 ^= ((/* implicit */signed char) ((((/* implicit */int) ((593422073) != ((~(((/* implicit */int) arr_3 [(short)15] [i_3 + 1]))))))) < (((2147483647) << (((min((((/* implicit */int) (short)15968)), (1))) - (1)))))));
                }
                var_24 += ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_4 [i_0] [i_1] [10U])) : (arr_7 [i_0] [i_1] [i_0]))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-19))))))), (((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) var_16))))))));
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (-(((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)30))))) + (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) var_10)))))))))));
            }
            for (short i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_0] [2U]), (arr_3 [i_1] [i_1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_4]))) * (3957977981418394249ULL)))));
                /* LoopSeq 3 */
                for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    var_27 = ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) - (((((/* implicit */_Bool) min(((short)-28406), (var_4)))) ? (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0])) : (min((((/* implicit */long long int) (signed char)0)), (9223372036854775807LL))))));
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (short)-15966))));
                    var_29 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) 1934554762)) & (3054514428206453056ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)240)) != (((/* implicit */int) var_3)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_16 [i_0] [i_0] [i_4] [(short)11]), (((/* implicit */unsigned short) (short)-28406))))) + (((/* implicit */int) var_2))))) : (min((min((var_14), (arr_13 [i_4] [i_1] [i_5]))), (((/* implicit */unsigned long long int) var_1))))));
                    var_30 ^= ((/* implicit */short) arr_3 [i_4] [i_5]);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 2; i_7 < 15; i_7 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1009083064))));
                        var_32 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_14 [i_4])) == (((/* implicit */int) arr_2 [i_7])))) ? (((/* implicit */int) ((signed char) 3054514428206453046ULL))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    var_33 = ((/* implicit */short) ((((arr_11 [i_0] [i_0] [i_4] [i_0]) | (((/* implicit */int) (unsigned short)2943)))) > (((arr_11 [i_0] [i_1] [2ULL] [i_0]) & (((/* implicit */int) var_13))))));
                    arr_25 [i_1] [i_1] [i_4] [i_1] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 15392229645503098570ULL)))) == (arr_13 [i_4] [i_0] [i_0])));
                    var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_21 [i_0] [i_1] [i_4] [i_1])) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [5ULL]))))))));
                    arr_26 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_16)) ? (1444158735) : (((/* implicit */int) arr_0 [i_4])))) / (((/* implicit */int) (unsigned short)52778))));
                }
                for (int i_8 = 1; i_8 < 14; i_8 += 3) 
                {
                    var_35 *= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (arr_28 [9U] [i_1] [i_8 + 2]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_9 = 1; i_9 < 13; i_9 += 3) 
                    {
                        var_36 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64977)) ? (arr_19 [i_4] [i_4] [i_8] [(signed char)8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [(signed char)5] [i_1] [i_1] [i_1]))))))));
                        arr_31 [i_0] [i_0] [i_1] [i_0] [i_0] [10U] [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 234393920U)) ? (((/* implicit */unsigned int) 284161139)) : (1704831899U))));
                        arr_32 [i_0] [i_1] [i_1] [6ULL] [i_0] [4] [i_9] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_9 - 1] [i_9 - 1] [i_1] [i_9 - 1] [(short)4] [i_9])) || (((/* implicit */_Bool) arr_17 [i_9 + 2] [i_9 + 1] [i_9 + 2] [16LL] [i_4]))));
                    }
                    for (short i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        var_37 = ((/* implicit */int) (short)28406);
                        var_38 = ((/* implicit */int) arr_8 [i_8 + 2] [i_8 + 3] [i_8 + 2] [i_8 + 2]);
                        var_39 = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((((/* implicit */int) min((((/* implicit */short) var_3)), (var_15)))) + (2147483647))) >> (((((((/* implicit */int) arr_27 [i_0] [i_8 + 2])) + (((((/* implicit */int) (signed char)-72)) - (((/* implicit */int) arr_16 [14ULL] [i_0] [i_0] [i_0])))))) - (1557)))))) : (((/* implicit */signed char) ((((((/* implicit */int) min((((/* implicit */short) var_3)), (var_15)))) + (2147483647))) >> (((((((((/* implicit */int) arr_27 [i_0] [i_8 + 2])) + (((((/* implicit */int) (signed char)-72)) - (((/* implicit */int) arr_16 [14ULL] [i_0] [i_0] [i_0])))))) - (1557))) + (14390))))));
                        var_40 += var_2;
                        var_41 *= ((/* implicit */signed char) max((arr_28 [i_0] [(_Bool)1] [i_4]), (((((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])))) + ((-(arr_28 [i_4] [i_0] [i_0])))))));
                    }
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        var_42 = ((/* implicit */int) min(((short)26750), ((short)-15969)));
                        var_43 = ((/* implicit */unsigned char) (unsigned short)2931);
                    }
                }
            }
            /* vectorizable */
            for (short i_12 = 0; i_12 < 17; i_12 += 2) /* same iter space */
            {
                var_44 ^= ((unsigned short) arr_9 [i_12] [i_1] [i_12] [(unsigned short)4]);
                var_45 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_3 [15U] [15U])))) & ((~(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_12]))))));
                var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) arr_9 [i_12] [i_12] [(unsigned short)0] [i_0]))));
                var_47 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) arr_35 [i_0] [i_12])))) ? (((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [i_0] [i_12])) : ((-(arr_9 [3U] [i_1] [i_12] [i_12])))));
            }
            /* vectorizable */
            for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 2) 
            {
                var_48 = ((/* implicit */signed char) ((unsigned long long int) arr_20 [i_1]));
                var_49 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_13] [i_13]))) & (arr_9 [i_0] [i_1] [i_13] [i_13])));
                var_50 *= ((/* implicit */int) ((arr_35 [i_1] [i_1]) == (arr_35 [i_0] [i_0])));
                var_51 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_13] [i_1] [i_13] [i_13])) ? (arr_19 [i_13] [i_0] [i_0] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-35)))));
            }
            var_52 ^= ((/* implicit */signed char) (~(((/* implicit */int) arr_42 [i_0] [i_1] [i_0] [i_1]))));
        }
    }
    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 3) /* same iter space */
    {
        var_53 *= ((/* implicit */_Bool) min(((~(arr_7 [i_14] [i_14] [i_14]))), (((/* implicit */long long int) arr_5 [i_14]))));
        /* LoopNest 3 */
        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 3) 
            {
                for (unsigned int i_17 = 2; i_17 < 16; i_17 += 2) 
                {
                    {
                        arr_56 [i_14] [i_14] = ((/* implicit */long long int) max((max((arr_46 [i_15]), (arr_46 [i_14]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_14])) && (((/* implicit */_Bool) arr_46 [i_16])))))));
                        var_54 += ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_14] [i_14] [i_15] [i_14] [i_16] [i_14]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)7987))) ^ (3054514428206453056ULL))))), (((/* implicit */unsigned long long int) ((arr_24 [i_17] [i_17 - 2] [i_17 - 2] [(signed char)0] [i_17]) | (((/* implicit */unsigned int) ((/* implicit */int) max((arr_45 [(signed char)6] [i_16]), (arr_14 [i_14]))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_18 = 0; i_18 < 17; i_18 += 3) /* same iter space */
    {
        var_55 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7437)) ? (284161159) : ((-2147483647 - 1))))) ? (arr_55 [i_18] [i_18]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned short)768)) : (((/* implicit */int) (signed char)34)))))))) <= (((139637976727552ULL) >> (((((/* implicit */int) var_4)) + (30388)))))));
        var_56 = ((/* implicit */long long int) ((unsigned short) ((unsigned char) -284161137)));
    }
    /* vectorizable */
    for (unsigned int i_19 = 0; i_19 < 17; i_19 += 3) /* same iter space */
    {
        var_57 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_21 [i_19] [i_19] [14] [i_19]))));
        var_58 += ((/* implicit */unsigned short) arr_9 [i_19] [i_19] [(signed char)11] [i_19]);
    }
}
