/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108384
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
    var_20 = var_13;
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (signed char)64)) | (((/* implicit */int) (_Bool)0)))));
        var_22 = ((/* implicit */short) ((int) ((((/* implicit */int) arr_0 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    for (signed char i_1 = 3; i_1 < 9; i_1 += 2) 
    {
        arr_4 [i_1] [i_1 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_1 - 2]), (arr_3 [i_1 - 2])))) ? (((arr_2 [i_1 - 3]) % (arr_2 [i_1 - 2]))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_0 [i_1 - 3] [i_1 - 3])) : (((/* implicit */int) arr_1 [i_1] [i_1])))))))));
        /* LoopSeq 3 */
        for (long long int i_2 = 1; i_2 < 7; i_2 += 1) 
        {
            arr_7 [i_2] [i_2] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_1 - 1])) ? (((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_1 - 1])) ? (arr_6 [i_2 - 1] [i_1 - 1]) : (arr_6 [i_2 - 1] [i_1 - 1]))) : (max((arr_6 [i_2 - 1] [i_1 - 1]), (arr_6 [i_2 - 1] [i_1 - 1])))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (long long int i_4 = 2; i_4 < 7; i_4 += 1) 
                {
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1] [i_1 - 3] [(_Bool)1] [i_1 - 1] [(_Bool)1] [i_4])) == (((((/* implicit */_Bool) ((arr_9 [i_3] [i_3] [i_2 + 2] [i_1]) ^ (((/* implicit */long long int) var_17))))) ? (((/* implicit */int) arr_11 [i_1] [i_2 + 3] [i_3] [i_3] [i_3] [i_4])) : (((((/* implicit */int) arr_8 [6LL] [3U] [i_4])) | (arr_5 [i_2] [i_4 + 1])))))));
                        arr_13 [3ULL] [i_4] [i_3] [2U] = ((/* implicit */signed char) (short)-919);
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4 - 2] [i_2 + 1] [i_1 - 2])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)9)), (var_8)))) : (((((arr_9 [i_1] [(_Bool)1] [(_Bool)1] [(_Bool)0]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_3 [1ULL])) - (190)))))))) ? (((/* implicit */int) min((arr_8 [i_1 - 1] [i_2 - 1] [i_4 - 2]), (arr_8 [i_1 - 1] [i_2 - 1] [i_4 - 2])))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_1] [6LL] [i_3])) : (((/* implicit */int) var_18)))) < (arr_5 [i_2 + 2] [i_2])))))))));
                        arr_14 [i_1 - 2] [i_1] [2LL] [(short)8] [i_3] [i_4] &= ((/* implicit */unsigned short) arr_9 [3U] [i_3] [i_3] [i_4 + 3]);
                    }
                } 
            } 
        }
        for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_26 [i_7] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_19 [i_1 - 3] [7U] [i_1] [i_1]), (((/* implicit */unsigned short) arr_21 [i_7] [i_1]))))) & ((~(((/* implicit */int) arr_1 [i_1] [9ULL]))))))) ? ((((~(arr_2 [(_Bool)1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1 + 1] [i_1 - 3]))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_20 [i_1 - 1] [(unsigned char)0])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) arr_17 [i_1 - 1] [i_1 - 1] [(signed char)7])))))));
                            arr_27 [i_8] [i_6] [i_7] [6ULL] [i_6] [i_1 - 2] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) (unsigned char)34)))), (min((arr_6 [i_1 - 1] [i_1 - 1]), (arr_6 [i_1 - 2] [i_6])))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((((/* implicit */long long int) arr_5 [(signed char)8] [i_5])) / (-5158057499493051692LL))))) ? (max((((((/* implicit */int) arr_24 [9ULL] [(_Bool)1] [i_1] [i_1] [4U] [i_5] [(unsigned short)9])) + (((/* implicit */int) arr_24 [i_1 - 1] [i_1 - 2] [i_1 - 2] [8ULL] [i_1 - 3] [i_5] [(unsigned char)6])))), (((var_10) / (((/* implicit */int) arr_11 [6ULL] [i_5] [i_5] [(unsigned short)6] [i_5] [(unsigned short)6])))))) : ((-(arr_6 [i_1 - 3] [i_1 - 1])))));
            var_26 &= ((/* implicit */unsigned long long int) min((((int) min((((/* implicit */unsigned long long int) var_7)), (arr_2 [i_5])))), (((/* implicit */int) (!((_Bool)1))))));
            /* LoopSeq 2 */
            for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((-1663831041738181690LL) + (9223372036854775807LL))) >> (((-1663831041738181690LL) + (1663831041738181718LL)))))), (min((min((((/* implicit */unsigned long long int) arr_1 [i_5] [i_1])), (arr_15 [i_1 - 3]))), (((/* implicit */unsigned long long int) arr_1 [i_1] [i_5])))))))));
                var_28 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)41)) ^ (((/* implicit */int) arr_25 [i_1] [i_1] [(unsigned short)4] [i_9] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (562532170) : (((/* implicit */int) arr_17 [i_1 - 3] [3LL] [i_9]))))) : (((((/* implicit */unsigned long long int) 70368744177663LL)) ^ (arr_2 [i_5]))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((signed char) (unsigned short)4))), (min((((/* implicit */unsigned int) arr_19 [0ULL] [i_9] [i_5] [i_1 - 2])), (arr_30 [6LL]))))))));
                arr_31 [(_Bool)1] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_0 [i_1 + 1] [i_1 + 1]) ? (arr_2 [i_1 - 2]) : (arr_2 [i_1 + 1]))))));
            }
            /* vectorizable */
            for (signed char i_10 = 1; i_10 < 9; i_10 += 1) 
            {
                arr_34 [i_5] [i_10 + 1] = 1663831041738181689LL;
                var_29 ^= ((/* implicit */unsigned int) ((int) arr_8 [5] [i_10 + 1] [(short)8]));
                arr_35 [i_1] [i_5] [i_5] [i_10 - 1] = arr_23 [i_1 - 1] [i_1 - 2] [i_1 - 3] [i_10 - 1];
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        {
                            arr_42 [(short)3] [(short)3] = ((/* implicit */_Bool) (~(arr_29 [i_10 + 1] [i_1 + 1] [i_12])));
                            arr_43 [i_1] [i_5] [5U] [i_1] = ((/* implicit */unsigned short) ((signed char) ((var_15) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65530))))));
                            arr_44 [6] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_23 [i_1] [i_5] [(short)1] [i_12]) ? (((/* implicit */unsigned long long int) var_10)) : (arr_22 [i_5])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)57344))))) : (((((/* implicit */_Bool) var_19)) ? (arr_15 [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_1 + 1] [i_1 + 1] [(unsigned short)0] [i_11] [i_12] [i_1] [(unsigned short)4])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        {
                            var_30 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_1] [i_5] [6LL] [i_13] [i_14])) ? (arr_46 [i_1 + 1] [i_5] [i_10] [i_13] [i_14] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [(_Bool)1] [i_5] [i_10 - 1] [i_13] [i_14] [i_5] [8])))))) ? (((/* implicit */int) ((_Bool) var_15))) : ((+(((/* implicit */int) arr_24 [i_1 - 1] [i_5] [i_10] [i_13] [i_13] [i_1] [i_14]))))));
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_1])) ? (arr_30 [i_13]) : (((/* implicit */unsigned int) arr_36 [i_1 + 1] [i_5] [(short)2] [i_14])))))));
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_1 + 1] [i_1 - 1])) / (((/* implicit */int) arr_38 [i_1 - 2] [i_1 - 1])))))));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                for (unsigned int i_17 = 2; i_17 < 9; i_17 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)26))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) ((_Bool) arr_28 [i_15] [i_15] [i_15]))))))));
                        /* LoopSeq 4 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -1663831041738181690LL)) + (10537987815140307664ULL)));
                            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_46 [2LL] [i_1] [i_15] [i_16] [i_17] [(unsigned short)5])) : (var_15))))))));
                            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) arr_2 [i_1]))));
                            arr_63 [i_15] [i_15] [i_17 - 2] = ((/* implicit */unsigned char) (+(arr_51 [i_1 - 3] [i_15])));
                            arr_64 [i_1] [i_15] [i_15] [i_17 - 2] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)8191)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (short)16383))));
                        }
                        for (signed char i_19 = 0; i_19 < 10; i_19 += 2) 
                        {
                            arr_67 [i_19] [i_1] [i_17 - 1] [i_15] [i_15] [i_1 - 3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_1 - 1] [i_1 - 1])) ? (arr_16 [i_1 - 2] [i_1] [i_1 - 1]) : (arr_16 [i_1] [i_1] [i_1 + 1])));
                            arr_68 [i_1 + 1] [i_15] [i_19] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_52 [i_15] [i_16] [2ULL]) : (arr_28 [i_16] [(unsigned short)6] [i_19])))) ? (arr_29 [i_19] [i_16] [0LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 2] [i_17 - 2])))));
                            arr_69 [i_1 + 1] [i_1 + 1] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_32 [i_15] [i_17] [(_Bool)1]))) - (((/* implicit */int) arr_24 [i_1 - 3] [i_17 - 2] [i_19] [i_19] [i_19] [i_19] [i_19]))));
                            arr_70 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [2] [i_15] = ((/* implicit */short) ((((((/* implicit */int) arr_8 [i_1 - 2] [i_1 - 2] [i_17 + 1])) + (2147483647))) << (((((((/* implicit */int) arr_8 [i_1 - 3] [i_1 - 2] [i_17 - 2])) + (15))) - (2)))));
                        }
                        for (unsigned int i_20 = 0; i_20 < 10; i_20 += 4) 
                        {
                            arr_74 [i_15] = ((/* implicit */_Bool) ((signed char) arr_25 [i_1 + 1] [i_1 + 1] [i_17 - 1] [i_15] [i_15]));
                            arr_75 [i_1 - 3] [i_1] [i_1 - 3] [i_15] [i_17 - 1] [i_1] = ((long long int) arr_48 [i_1 - 3] [i_15] [i_16] [i_17 + 1] [(signed char)7]);
                        }
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            arr_78 [i_1 - 1] [i_15] [i_16] [i_15] [i_21] [i_15] [i_17] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)6)))));
                            var_37 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_20 [i_17 + 1] [i_21])) + (2147483647))) >> (((/* implicit */int) arr_73 [i_1] [i_15] [i_16] [i_17 + 1] [(_Bool)1] [(_Bool)1]))));
                        }
                    }
                } 
            } 
            arr_79 [i_15] = (+(((((/* implicit */_Bool) -1663831041738181710LL)) ? (((/* implicit */int) (unsigned short)19292)) : (((/* implicit */int) (unsigned short)5)))));
            var_38 = ((/* implicit */int) (+(arr_46 [i_1] [i_15] [i_1 - 3] [i_1 + 1] [i_15] [(unsigned char)4])));
        }
        var_39 = ((((/* implicit */_Bool) ((arr_57 [i_1] [i_1] [(short)5]) % (((/* implicit */unsigned int) (~(((/* implicit */int) var_3)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_59 [(unsigned short)7] [(unsigned short)7] [(unsigned short)7] [i_1 - 1] [i_1 - 3])) ? (((/* implicit */int) arr_24 [1ULL] [i_1 + 1] [i_1 - 3] [i_1] [(unsigned short)5] [i_1] [i_1 - 2])) : (arr_59 [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 1]))) < (((arr_0 [i_1] [i_1]) ? (((/* implicit */int) arr_10 [i_1] [5ULL] [9LL])) : (((/* implicit */int) arr_18 [1U] [1U] [(_Bool)1]))))))) : (((/* implicit */int) ((arr_16 [i_1 - 3] [i_1 - 3] [i_1 - 2]) >= (arr_16 [i_1 - 1] [i_1 - 3] [i_1 - 2])))));
        /* LoopSeq 2 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            var_40 = ((/* implicit */short) arr_21 [i_1 - 2] [i_1 + 1]);
            arr_83 [i_1 - 1] [i_1 - 1] [(signed char)0] = ((/* implicit */short) ((unsigned long long int) ((unsigned long long int) -1663831041738181690LL)));
        }
        for (short i_23 = 0; i_23 < 10; i_23 += 4) 
        {
            arr_86 [i_1] [i_23] [2ULL] = ((/* implicit */signed char) ((unsigned int) ((unsigned short) ((unsigned long long int) var_4))));
            var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_12 [i_1 - 1] [i_23]) ? (((/* implicit */int) arr_71 [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1])) : (((/* implicit */int) arr_0 [(unsigned short)7] [i_1 + 1])))))));
            var_42 = ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_5 [i_23] [i_1 + 1])) ? (1663831041738181690LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1 - 2] [4LL] [i_1]))))), (((/* implicit */long long int) ((var_11) >= (((/* implicit */long long int) arr_56 [i_23]))))))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_77 [i_1 - 3] [i_23] [i_1] [i_23] [i_23])) != (((/* implicit */int) arr_77 [i_23] [i_23] [(signed char)2] [(unsigned short)4] [i_23]))))))));
        }
    }
    for (unsigned short i_24 = 1; i_24 < 17; i_24 += 3) 
    {
        var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_87 [i_24])) ? (((/* implicit */int) arr_0 [i_24] [(_Bool)1])) : (((/* implicit */int) arr_1 [i_24] [(short)16])))))))))));
        arr_89 [11LL] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_87 [i_24 - 1])))) * (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_88 [i_24 - 1] [i_24 - 1])) ? (((/* implicit */int) arr_0 [i_24 - 1] [i_24 - 1])) : (((/* implicit */int) arr_0 [(signed char)9] [4ULL]))))))));
    }
}
