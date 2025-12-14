/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162142
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
    var_12 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~((~(((/* implicit */int) var_6))))))), (((((/* implicit */_Bool) (+(-88727154)))) ? (((((/* implicit */_Bool) -8049539901531324067LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-8049539901531324047LL))) : (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_2)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_3 [(short)7] = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_7 [i_0] [i_1] = ((/* implicit */signed char) var_2);
            var_13 ^= ((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) ((((/* implicit */int) (short)-6103)) <= (var_4))))));
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (var_8) : (((/* implicit */int) arr_4 [i_0] [i_0]))));
        }
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_12 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_1 [i_0] [i_0])));
            var_15 = ((/* implicit */signed char) arr_11 [(unsigned char)15] [i_2] [i_2]);
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                var_16 = ((/* implicit */unsigned long long int) 4106065318U);
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 17; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) (+(8049539901531324073LL)));
                            var_18 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_4] [i_4 - 1] [i_4 - 1] [i_5])) == (((/* implicit */int) arr_16 [(signed char)8] [i_3] [i_4 - 1] [i_5]))));
                            arr_20 [1LL] [i_2] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_0] [i_2] [i_3] [i_4]))));
                            var_19 = ((/* implicit */signed char) -364428551822614330LL);
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned int) -1347960927)) >= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141))) : (var_3))))))));
                arr_21 [i_3] [i_3] [3U] = ((/* implicit */long long int) (+((~(((/* implicit */int) (unsigned short)39497))))));
            }
            for (unsigned char i_6 = 3; i_6 < 18; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_29 [i_0] [10U] [10LL] [(short)4] [i_0] &= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_11))))));
                        var_21 &= ((/* implicit */long long int) (unsigned char)99);
                        var_22 &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)126)) % (1559198060)));
                    }
                    for (int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        arr_33 [(unsigned char)11] [i_6] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
                        arr_34 [(_Bool)1] [i_7] [i_6] [(unsigned char)16] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)74))) >= (2991831668434436109LL)));
                        var_23 *= ((/* implicit */signed char) (+(((long long int) arr_15 [i_6] [(unsigned short)5] [i_6] [i_7]))));
                    }
                    for (int i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        var_24 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-59)) % (((/* implicit */int) (unsigned char)36)))) - ((-(((/* implicit */int) (unsigned short)25070))))));
                        var_25 *= (-(arr_8 [i_6 - 2]));
                    }
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), ((-(12615608521447345965ULL)))));
                    arr_37 [i_7] [i_6] [i_6] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_16 [i_6 - 1] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_32 [16] [i_0] [i_6] [(unsigned short)17] [11ULL] [i_0]))));
                }
                /* LoopSeq 4 */
                for (long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    arr_41 [(_Bool)1] [i_6] [i_6] [i_6] [(_Bool)0] = ((/* implicit */unsigned int) var_2);
                    arr_42 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25402)) ? (5017080304475443428ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [(unsigned char)18] [i_6] [17LL] [i_0])))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (8049539901531324067LL)))) : (((/* implicit */int) arr_9 [i_0] [i_6 + 1] [i_6]))));
                }
                for (unsigned int i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    var_27 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_6 - 3] [i_2] [i_6])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14))) : (arr_1 [i_2] [i_12]))) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_6 - 2])))));
                    var_28 += ((/* implicit */int) ((unsigned long long int) ((3919661411U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39479))))));
                    arr_45 [i_6] [i_2] = arr_13 [i_0] [13] [(unsigned short)17];
                }
                for (unsigned char i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    arr_49 [i_0] [i_0] [(unsigned char)16] [(signed char)8] [i_0] [i_0] &= ((/* implicit */signed char) (-(((/* implicit */int) arr_16 [i_0] [i_2] [i_6] [i_6 - 3]))));
                    var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_36 [i_0] [i_2] [i_2] [i_6] [i_13])))) ? (((/* implicit */int) ((var_11) && (((/* implicit */_Bool) 1185628582))))) : (var_4))))));
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_1)) ? (1022567736698813363ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52012))))))))));
                }
                for (unsigned short i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    arr_53 [i_0] [i_6] [i_0] [(_Bool)1] = ((/* implicit */long long int) (+((~(((/* implicit */int) var_7))))));
                    arr_54 [i_6] = ((/* implicit */int) (unsigned short)51840);
                    var_31 = ((/* implicit */long long int) 13429663769234108206ULL);
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_22 [i_0] [i_2] [i_6 - 1])))))));
                }
                arr_55 [13U] [i_2] [i_6] = ((/* implicit */long long int) (-(arr_36 [i_0] [12ULL] [i_0] [(_Bool)1] [i_0])));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 19; i_15 += 4) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_48 [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6 - 3] [i_6 - 1]))));
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (!(((2175507362225210941LL) == (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
                            var_35 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) (signed char)-21))) % ((~(7868946551826053840ULL)))));
                            var_36 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_6 - 1] [(signed char)4] [i_6] [i_6 + 1] [i_15])) ? (((/* implicit */int) ((arr_28 [i_6] [i_15]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0])))))) : (((((/* implicit */_Bool) arr_28 [i_0] [i_15])) ? (((/* implicit */int) (_Bool)1)) : (1462030376)))));
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_17 = 0; i_17 < 19; i_17 += 3) 
        {
            arr_62 [i_17] [i_17] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_44 [i_0] [i_17] [i_17] [i_17] [i_17] [i_0]))));
            var_37 = (-((-(arr_57 [i_0] [(signed char)10] [(unsigned short)12] [8] [i_17] [6U]))));
        }
        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
        {
            var_38 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)2407)) % (var_8)));
            var_39 = ((/* implicit */unsigned short) (+(arr_59 [i_18 - 1] [i_18 - 1] [i_18 - 1])));
            var_40 += ((/* implicit */int) var_5);
        }
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) /* same iter space */
        {
            arr_68 [i_0] = ((/* implicit */short) 1574401094U);
            arr_69 [i_0] = ((/* implicit */unsigned int) (+(arr_27 [(unsigned char)10] [(unsigned char)12] [i_19 - 1])));
            arr_70 [i_0] [i_19] = ((/* implicit */short) (-(arr_15 [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 1])));
            arr_71 [i_19 - 1] [i_19] &= ((/* implicit */unsigned char) ((arr_36 [i_0] [i_0] [i_19] [i_19] [(unsigned char)13]) >> (((/* implicit */int) arr_52 [i_19 - 1] [i_19 - 1] [(unsigned short)14] [i_19 - 1] [i_19 - 1] [i_19 - 1]))));
        }
        /* LoopSeq 1 */
        for (long long int i_20 = 0; i_20 < 19; i_20 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_21 = 1; i_21 < 18; i_21 += 1) 
            {
                arr_77 [i_0] [i_20] [i_21] = ((/* implicit */signed char) -8049539901531324081LL);
                arr_78 [i_0] [i_21] = ((/* implicit */signed char) (_Bool)1);
            }
            for (unsigned short i_22 = 0; i_22 < 19; i_22 += 2) 
            {
                /* LoopSeq 3 */
                for (signed char i_23 = 0; i_23 < 19; i_23 += 1) 
                {
                    var_41 = ((/* implicit */int) (-(7868946551826053854ULL)));
                    var_42 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14248509228002481944ULL)) ? (-1961000955) : (((/* implicit */int) (unsigned char)64))));
                    var_43 = ((/* implicit */long long int) ((unsigned long long int) (+(2273979339269905505LL))));
                }
                for (int i_24 = 4; i_24 < 17; i_24 += 2) 
                {
                    var_44 = ((/* implicit */unsigned short) ((_Bool) var_0));
                    var_45 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [7LL] [i_20] [i_20] [i_20] [i_20])))))) ? (((((/* implicit */int) var_10)) | (((/* implicit */int) var_10)))) : (((/* implicit */int) (unsigned char)139))));
                    arr_88 [i_0] [(signed char)6] [(short)6] [(unsigned short)15] [8ULL] = ((/* implicit */_Bool) arr_35 [i_22] [i_22] [(signed char)3] [i_22] [i_22] [i_22]);
                    var_46 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_74 [i_24 - 2] [i_24] [i_24] [i_22]))));
                }
                for (unsigned short i_25 = 1; i_25 < 16; i_25 += 4) 
                {
                    arr_93 [i_20] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_22] [i_25 + 2] [i_22] [i_25])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) 8049539901531324096LL)) ? (((/* implicit */unsigned long long int) 1961000945)) : (13655217926479407159ULL)))));
                    var_47 += var_9;
                    var_48 = ((/* implicit */unsigned short) ((arr_59 [i_25 + 2] [i_25 + 3] [i_25 - 1]) >> (((((/* implicit */int) arr_85 [i_25 + 1] [i_22] [i_20] [i_0] [15LL])) - (51)))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_26 = 0; i_26 < 19; i_26 += 2) 
                {
                    for (unsigned char i_27 = 0; i_27 < 19; i_27 += 1) 
                    {
                        {
                            arr_99 [i_0] [i_20] [i_22] = ((/* implicit */unsigned int) (+(((((/* implicit */int) (short)16714)) % (((/* implicit */int) var_0))))));
                            var_49 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_20] [i_20] [(short)4])) || (((/* implicit */_Bool) (short)16714)))))));
                            var_50 -= ((/* implicit */int) var_11);
                        }
                    } 
                } 
            }
            var_51 = ((/* implicit */signed char) (-((-(arr_63 [i_20])))));
        }
    }
    var_52 ^= ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))))) & (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (((unsigned short) 1094227276571324720ULL)))))));
}
