/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18476
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
    var_13 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_14 = (short)-25181;
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((unsigned int) (short)-25199));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 3) 
                            {
                                var_16 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)211)) * (((/* implicit */int) (unsigned char)33)))) >= (((/* implicit */int) (unsigned char)167))));
                                var_17 = ((/* implicit */long long int) ((((unsigned int) 196400227U)) << (((-298967804) + (298967813)))));
                                var_18 = ((/* implicit */int) (short)1157);
                            }
                            /* LoopSeq 3 */
                            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_1])) >> (((var_5) + (1896078015)))));
                                var_20 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)70))))))) + (((((/* implicit */long long int) ((/* implicit */int) (signed char)95))) + (var_1)))));
                                var_21 = ((/* implicit */_Bool) ((signed char) ((unsigned short) ((((/* implicit */int) (short)8542)) ^ (((/* implicit */int) (short)12839))))));
                                var_22 = ((/* implicit */_Bool) (short)-14810);
                            }
                            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                            {
                                var_23 |= ((/* implicit */unsigned char) var_7);
                                arr_21 [i_2] [i_1] [i_2] [8U] [i_6] [i_0] = ((/* implicit */long long int) arr_3 [i_1]);
                            }
                            for (unsigned char i_7 = 3; i_7 < 8; i_7 += 2) 
                            {
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) min(((~(((unsigned int) (unsigned short)556)))), (((/* implicit */unsigned int) var_3)))))));
                                var_25 = ((/* implicit */unsigned short) ((min((min((arr_1 [i_0] [i_7]), (((/* implicit */int) (short)15652)))), (((/* implicit */int) arr_3 [i_2])))) & (((/* implicit */int) (short)-17092))));
                                var_26 = ((/* implicit */int) (~(arr_17 [i_1] [3])));
                                var_27 ^= ((/* implicit */int) 2508925291U);
                            }
                            var_28 = ((/* implicit */unsigned int) -1375202080);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_9 = 1; i_9 < 8; i_9 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)23062))) <= (196400227U))))));
                            arr_31 [(_Bool)1] [i_1] [i_1] [(_Bool)1] [6ULL] [(short)8] &= ((/* implicit */short) ((((/* implicit */_Bool) ((3794077572691938107LL) << (((((/* implicit */int) (unsigned char)197)) - (196)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((_Bool) (unsigned char)229))) >= (((/* implicit */int) ((((/* implicit */int) (short)-15653)) > (((/* implicit */int) (unsigned short)44715))))))))) : (min(((+(var_4))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)34508)) - (((/* implicit */int) arr_19 [i_8] [i_1] [i_8] [i_8] [i_10])))))))));
                        }
                        for (short i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) min((((arr_34 [i_0] [i_0] [i_1] [i_1] [i_9 - 1] [i_11] [i_11]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_19 [i_0] [i_1] [i_8] [i_9] [i_11])))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_1] [i_0])), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28488))) + (8176465900516292924LL)))))))))));
                            arr_35 [i_0] [i_0] [i_1] [i_11] [i_8] [i_9 + 3] [i_1] &= ((/* implicit */unsigned char) min((1493722557), (((/* implicit */int) var_10))));
                            var_31 *= ((/* implicit */short) arr_3 [i_0]);
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-25181)) / (((/* implicit */int) (signed char)-103))));
                        }
                        var_33 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)222)) ? (((((/* implicit */_Bool) arr_10 [i_9 + 1] [i_1] [i_8] [i_9])) ? (((/* implicit */int) arr_10 [i_9 + 1] [i_1] [i_9 + 1] [i_9])) : (((/* implicit */int) arr_10 [i_9 + 3] [i_1] [i_8] [i_9])))) : ((-(((/* implicit */int) (unsigned char)229))))));
                        var_34 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1572139233U)) ? (((/* implicit */int) (unsigned short)44024)) : (((/* implicit */int) (signed char)-120))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 6421641740151391377ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_8]))) : (var_1)))))))));
                    }
                    var_35 = ((/* implicit */short) (unsigned char)223);
                    var_36 = ((/* implicit */unsigned char) max((var_36), ((unsigned char)58)));
                }
                for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
                {
                    var_37 *= ((/* implicit */unsigned char) min((min((min((-191281570), (((/* implicit */int) (unsigned char)122)))), (((/* implicit */int) (short)26567)))), (((arr_24 [i_12] [i_12] [i_12] [i_12]) / (arr_24 [i_12] [i_1] [i_0] [i_0])))));
                    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)78)))))) : (min((var_9), (((/* implicit */long long int) ((short) (signed char)25)))))));
                    var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) arr_37 [i_1] [i_12]))));
                    arr_39 [(unsigned char)10] [3] [i_12] [i_12] |= ((/* implicit */unsigned char) 1071597024029533336LL);
                }
                for (unsigned long long int i_13 = 1; i_13 < 7; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_14 = 1; i_14 < 7; i_14 += 1) 
                    {
                        arr_46 [i_0] [i_14] [i_13] [i_14] = ((/* implicit */unsigned char) arr_30 [i_0] [i_1] [i_14] [(unsigned char)4] [i_13]);
                        var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) min((((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) var_7)))), ((!(((/* implicit */_Bool) 1572139233U))))))), (((((((/* implicit */_Bool) arr_37 [i_0] [i_1])) && (((/* implicit */_Bool) arr_17 [i_13] [i_14])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)48017), (((/* implicit */unsigned short) var_2)))))) : (((((/* implicit */_Bool) 2739058021U)) ? (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) : (1572139233U))))))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 3) 
                        {
                            arr_50 [i_13] [i_14] [i_15] = ((/* implicit */short) ((arr_36 [i_14]) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)14)) <= (((/* implicit */int) (unsigned char)18))))))))));
                            var_41 = ((/* implicit */unsigned short) arr_24 [i_0] [i_0] [i_0] [(unsigned short)0]);
                        }
                        for (long long int i_16 = 0; i_16 < 11; i_16 += 1) 
                        {
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)214)) & (((/* implicit */int) (_Bool)1))));
                            var_43 |= ((/* implicit */unsigned char) (((~((~(((/* implicit */int) (unsigned char)26)))))) | (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (-8424762730356031044LL)))) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) : (((/* implicit */int) (unsigned char)201))))));
                        }
                        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((12257386833601955075ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                    }
                    for (unsigned short i_17 = 3; i_17 < 10; i_17 += 2) 
                    {
                        var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_13 + 1] [i_0]))));
                        arr_57 [i_17] [i_0] [(unsigned short)7] [i_0] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1574848903)) ? (8299630992992083174ULL) : (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) ((signed char) ((var_12) % (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_13] [5LL]))))))) : (((/* implicit */int) ((((/* implicit */int) (short)15499)) > (-1524115537))))));
                    }
                    var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25180)) ? (arr_20 [i_0] [i_0] [i_1] [i_13 + 2] [i_13 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                    arr_58 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-8871)) + (((/* implicit */int) (short)28164)))) & (min((((/* implicit */int) (unsigned char)139)), (arr_41 [i_0] [i_0] [i_1] [i_13])))))) ^ (((12160716223771545849ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            }
        } 
    } 
}
