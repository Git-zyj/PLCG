/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162632
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
    var_16 = ((/* implicit */signed char) (_Bool)1);
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
    var_18 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (var_1)));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_20 = var_6;
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_0])) <= ((-(((/* implicit */int) (signed char)-70))))));
                    var_22 += ((/* implicit */long long int) (unsigned char)141);
                    arr_9 [i_0] = ((/* implicit */_Bool) var_10);
                }
                /* vectorizable */
                for (unsigned short i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    arr_12 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */short) ((1261356038006038373ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11450)))));
                        var_24 ^= ((/* implicit */unsigned int) ((int) var_8));
                    }
                    for (int i_5 = 2; i_5 < 15; i_5 += 2) /* same iter space */
                    {
                        var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)8695)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)24223))));
                        var_26 ^= ((/* implicit */unsigned char) var_11);
                    }
                    for (int i_6 = 2; i_6 < 15; i_6 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3 + 3] [i_0] [i_3 + 2]))));
                        var_28 = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]);
                        var_29 = ((/* implicit */short) (((+(11853673361071040920ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0])))));
                    }
                    arr_21 [i_0] [i_0] = ((/* implicit */int) var_7);
                    arr_22 [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0]);
                }
                for (unsigned long long int i_7 = 4; i_7 < 17; i_7 += 3) 
                {
                    arr_25 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) 1)) - (arr_14 [i_0] [i_1] [i_7] [i_0] [i_7])));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        var_30 &= ((/* implicit */short) ((((/* implicit */_Bool) 4095U)) ? (1632162530) : (559623636)));
                        arr_29 [i_0] [i_1] [i_7] [i_1] [i_1] [i_0] = ((((unsigned int) arr_19 [i_0])) & (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
                        var_31 = ((/* implicit */long long int) arr_7 [i_0]);
                        var_32 = ((/* implicit */short) ((unsigned long long int) 4294963200U));
                        var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(3804630421U))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        arr_33 [i_0] [13ULL] [i_7 - 1] [(_Bool)1] = ((/* implicit */unsigned short) arr_23 [i_7 - 3] [i_7 - 3] [i_7 + 1] [i_7 - 2]);
                        arr_34 [i_0] [i_1] [(short)7] [i_9] = ((/* implicit */int) arr_15 [i_7 - 1]);
                        var_34 *= ((/* implicit */_Bool) var_3);
                        var_35 += ((/* implicit */unsigned char) var_8);
                        var_36 = min((min((var_9), (((/* implicit */int) arr_11 [i_0] [i_1] [i_0])))), (((/* implicit */int) ((short) ((((/* implicit */int) (signed char)-3)) & (((/* implicit */int) var_4)))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 18; i_10 += 4) /* same iter space */
                    {
                        var_37 = arr_31 [i_10] [i_7 - 1] [i_1] [8LL];
                        arr_37 [i_0] [i_0] = ((/* implicit */unsigned char) arr_11 [i_0] [i_7 - 4] [(signed char)4]);
                    }
                    for (int i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                    {
                        arr_41 [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) -1961141375))))));
                        var_38 = ((/* implicit */int) var_12);
                        var_39 ^= ((/* implicit */short) ((((((/* implicit */_Bool) arr_24 [i_7 - 3] [i_1] [i_7 - 2] [i_1])) ? (arr_14 [i_7 - 3] [i_1] [i_7] [i_11] [i_7 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) >= (((/* implicit */unsigned int) arr_31 [i_7 + 1] [(_Bool)1] [i_7 + 1] [i_11]))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        var_40 = ((int) ((long long int) 5182652348476714570LL));
                        var_41 = (-(var_3));
                    }
                    for (long long int i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        arr_46 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 14516107529791901660ULL))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_0]), (arr_7 [i_0]))))) : (var_3)))) ? (((/* implicit */long long int) (~(arr_43 [i_7 - 4])))) : ((-(max((8455000853832201171LL), (9223372036854775807LL))))));
                        arr_47 [i_0] [(unsigned short)12] [(short)4] [i_0] = ((/* implicit */unsigned int) (+(((10830325138335798011ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13362)))))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (short i_15 = 0; i_15 < 18; i_15 += 4) 
                        {
                            arr_53 [i_0] [i_1] [i_7 - 2] [i_14] [i_15] [i_1] [12LL] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])) & (((((/* implicit */unsigned long long int) 3290629420U)) - (0ULL))))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_50 [(signed char)10] [i_0] [(signed char)10] [i_0] [i_0])))))))));
                            arr_54 [i_0] [i_1] [(short)13] [i_14] [i_15] = (i_0 % 2 == 0) ? (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((arr_0 [12] [i_15]) + (2147483647))) << (((((arr_2 [i_0] [i_15]) + (3719826524624814237LL))) - (19LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)17453)) && (((/* implicit */_Bool) arr_14 [(unsigned short)5] [(unsigned short)12] [(_Bool)1] [i_0] [i_15]))))))))))) : (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((arr_0 [12] [i_15]) + (2147483647))) << (((((((arr_2 [i_0] [i_15]) + (3719826524624814237LL))) - (19LL))) - (5508527115600085754LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)17453)) && (((/* implicit */_Bool) arr_14 [(unsigned short)5] [(unsigned short)12] [(_Bool)1] [i_0] [i_15])))))))))));
                            var_42 = ((/* implicit */signed char) ((unsigned int) arr_40 [i_7 - 1] [i_7] [i_0] [i_7] [i_7 - 3]));
                            var_43 &= ((/* implicit */unsigned char) ((3155614894049359758ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_55 [i_0] [i_0] [i_7 + 1] [i_14] [i_15] = (+(arr_49 [i_0] [16U] [16U] [i_14]));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            var_44 = ((/* implicit */int) (short)0);
                            var_45 = ((/* implicit */unsigned long long int) 8117168707200722799LL);
                            var_46 = ((/* implicit */signed char) max((((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)45993)))))))), (arr_51 [i_0] [i_0] [i_0] [1] [i_0])));
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            var_47 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) >> ((((+(arr_26 [i_0] [i_1] [0LL] [i_14]))) - (240172121)))));
                            arr_60 [i_0] [i_1] [i_0] [i_7] [i_7] [i_17] [i_17] = ((/* implicit */signed char) ((((18446744073709551610ULL) - (2695954467785349035ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [i_0])))));
                            arr_61 [i_17] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */_Bool) ((int) arr_19 [i_0]));
                        }
                        for (long long int i_18 = 0; i_18 < 18; i_18 += 3) 
                        {
                            arr_64 [i_0] [i_1] [i_7] [i_0] [i_7] = ((unsigned short) var_10);
                            arr_65 [i_0] [i_0] [i_18] = ((/* implicit */short) arr_5 [i_18] [i_0] [i_0]);
                            arr_66 [14LL] [14LL] [(short)17] [i_14] [i_14] [i_0] = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0]);
                            var_48 *= ((/* implicit */signed char) max((-591395877), (-1732252920)));
                            var_49 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_1])) >= (((((/* implicit */int) arr_19 [i_14])) % (((/* implicit */int) arr_4 [i_7 + 1] [i_1] [i_7 - 1]))))));
                        }
                        arr_67 [i_0] [i_7] [i_1] [i_0] = ((unsigned int) 17185388035703513263ULL);
                        var_50 &= ((/* implicit */unsigned short) ((arr_2 [i_1] [i_7 + 1]) | (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                        var_51 = ((/* implicit */_Bool) ((unsigned int) (+(-1046350689))));
                    }
                    for (signed char i_19 = 0; i_19 < 18; i_19 += 2) 
                    {
                        var_52 = ((long long int) (unsigned short)45993);
                        var_53 = ((/* implicit */unsigned int) (~((((!(((/* implicit */_Bool) var_14)))) ? (arr_31 [i_0] [(short)5] [i_7 - 2] [i_7 - 4]) : (((/* implicit */int) var_2))))));
                        var_54 -= ((/* implicit */_Bool) var_4);
                        arr_71 [i_0] [i_1] [i_7 - 3] = ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_36 [i_0] [i_0] [i_1] [i_7 - 3] [i_19])), (2478604658U)))) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])) : ((-(17185388035703513237ULL))))) << (((/* implicit */int) ((((/* implicit */long long int) 429452012U)) != (0LL))))));
                    }
                }
            }
        } 
    } 
    var_55 = ((/* implicit */unsigned int) var_2);
}
