/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125940
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
    var_10 += ((/* implicit */int) max(((((!(((/* implicit */_Bool) 5450030316990689074ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((~(var_8))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (5450030316990689074ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned char)10)))))) : (min((var_1), (((/* implicit */unsigned int) var_9))))))));
    var_11 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), (((unsigned long long int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)35783))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) min((max((((4294967287U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) ((_Bool) 4294967274U))))), (((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_4))))), ((short)32763)))))))));
                        var_13 = min((((/* implicit */long long int) (!(arr_4 [i_0] [i_1])))), (min((((/* implicit */long long int) min((((/* implicit */short) (signed char)-116)), ((short)-32766)))), (min((((/* implicit */long long int) -470330620)), (var_7))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_4 = 1; i_4 < 15; i_4 += 3) 
                        {
                            arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)2)) ? (4035894474U) : (arr_3 [i_4 + 2] [i_1] [i_2])));
                            arr_12 [16LL] [2] [i_2] [i_1] [16LL] &= ((/* implicit */long long int) (signed char)0);
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 1; i_5 < 14; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1)))))));
                            var_15 = ((/* implicit */unsigned long long int) 948030705U);
                            var_16 += ((/* implicit */unsigned short) ((unsigned char) (~(259072815U))));
                            var_17 = ((/* implicit */unsigned int) arr_5 [i_5] [i_3] [i_1]);
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned short) 14U);
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned char) var_5)))));
                            arr_18 [i_6] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) (+(arr_3 [i_6] [i_1] [i_0])));
                        }
                        var_20 ^= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) -518665019)) : (var_1))) ^ (((unsigned int) var_5))))) ? (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_1)))) ? ((~(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)16022)) && (((/* implicit */_Bool) (signed char)1)))))))) : (max((((((/* implicit */_Bool) 12996713756718862542ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7548))) : (922705503U))), (((/* implicit */unsigned int) (signed char)-9)))));
                        var_21 = (((((+(8U))) / (var_8))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)7944))))) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) ((2802469323U) >= (var_1))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_7 = 2; i_7 < 16; i_7 += 3) 
        {
            var_22 = ((/* implicit */int) (unsigned char)24);
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) % (max((((/* implicit */unsigned int) (unsigned short)7968)), (191845149U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_3))));
        }
        for (unsigned long long int i_8 = 2; i_8 < 15; i_8 += 3) 
        {
            arr_24 [i_0] [i_0] [i_8] = ((/* implicit */short) var_9);
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) -1152921504606846976LL))));
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (short)16016))))), (12996713756718862541ULL))))));
            }
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned char) (_Bool)1)), (((/* implicit */unsigned char) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27677))) : ((~((~(2305131301137937177ULL)))))));
        }
    }
    for (short i_10 = 0; i_10 < 13; i_10 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_11 = 4; i_11 < 11; i_11 += 4) 
        {
            for (long long int i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                for (short i_13 = 1; i_13 < 12; i_13 += 3) 
                {
                    {
                        arr_37 [i_10] [2ULL] [i_10] [i_13] [i_12] [i_11 - 3] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31382)) ? (3197861519U) : (((/* implicit */unsigned int) arr_32 [i_10] [i_10]))))) || (((/* implicit */_Bool) -7535773774328893178LL)))))));
                        arr_38 [i_10] [i_11 - 4] [i_12] [i_12] [i_13] [i_13] = ((/* implicit */unsigned short) -1449689652618946023LL);
                        var_28 = ((/* implicit */unsigned char) (+((+(((((/* implicit */int) (_Bool)1)) >> (((var_7) - (4636858980511070183LL)))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            var_29 = ((/* implicit */int) var_1);
                            var_30 = ((/* implicit */unsigned short) var_5);
                            var_31 = ((/* implicit */unsigned short) min((max((var_1), (((/* implicit */unsigned int) ((unsigned short) (unsigned short)37867))))), (var_1)));
                            var_32 = ((((/* implicit */_Bool) (-(((/* implicit */int) (short)7940))))) ? (((((/* implicit */_Bool) -7535773774328893192LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_13 + 1] [i_13 + 1] [(short)5] [i_13] [i_13] [i_13])))))));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_5)), ((unsigned char)110)))) ? (((/* implicit */int) arr_27 [i_10] [i_10])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) (_Bool)0))))))))) : (var_1)));
                        }
                        for (int i_15 = 1; i_15 < 9; i_15 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((_Bool) (~(144115187807420416ULL))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)-32736)) ^ (((/* implicit */int) (short)-1)))))))))));
                            var_35 += ((/* implicit */int) (short)-16013);
                            arr_44 [i_10] [9ULL] [i_10] = ((/* implicit */unsigned short) var_2);
                            arr_45 [i_15] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_10] [i_10])) && (((/* implicit */_Bool) 1064580551)))) ? (((((/* implicit */_Bool) ((signed char) arr_8 [i_10] [i_11] [i_12] [i_13]))) ? (((/* implicit */long long int) ((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : ((-(3777284634944211972LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_10] [i_10])))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 13; i_16 += 1) 
                        {
                            var_36 = ((/* implicit */int) (-(((((/* implicit */long long int) arr_46 [i_11] [i_13 + 1] [i_12] [i_13] [i_11])) % (arr_17 [i_10] [i_13 - 1] [i_12] [8LL] [13ULL] [i_11 + 2])))));
                            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (9303303418358938092ULL))))))), ((~(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_12] [i_13]))) % (7535773774328893193LL))))))))));
                            var_38 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) -7535773774328893193LL))) | (((((/* implicit */_Bool) arr_2 [i_11] [i_13 - 1] [i_11])) ? (((/* implicit */int) arr_2 [i_12] [i_13 - 1] [i_12])) : (((/* implicit */int) (signed char)82))))));
                            arr_49 [(signed char)11] [i_13] [i_10] [i_11] [i_10] = var_1;
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_17 = 2; i_17 < 12; i_17 += 3) 
        {
            for (unsigned long long int i_18 = 2; i_18 < 12; i_18 += 1) 
            {
                for (unsigned int i_19 = 0; i_19 < 13; i_19 += 4) 
                {
                    {
                        var_39 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)34726))));
                        var_40 = ((/* implicit */unsigned long long int) var_2);
                        var_41 = ((/* implicit */short) max((var_41), (arr_43 [i_10] [i_17] [i_17] [i_18] [i_19])));
                        /* LoopSeq 4 */
                        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                        {
                            var_42 = ((/* implicit */int) max((((arr_35 [i_17 - 1] [i_17] [i_17 - 2] [i_18 - 1] [i_18] [i_20 - 1]) ? (4103122146U) : (arr_7 [i_17 + 1] [i_17 - 2] [i_17 - 2] [0U] [i_18 + 1] [i_20]))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)246)))))));
                            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) -1319473661))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_23 [i_10] [(unsigned short)7]))))) : (var_4)));
                            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)29063)) ? (((/* implicit */int) arr_2 [i_10] [i_10] [i_10])) : (((/* implicit */int) (_Bool)1))))), (var_1)))) ? ((~((~(268435455ULL))))) : (((/* implicit */unsigned long long int) 599822805))));
                        }
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_45 = ((/* implicit */int) ((((((/* implicit */_Bool) (-(var_7)))) && ((_Bool)1))) ? (((/* implicit */unsigned int) 175364417)) : ((-(4103122152U)))));
                            var_46 ^= ((/* implicit */long long int) ((short) max((((/* implicit */long long int) arr_53 [i_19] [i_19])), (2284751225407315414LL))));
                            arr_62 [i_10] [i_17] [i_10] [i_19] [i_10] = (-(min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (var_7))));
                            var_47 = ((/* implicit */unsigned short) ((unsigned int) -2));
                            var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_36 [i_17 - 1] [i_17 - 2] [i_17 + 1] [i_17] [i_18 + 1])))) && (((/* implicit */_Bool) ((unsigned char) (signed char)80)))));
                        }
                        for (int i_22 = 0; i_22 < 13; i_22 += 3) 
                        {
                            var_49 = ((/* implicit */_Bool) var_4);
                            arr_67 [i_17 + 1] [i_10] [i_18 - 1] [i_19] [i_17 + 1] [i_18 + 1] [i_17] = var_0;
                        }
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) (unsigned short)33396))), (var_1)))) ? (((((/* implicit */_Bool) arr_63 [7U] [i_17] [i_18 - 2] [i_19] [6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4103122147U))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))) & (4294967295U)))));
                            var_51 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_0))))));
                            var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_66 [i_10] [i_18] [i_18 - 2] [i_17 - 2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -8766253007740113449LL)) && (((/* implicit */_Bool) (unsigned char)255))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) < (var_8))))));
                            var_53 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)15160)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (5240687654701364008LL)))));
                        }
                        var_54 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (arr_56 [i_17] [i_10] [i_17] [i_17 - 1]))))));
                    }
                } 
            } 
        } 
    }
}
