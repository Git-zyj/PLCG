/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170154
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
    var_17 = ((/* implicit */unsigned long long int) ((long long int) var_12));
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 9; i_0 += 1) /* same iter space */
    {
        var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((/* implicit */int) (signed char)96)) : (((((/* implicit */_Bool) min((((/* implicit */signed char) arr_1 [i_0])), (arr_0 [i_0])))) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (signed char)-13))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_2 [i_0 + 2] [i_1])) * (((/* implicit */int) arr_2 [i_0 + 3] [(short)2])))) + (((((((/* implicit */int) arr_0 [i_0 + 4])) * (((/* implicit */int) (_Bool)1)))) << ((((-(((/* implicit */int) arr_1 [i_0])))) + (26))))))))));
            var_20 = ((/* implicit */_Bool) min(((-(((/* implicit */int) min((((/* implicit */signed char) arr_3 [i_0] [i_1] [i_0])), (arr_4 [(signed char)5] [(unsigned char)12] [i_0])))))), (((/* implicit */int) max((arr_2 [i_0 + 1] [i_1]), (((unsigned char) arr_4 [(signed char)5] [i_0] [i_0])))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)120)) != (((/* implicit */int) (signed char)-1))))) >> (((/* implicit */int) min((min((((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_2 - 1])), ((unsigned short)16851))), (((/* implicit */unsigned short) (signed char)95)))))));
                var_21 = ((/* implicit */unsigned int) (_Bool)1);
                arr_10 [i_1] = ((/* implicit */unsigned char) min((-625243910), (((((/* implicit */int) max(((signed char)13), ((signed char)-15)))) + (((((/* implicit */int) (signed char)12)) >> (((-1459946105) + (1459946114)))))))));
                /* LoopSeq 2 */
                for (short i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_0] [i_0] [i_1] [i_0 - 1] [i_0 + 2] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1])) / (((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_2 - 1])))) * ((~(((/* implicit */int) (_Bool)0))))));
                    var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                    arr_14 [i_0] [i_0 + 4] [i_0] [i_1] [i_0] = ((max((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0 + 3])))) <= (((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */short) (signed char)1)), ((short)11587)))), (((((/* implicit */int) arr_2 [i_1] [i_1])) << (((/* implicit */int) arr_1 [i_2]))))))));
                }
                for (short i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_1] = (unsigned char)66;
                    var_23 -= ((/* implicit */signed char) ((unsigned short) (-(max((((/* implicit */unsigned int) arr_12 [i_0 + 1] [i_1] [i_2] [i_4])), (1562965986U))))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_0] [(_Bool)1])) + (2147483647))) << (((((/* implicit */int) arr_4 [i_0 - 1] [i_1] [(short)12])) - (31)))))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1])) ? (((/* implicit */int) arr_6 [i_4] [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)0))))))))));
                }
                var_25 = ((/* implicit */unsigned char) min((1ULL), (((/* implicit */unsigned long long int) (signed char)-29))));
            }
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) arr_12 [i_5] [i_5] [i_1] [i_0])) * (((/* implicit */int) arr_16 [i_0] [(signed char)4] [i_0] [i_0 + 2])))), (((/* implicit */int) (unsigned char)223))))) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_3 [(signed char)0] [(_Bool)1] [i_0])))))));
                var_27 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-69)))) ? ((-(17726096847741200804ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [(short)11])) || (((/* implicit */_Bool) arr_7 [3LL] [i_1] [i_1] [i_1])))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (max((9400182568477681192ULL), (((/* implicit */unsigned long long int) (unsigned char)15)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)194))))))))));
                arr_21 [i_5] [i_1] [i_5] [i_5] = (unsigned char)38;
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 3; i_7 < 12; i_7 += 2) 
                    {
                        var_28 *= ((/* implicit */long long int) (-(((((/* implicit */int) arr_1 [(unsigned char)12])) * (((/* implicit */int) (_Bool)1))))));
                        var_29 = ((((/* implicit */int) arr_11 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 3])) != (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-14)) || (((/* implicit */_Bool) (short)17974))))));
                        arr_29 [i_0] [i_6] [i_1] [i_6] [i_7] = ((/* implicit */signed char) (unsigned char)143);
                    }
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) 
                    {
                        arr_33 [i_1] [i_1] = ((/* implicit */unsigned int) ((1264981874) << (((6557578006203813089ULL) - (6557578006203813089ULL)))));
                        arr_34 [(signed char)5] [i_1] [(_Bool)1] [(unsigned short)11] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))));
                        var_30 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_26 [i_6] [i_6] [i_6] [i_6])))));
                        var_31 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)13)))))));
                        var_32 = ((/* implicit */signed char) arr_32 [i_0 + 2] [i_0] [i_0] [i_0 - 1] [i_0]);
                    }
                    /* LoopSeq 2 */
                    for (int i_9 = 4; i_9 < 12; i_9 += 1) 
                    {
                        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */int) arr_7 [(_Bool)1] [i_0] [i_0 - 1] [(_Bool)1])) <= (((/* implicit */int) arr_7 [12U] [(signed char)0] [i_0] [12U])))))));
                        arr_39 [i_1] [i_6] [i_5] [(unsigned char)3] [i_1] = (signed char)-19;
                        arr_40 [i_0 + 2] [i_1] [(unsigned char)2] [i_6] [i_6] = ((/* implicit */unsigned short) (+(arr_36 [i_0 + 2] [i_5] [7U] [i_9 - 4])));
                        var_34 -= arr_19 [i_9] [2U] [(_Bool)1] [(_Bool)1];
                    }
                    for (int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        var_35 = ((/* implicit */unsigned char) (unsigned short)20680);
                        var_36 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2039010577)))))));
                        arr_44 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)43045)) >= (((/* implicit */int) (unsigned char)127)))) || (arr_16 [i_0 + 3] [i_1] [i_0 + 1] [i_0 + 1])));
                        var_37 *= ((/* implicit */_Bool) ((int) arr_41 [i_0 + 1]));
                        var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [9ULL])))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        var_39 = ((/* implicit */_Bool) arr_23 [i_1]);
                        var_40 = ((/* implicit */unsigned char) (!((_Bool)1)));
                        arr_47 [i_11] [i_0] [i_1] [i_5] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((arr_20 [i_0]) ? (((/* implicit */int) arr_6 [i_0] [i_0 + 4] [i_0])) : (((/* implicit */int) (signed char)-90))))));
                    }
                    var_41 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_43 [i_0] [i_0 + 4] [i_0 + 3] [i_0] [i_0 + 3])) || (((/* implicit */_Bool) arr_43 [i_0 + 3] [i_0 + 4] [i_0 + 3] [i_0] [i_0 + 3]))));
                }
                for (signed char i_12 = 0; i_12 < 13; i_12 += 1) /* same iter space */
                {
                    var_42 = ((/* implicit */int) arr_7 [i_1] [i_5] [10U] [i_1]);
                    var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)14)) / (((/* implicit */int) arr_8 [i_0 + 4] [i_1]))))) ? (((/* implicit */int) arr_48 [i_0] [i_1] [i_0 + 1])) : (max((((((/* implicit */int) (signed char)-115)) * (((/* implicit */int) arr_6 [i_0] [i_5] [i_12])))), (((/* implicit */int) ((1094798262956023162LL) > (((/* implicit */long long int) arr_36 [i_0] [i_0 + 4] [i_0 + 4] [i_0 + 3])))))))));
                }
            }
            /* vectorizable */
            for (short i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_14] [i_13] [i_14] [i_1] [(short)7] [(unsigned char)4])) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */int) (signed char)25)) ^ (1392283314)))));
                    arr_55 [i_1] [i_1] [i_1] [i_1] = (!(((/* implicit */_Bool) arr_49 [i_13] [i_13])));
                }
                for (signed char i_15 = 0; i_15 < 13; i_15 += 2) 
                {
                    arr_60 [(unsigned char)8] [i_1] [i_15] [i_15] [(unsigned char)2] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) arr_11 [i_0 + 2] [i_0 + 3] [i_0] [i_0 + 3] [i_0 + 2]))));
                    arr_61 [i_1] [i_1] = (signed char)-19;
                    var_45 = ((/* implicit */signed char) (+((-2147483647 - 1))));
                }
                for (int i_16 = 0; i_16 < 13; i_16 += 1) 
                {
                    arr_65 [i_13] [i_1] [i_13] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(arr_32 [12LL] [i_0 - 1] [i_1] [i_13] [i_16]))))) % (1793126980U)));
                    arr_66 [i_1] [9ULL] [i_13] [i_13] = ((/* implicit */unsigned short) arr_43 [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0]);
                    var_46 *= ((/* implicit */short) arr_56 [i_0] [i_0 - 1]);
                    var_47 = ((/* implicit */long long int) max((var_47), (((((arr_27 [i_0] [i_0] [i_0 - 1]) << (((arr_38 [i_13] [i_1]) - (393764945))))) - (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)64)) & (arr_30 [(unsigned short)9] [i_13] [i_0] [i_16] [i_13]))))))));
                }
                var_48 = ((/* implicit */signed char) arr_8 [i_13] [i_1]);
            }
            var_49 ^= ((/* implicit */short) (-(arr_15 [i_1] [i_1] [i_1] [4LL] [i_0] [i_0])));
        }
        for (unsigned short i_17 = 0; i_17 < 13; i_17 += 1) /* same iter space */
        {
            var_50 = ((/* implicit */long long int) ((((((((/* implicit */int) arr_23 [(signed char)0])) + (2147483647))) << (((((/* implicit */int) arr_23 [(_Bool)1])) - (16958))))) != ((-(((/* implicit */int) arr_56 [i_0 + 2] [i_0 + 2]))))));
            var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) (~(((arr_38 [i_0 + 1] [i_17]) + (arr_38 [i_0 - 1] [i_17]))))))));
            arr_69 [i_0] [i_0] = ((/* implicit */_Bool) (short)2426);
        }
    }
    for (int i_18 = 1; i_18 < 9; i_18 += 1) /* same iter space */
    {
        var_52 = max((((arr_22 [i_18] [i_18 + 4] [i_18] [i_18 - 1] [i_18 + 3]) << (((((/* implicit */int) arr_1 [(_Bool)0])) - (1))))), (((((/* implicit */int) (unsigned char)253)) % (((/* implicit */int) min((((/* implicit */unsigned short) arr_59 [i_18] [i_18 + 1] [i_18])), ((unsigned short)44878)))))));
        arr_73 [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_68 [i_18 - 1] [i_18 - 1])) * (((/* implicit */int) ((unsigned short) 11889166067505738527ULL)))))) ? (((((/* implicit */int) min((((/* implicit */short) arr_25 [i_18] [i_18 + 2] [i_18 + 1] [i_18] [i_18 + 2] [i_18])), (arr_7 [i_18] [i_18] [i_18 + 3] [i_18])))) + (((arr_22 [i_18 + 4] [i_18] [i_18] [i_18] [i_18]) - (((/* implicit */int) (unsigned short)20680)))))) : (arr_38 [4U] [i_18 + 2])));
    }
    for (long long int i_19 = 0; i_19 < 12; i_19 += 2) 
    {
        arr_77 [i_19] [i_19] = ((/* implicit */unsigned char) (_Bool)0);
        arr_78 [i_19] [i_19] |= ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (arr_37 [i_19] [i_19] [i_19] [i_19] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_74 [i_19] [i_19]))))))))), (arr_30 [i_19] [i_19] [i_19] [i_19] [i_19])));
        arr_79 [i_19] = ((/* implicit */signed char) (((-(((/* implicit */int) ((unsigned char) (signed char)-2))))) <= (max((((((/* implicit */int) arr_12 [i_19] [i_19] [i_19] [i_19])) >> (((((/* implicit */int) arr_49 [i_19] [i_19])) + (100))))), (min((((/* implicit */int) arr_16 [i_19] [i_19] [i_19] [i_19])), (825537366)))))));
        var_53 = ((/* implicit */_Bool) ((((arr_50 [i_19] [i_19] [i_19] [i_19]) + (((/* implicit */unsigned long long int) min((arr_22 [(unsigned char)7] [i_19] [i_19] [i_19] [i_19]), (((/* implicit */int) (signed char)89))))))) << (((max((min((((/* implicit */unsigned int) arr_22 [(_Bool)1] [i_19] [i_19] [i_19] [i_19])), (arr_43 [i_19] [i_19] [i_19] [i_19] [i_19]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_19]))))))) - (4294967183U)))));
    }
    for (unsigned char i_20 = 0; i_20 < 22; i_20 += 2) 
    {
        arr_84 [i_20] [i_20] = ((/* implicit */long long int) (signed char)-2);
        arr_85 [(_Bool)1] = ((/* implicit */int) min(((signed char)-2), (((/* implicit */signed char) (_Bool)0))));
    }
    var_54 ^= ((/* implicit */unsigned int) var_8);
}
