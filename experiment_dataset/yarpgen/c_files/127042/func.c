/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127042
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((_Bool) (unsigned char)64));
                arr_5 [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) min(((unsigned char)162), (arr_3 [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7)) ? (((/* implicit */long long int) -5)) : (arr_1 [i_0] [i_0])))) : (min((((/* implicit */unsigned long long int) (unsigned char)0)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) * (7486453635982670615ULL))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) || (var_9))));
        arr_11 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            var_13 = (!(((/* implicit */_Bool) ((unsigned long long int) var_1))));
                            var_14 += ((/* implicit */unsigned short) (~(((arr_18 [i_2] [i_3] [6ULL] [(unsigned char)10]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
                        }
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            arr_23 [i_2] [i_7] [i_4] [7ULL] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_2 - 1])) ? (arr_17 [i_2 + 1] [i_2 - 1] [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2 + 1])))));
                            var_15 = ((/* implicit */short) var_4);
                        }
                        arr_24 [0ULL] [i_3] [i_4] [i_5] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)115)) >> ((+(((/* implicit */int) (_Bool)1))))));
                        var_16 += ((/* implicit */unsigned short) 12ULL);
                        arr_25 [i_5] [(unsigned short)13] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (+(0ULL)));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_8 = 2; i_8 < 15; i_8 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8 + 1] [i_8 - 2] [i_8 + 2] [i_8 - 2])) ? (max((((/* implicit */int) var_5)), (14))) : (((/* implicit */int) ((unsigned char) max((var_5), (var_0)))))));
        var_18 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_7 [i_8] [i_8 - 1])))));
        arr_28 [i_8] [i_8] = ((/* implicit */signed char) (unsigned short)65535);
        arr_29 [i_8] [i_8] = max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_1)) ? (arr_2 [i_8 - 2]) : (((/* implicit */long long int) var_3)))));
    }
    var_19 = ((/* implicit */_Bool) (~(min(((+(var_1))), ((((_Bool)0) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))))));
    /* LoopNest 3 */
    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
    {
        for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        arr_39 [i_10] = max((min((((/* implicit */unsigned long long int) (unsigned short)4)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) var_4)))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            var_20 = ((/* implicit */int) (signed char)7);
                            arr_42 [i_10] [i_9] [(unsigned char)0] [(signed char)4] [i_11] [7] [i_13] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)972)) ? (((/* implicit */int) (unsigned short)19069)) : (((/* implicit */int) (signed char)15))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_45 [i_9] [i_12] [i_10] [i_11] [i_10] [i_9] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)15)))))));
                            arr_46 [i_11] [i_14] [i_14] [i_9] [i_14] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_9] [7] [i_11] [i_12] [i_10] [i_12] [i_11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)64))))) || (((/* implicit */_Bool) (+(var_11))))));
                            var_21 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) (short)7))))))) ? (((/* implicit */int) (unsigned short)31034)) : (min((-3), (((/* implicit */int) (unsigned short)48675))))));
                            arr_47 [i_10] [i_12] [i_11] [i_12] [i_14] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (var_1)))) ? (((((/* implicit */_Bool) arr_14 [i_14] [i_12] [i_10] [i_9])) ? (arr_14 [i_14] [i_12] [i_11] [i_9]) : (arr_14 [i_9] [i_10] [i_12] [i_14]))) : (((arr_14 [i_9] [i_10] [i_14] [(_Bool)1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68)))))));
                        }
                        for (unsigned char i_15 = 0; i_15 < 10; i_15 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned char) (!(((((/* implicit */int) var_7)) > (((/* implicit */int) arr_12 [i_9] [i_10]))))));
                            arr_50 [(unsigned char)0] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (signed char)8))))), (((((/* implicit */long long int) ((/* implicit */int) (short)-7))) | (4742163096677543869LL))))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 3) 
                        {
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_0))));
                            var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) min((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)9)))), (min((var_7), (var_4)))))), (var_8)));
                            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)52))) : (var_11))) + (max((var_8), (((/* implicit */unsigned int) var_7)))))))));
                        }
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 1; i_18 < 7; i_18 += 2) 
                        {
                            arr_61 [i_9] [i_10] = ((/* implicit */long long int) (_Bool)0);
                            var_26 = ((/* implicit */unsigned int) max(((~((~(((/* implicit */int) var_9)))))), (897511889)));
                        }
                        arr_62 [i_9] [i_9] [i_9] [i_11] [i_11] [i_17] &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)7)))) ? ((+(arr_18 [i_9] [i_10] [i_11] [7LL]))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)26634)), (max((4), (((/* implicit */int) var_7)))))))));
                    }
                    arr_63 [i_11] [i_10] [i_10] [i_11] |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (signed char)15)))) ? (((/* implicit */int) ((var_1) >= (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) 1916755308U)) ? (((/* implicit */int) (unsigned short)26634)) : (262140)))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        arr_67 [i_9] [i_9] [(signed char)7] [i_10] [i_10] [i_9] = ((/* implicit */_Bool) var_3);
                        /* LoopSeq 1 */
                        for (unsigned char i_20 = 1; i_20 < 9; i_20 += 4) 
                        {
                            var_27 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
                            arr_71 [i_9] [i_10] = ((/* implicit */unsigned char) arr_20 [i_9] [4U] [4U] [i_9] [i_19] [i_20 + 1] [i_20]);
                            arr_72 [i_10] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)1)))) << (((/* implicit */int) ((short) 4611686017890516992ULL)))));
                        }
                        var_28 ^= ((/* implicit */unsigned short) ((signed char) (signed char)-16));
                        /* LoopSeq 2 */
                        for (unsigned char i_21 = 1; i_21 < 9; i_21 += 4) /* same iter space */
                        {
                            var_29 = (~(((/* implicit */int) arr_19 [i_9] [i_9] [i_11] [i_9] [i_21 + 1])));
                            arr_75 [i_9] [i_9] [i_9] [i_10] [i_19] [i_9] [i_21] = (!(((/* implicit */_Bool) var_4)));
                            var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) var_6)) : (var_11)));
                            arr_76 [i_10] = ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37874))) : (7586465670005257187LL));
                        }
                        for (unsigned char i_22 = 1; i_22 < 9; i_22 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) 0ULL))));
                            var_32 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-5)))) && (((/* implicit */_Bool) ((arr_41 [i_11] [i_11] [i_11] [(_Bool)1] [i_11] [i_9] [i_11]) >> (((var_3) - (3549467505U))))))));
                        }
                        arr_79 [i_9] [8U] [(unsigned char)2] [i_19] [i_10] = ((/* implicit */unsigned short) (-(var_1)));
                    }
                    for (long long int i_23 = 0; i_23 < 10; i_23 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_24 = 2; i_24 < 8; i_24 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned int) ((var_3) > (((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            arr_87 [i_9] [i_9] [i_10] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [(signed char)6] [(signed char)6] [i_24 - 1] [i_10] [i_24 + 1] [i_9] [i_10])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (short)-12209))))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_6 [i_11]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (min((((/* implicit */unsigned long long int) arr_26 [i_9] [3ULL])), (7486453635982670598ULL)))))));
                            var_35 = ((/* implicit */unsigned short) max((-2067293429449106467LL), (((/* implicit */long long int) max(((-(var_3))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_66 [i_10] [4]))))))))));
                        }
                        arr_90 [i_9] [i_9] [i_9] [i_10] [i_10] [i_23] = ((/* implicit */unsigned char) 0U);
                    }
                    for (unsigned char i_26 = 0; i_26 < 10; i_26 += 3) 
                    {
                        arr_93 [i_9] [i_9] [i_11] |= ((/* implicit */long long int) -1584873987);
                        arr_94 [i_11] [i_10] [i_9] [i_9] [i_26] = ((/* implicit */short) ((((/* implicit */_Bool) max((((arr_1 [i_9] [(signed char)3]) + (((/* implicit */long long int) 1916755324U)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_51 [i_10] [i_10] [i_10] [i_10] [i_10] [i_9])))))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */int) var_10)) + (var_6))) : (((/* implicit */int) max((var_0), (((/* implicit */signed char) arr_32 [i_26]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 67108863)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_27 = 0; i_27 < 10; i_27 += 4) 
                    {
                        arr_97 [i_9] [i_10] [i_11] [i_11] [i_27] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_9] [i_10] [i_11] [i_27]))));
                        var_36 *= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) && ((_Bool)1)));
                        var_37 = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)240));
                        arr_98 [i_9] [i_10] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)0)))) / (((/* implicit */int) (short)-7))));
                    }
                    var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_33 [i_9] [i_10] [i_10])), (var_3))), (var_8)))) ? (((((/* implicit */_Bool) arr_74 [i_9] [i_9] [i_9] [i_10] [i_11] [i_11])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_38 [i_11] [(unsigned char)1] [i_9])))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_92 [i_11] [i_10] [i_10] [i_10])), (3852560548U))))))))))));
                    arr_99 [i_10] [i_10] [i_10] [i_11] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_81 [i_10])) ^ (((/* implicit */int) arr_81 [i_9])))), (min((((/* implicit */int) var_4)), (var_1)))));
                }
            } 
        } 
    } 
}
