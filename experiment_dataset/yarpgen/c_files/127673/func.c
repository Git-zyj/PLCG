/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127673
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) ((unsigned long long int) 3450686584945993809LL)))) & (((/* implicit */int) arr_3 [(signed char)1] [(_Bool)1]))));
                var_15 = ((/* implicit */int) ((arr_3 [i_0] [i_1]) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) == (arr_2 [(short)0] [(unsigned short)15])))) ^ (((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1])))))) : (((((/* implicit */_Bool) max((-1182902216), (((/* implicit */int) arr_5 [4LL] [13U] [i_1]))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (0U)))) : (7465474062842743974LL)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */long long int) arr_5 [i_0] [17LL] [i_0]);
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_0] [2U] = ((/* implicit */short) max((((((/* implicit */unsigned long long int) (+(1182902215)))) - (min((((/* implicit */unsigned long long int) (short)10971)), (18446744073709551602ULL))))), (((/* implicit */unsigned long long int) 4128089594U))));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18425)) ? (((/* implicit */unsigned long long int) -1391240574773744927LL)) : (5229804933004349273ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [(unsigned short)21] [(_Bool)1]))))) : (((2878743567U) << (((((/* implicit */int) (signed char)54)) - (39)))))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        arr_17 [i_4] [i_4] [i_2] = ((/* implicit */int) (+(((((/* implicit */_Bool) (signed char)32)) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1])))))));
                        arr_18 [i_4] = ((/* implicit */_Bool) ((unsigned long long int) min((932350435U), (((/* implicit */unsigned int) 1182902215)))));
                    }
                    for (unsigned short i_5 = 2; i_5 < 22; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            arr_24 [i_5] [i_1] [i_2] [(signed char)23] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_9 [i_0] [i_5])), (2195287758448206601ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-53)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)27476))) : (((long long int) ((((/* implicit */_Bool) 5822098075358180384LL)) ? (14198099017613789272ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_5])))))));
                            var_17 = ((/* implicit */unsigned long long int) (-(-1366512475013856921LL)));
                            var_18 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)-16248)), ((unsigned short)0)))), (((arr_14 [i_6] [i_1] [i_2] [i_1] [(_Bool)1]) ? (arr_16 [i_0] [i_1] [i_1] [i_5] [i_6]) : (((/* implicit */unsigned long long int) 1182902207))))));
                        }
                        arr_25 [i_0] [i_0] [(unsigned short)8] [(_Bool)1] [i_2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5 - 1])) ? (5102049756041704948ULL) : (arr_0 [i_5 + 1])))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (short)12671)) | (((/* implicit */int) (short)32748))))))) : (max((((((/* implicit */_Bool) (signed char)68)) ? (16251456315261345014ULL) : (6419367616635812874ULL))), (((/* implicit */unsigned long long int) ((11615075949300119501ULL) >= (2362165837538978217ULL))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [11] [i_1])) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_2] [11LL]))))) ? (((/* implicit */int) arr_9 [i_0] [i_1])) : (((/* implicit */int) arr_23 [i_0] [i_5 - 1] [i_5] [i_5] [18U] [i_7] [(_Bool)1])))) : (((((/* implicit */int) arr_23 [i_0] [i_1] [i_5] [(_Bool)1] [i_2] [i_5 + 1] [i_7])) + (((/* implicit */int) arr_23 [i_0] [i_1] [i_5] [i_2] [i_5 + 1] [i_7] [i_7]))))));
                            arr_30 [i_5] = max((((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_5] [(signed char)11] [i_5] [i_5 + 2]))))), (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_22 [i_0] [i_1] [i_2] [i_5] [i_7])))) - (min((((/* implicit */long long int) arr_19 [i_0] [i_1] [i_5] [(_Bool)1])), (2919954808570673444LL))))));
                            var_20 = min(((signed char)-115), ((signed char)-107));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_5 - 1] [i_7] [i_7] [14U]))))) != ((+(((((/* implicit */_Bool) arr_27 [i_0] [6LL] [(unsigned char)22] [i_1] [i_5] [(short)20])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-2919954808570673445LL))))))))));
                        }
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            arr_33 [i_0] [i_0] [i_5] [(unsigned short)16] [1U] [i_0] = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0]);
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_20 [12U] [i_5 - 2] [i_5] [i_5 + 2] [i_5 + 1] [i_5 + 1]))))) ? (((/* implicit */int) (!(arr_3 [i_5 - 1] [i_5 - 2])))) : (((int) arr_21 [(_Bool)1] [i_1] [23] [20LL] [i_5]))));
                            var_23 = ((/* implicit */unsigned long long int) (+(((2919954808570673444LL) / (((/* implicit */long long int) ((/* implicit */int) arr_11 [15] [14ULL] [i_5 - 2] [1])))))));
                            var_24 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (min((((/* implicit */unsigned long long int) arr_6 [5ULL] [0ULL] [i_2] [i_5])), (18446744073709289472ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1391240574773744937LL)) ? (((/* implicit */int) arr_1 [1U])) : (((/* implicit */int) (signed char)-115))))), (0U))))));
                        }
                        for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 1391240574773744955LL)), (720450071877844301ULL))))));
                            arr_36 [i_5] [i_1] = ((/* implicit */short) ((((unsigned long long int) (+(2552335236U)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_7 [i_2] [i_0]))))));
                            arr_37 [(unsigned char)2] [11LL] [i_5] [i_1] [i_0] = arr_7 [i_2] [i_0];
                            arr_38 [i_5] [(signed char)12] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62472)) ? (-4773297014665926540LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))) ? ((+(((long long int) var_0)))) : (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) arr_1 [i_2])), ((short)252)))))))));
                        }
                    }
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        var_26 -= ((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_1] [22U] [i_10] [i_1]);
                        var_27 = ((/* implicit */_Bool) min((2919954808570673444LL), (min((((((/* implicit */long long int) ((/* implicit */int) arr_7 [9LL] [i_0]))) ^ (arr_22 [i_0] [i_1] [i_2] [i_10] [i_10]))), (((/* implicit */long long int) ((_Bool) arr_20 [i_0] [i_1] [i_1] [i_2] [i_2] [i_10])))))));
                    }
                    arr_41 [i_0] [(unsigned char)7] [i_0] = ((/* implicit */long long int) (!((_Bool)0)));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        for (short i_12 = 2; i_12 < 21; i_12 += 1) 
                        {
                            {
                                arr_47 [(unsigned char)10] [i_0] [i_1] [i_2] [i_11] [i_12] = ((/* implicit */unsigned short) (~(((((((/* implicit */int) var_4)) << (((-7348398683225544213LL) + (7348398683225544213LL))))) ^ (((/* implicit */int) min((arr_3 [i_1] [i_11]), (arr_14 [i_0] [i_11] [i_2] [i_11] [i_12]))))))));
                                var_28 = ((/* implicit */long long int) min((var_28), (min((-8612114051493673542LL), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)1))))) ? (min((-8612114051493673544LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) (+(-1329980097))))))))));
                                arr_48 [i_11] [i_2] [i_11] [i_12] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_5)) && ((_Bool)0))))))) - (((((/* implicit */_Bool) -1976860087)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))) : (4391088695381862816ULL))));
                            }
                        } 
                    } 
                }
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_14 = 0; i_14 < 24; i_14 += 3) /* same iter space */
                    {
                        var_29 = arr_27 [i_0] [(short)10] [i_1] [i_1] [i_13] [(unsigned short)8];
                        var_30 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), ((+(min((-26LL), (((/* implicit */long long int) var_9))))))));
                        arr_55 [13U] [i_14] [i_13] [20U] [i_0] = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_1] [i_0]))))));
                    }
                    for (long long int i_15 = 0; i_15 < 24; i_15 += 3) /* same iter space */
                    {
                        var_31 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) var_6)), (min((((12586128070021535696ULL) & (arr_16 [i_0] [12LL] [i_1] [(short)16] [i_15]))), (((((/* implicit */_Bool) (unsigned char)252)) ? (arr_34 [(unsigned char)22] [i_1] [i_1] [18LL] [i_15] [i_1] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3063)))))))));
                        arr_58 [i_15] [(unsigned char)15] [i_13] [i_15] = ((/* implicit */unsigned char) arr_27 [i_0] [i_0] [i_13] [i_15] [i_0] [i_13 - 1]);
                    }
                    for (long long int i_16 = 0; i_16 < 24; i_16 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_17 = 3; i_17 < 22; i_17 += 3) /* same iter space */
                        {
                            var_32 = ((/* implicit */long long int) (unsigned short)51152);
                            arr_63 [15ULL] [i_1] [i_16] [i_16] [(signed char)5] = ((/* implicit */unsigned long long int) ((((((((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) (unsigned short)65534)))) * (((/* implicit */int) arr_40 [i_16])))) + (2147483647))) << ((((-(min((arr_52 [i_0] [i_1] [i_13] [i_13] [9LL] [(short)2]), (((/* implicit */int) arr_19 [i_16] [i_16] [i_16] [i_0])))))) - (1555875828)))));
                        }
                        for (unsigned long long int i_18 = 3; i_18 < 22; i_18 += 3) /* same iter space */
                        {
                            var_33 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_23 [i_0] [i_13 - 1] [i_1] [i_16] [(unsigned short)8] [i_13] [(signed char)10]))))), (10279787592926990951ULL)));
                            var_34 *= ((/* implicit */short) ((unsigned long long int) (+(((/* implicit */int) arr_44 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1])))));
                            var_35 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) max((arr_4 [(unsigned short)13] [i_16]), (((/* implicit */unsigned int) 1655961644))))) && (((/* implicit */_Bool) min((4172349752U), (((/* implicit */unsigned int) arr_64 [i_0] [i_0] [i_0] [i_16] [i_0])))))))));
                            var_36 = ((/* implicit */unsigned char) arr_26 [i_0] [i_0] [i_0] [i_16]);
                        }
                        arr_66 [i_16] [i_16] [i_16] [i_0] = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_13 - 1]))) + (11722759648311819167ULL))));
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_13] [i_13 - 1])) || (((/* implicit */_Bool) arr_7 [i_1] [i_13 - 1])))))) ^ ((-(min((10950421655399981746ULL), (((/* implicit */unsigned long long int) (short)32758))))))));
                        arr_67 [i_16] [11LL] [i_13] [1U] = ((/* implicit */long long int) (~((~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-5)), ((unsigned short)58542))))))));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((int) (short)-27620)) ^ (((/* implicit */int) ((((/* implicit */int) arr_60 [i_0] [i_1] [i_13] [(short)9])) >= (((/* implicit */int) (unsigned short)58542)))))))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) ((((/* implicit */_Bool) ((var_5) | (((/* implicit */long long int) ((/* implicit */int) (short)27619)))))) || (((17437092006349953389ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [16LL]))))))))));
                    }
                    var_39 = (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [(signed char)1] [i_1] [i_13])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)179)))))) ^ (min((0ULL), (((/* implicit */unsigned long long int) (short)-27624)))))));
                    var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) -212445597)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50730))) : (2472065583812715015ULL)));
                    arr_68 [(_Bool)1] [i_1] [(short)20] = ((/* implicit */unsigned char) (~(((((/* implicit */int) min((((/* implicit */short) (unsigned char)125)), ((short)30341)))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned char)75)) > (((/* implicit */int) arr_31 [i_0] [i_1] [i_1] [i_13] [i_13] [i_13])))))))));
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 1) 
                    {
                        for (unsigned long long int i_21 = 2; i_21 < 20; i_21 += 1) 
                        {
                            {
                                var_41 -= ((/* implicit */signed char) (_Bool)1);
                                var_42 = max(((-(17ULL))), (((/* implicit */unsigned long long int) (unsigned short)0)));
                            }
                        } 
                    } 
                    var_43 -= ((((/* implicit */unsigned long long int) arr_50 [11LL])) * (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_64 [i_0] [14LL] [i_1] [i_1] [i_19])) ? (((/* implicit */int) var_12)) : (2147483647)))) : (((unsigned long long int) 14881590893993614529ULL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 1; i_22 < 22; i_22 += 1) 
                    {
                        for (unsigned long long int i_23 = 2; i_23 < 20; i_23 += 1) 
                        {
                            {
                                var_44 *= (((!(((/* implicit */_Bool) 9025945705071615098LL)))) ? (max((min((14881590893993614518ULL), (((/* implicit */unsigned long long int) (unsigned char)53)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)128))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [(unsigned short)8] [i_22] [(unsigned short)0]))));
                                var_45 = ((unsigned short) arr_31 [i_0] [i_19] [i_19] [i_22 + 2] [i_23 - 1] [i_1]);
                                arr_80 [i_0] [i_19] [i_1] [11ULL] [i_22] [i_22] [23ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_0] [i_0] [i_19] [i_0] [i_0])) ? (((/* implicit */int) arr_51 [i_0])) : (((/* implicit */int) (unsigned char)132))))) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (8166956480782560664ULL))))));
                                var_46 -= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_1] [i_1])), (arr_5 [(short)13] [i_1] [i_19])))) >= (((((/* implicit */_Bool) 11693254928259986392ULL)) ? (((/* implicit */int) arr_79 [i_0] [i_1] [16U] [i_1] [i_22] [i_23])) : (((/* implicit */int) arr_6 [i_23] [(unsigned char)22] [i_19] [16ULL])))))))));
                            }
                        } 
                    } 
                }
                arr_81 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (short)-30342))))) >> (((-7580707601142608724LL) + (7580707601142608745LL))))) <= (((/* implicit */int) arr_9 [i_0] [i_1]))));
            }
        } 
    } 
    var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_4))) ? (var_5) : ((+(((((/* implicit */_Bool) 0LL)) ? (9223372036854775807LL) : (-7050602634806724231LL)))))));
}
