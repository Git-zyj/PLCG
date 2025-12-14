/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131924
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
    var_17 -= ((/* implicit */unsigned long long int) (unsigned short)47327);
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))) : (((/* implicit */int) ((unsigned short) arr_1 [i_0]))));
        var_18 = ((((/* implicit */_Bool) 5471973209579834432ULL)) ? (-1095048222) : (((/* implicit */int) (short)2047)));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) -1095048222);
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        arr_14 [i_0] [i_1 - 1] [i_0] [i_3] = ((/* implicit */_Bool) (+(min((arr_4 [i_1 + 1] [i_2 + 1]), (arr_4 [i_0 - 1] [i_1 - 1])))));
                        var_19 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_8 [i_3])), (arr_1 [(short)12])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) && (((/* implicit */_Bool) -1095048205)))))))), ((-(max((arr_6 [i_1] [(short)4]), (((/* implicit */unsigned long long int) -1095048217))))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) min((((_Bool) (short)-11067)), ((!(((/* implicit */_Bool) arr_5 [i_0]))))))), ((+(-1549755682)))));
                        arr_18 [i_0] [i_1 + 1] [i_0] [i_4] [i_0] = arr_4 [i_1 + 1] [i_1 + 1];
                        arr_19 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) (+(9209796031603307073LL)));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 21; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_25 [i_1] [i_1] [i_0] [i_5] [i_1] = var_4;
                                var_21 ^= ((/* implicit */long long int) arr_16 [i_5] [i_5]);
                                var_22 = ((/* implicit */int) arr_6 [i_2 + 1] [i_6]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 1) 
                        {
                            {
                                arr_32 [18ULL] [18ULL] [i_0] [i_7] [18ULL] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_22 [i_7] [i_0] [i_7] [i_7] [i_7])))) : (((((/* implicit */unsigned long long int) var_2)) + (arr_29 [i_0 - 1] [i_1] [i_1] [i_1] [i_8 + 1])))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_31 [12] [(_Bool)1] [i_2] [i_7] [i_8])) && (((/* implicit */_Bool) arr_17 [i_0 - 2] [i_1] [i_2] [i_7] [19LL])))))))) : (min((((/* implicit */long long int) (short)2047)), (-4397872767664861150LL)))));
                                arr_33 [i_0] [i_0] [i_2] [i_0] [i_0] [i_2] [i_0 - 1] = ((/* implicit */_Bool) ((unsigned char) (+(((arr_9 [i_7] [i_2 - 1] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
                            }
                        } 
                    } 
                    arr_34 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_29 [17U] [i_1 - 1] [i_1 - 1] [i_1] [i_1]))) ? (((unsigned int) arr_12 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_0 + 2])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                    {
                        var_23 -= ((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_1] [i_1]);
                        var_24 = (-(((/* implicit */int) (!(arr_26 [i_0] [i_0])))));
                        arr_37 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -1LL))));
                        var_25 = ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0])) != (-1095048228)));
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)48234))))) : (3724844090U))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) arr_6 [i_0] [i_10]))));
                        arr_40 [i_0] [i_10] [i_0] = ((/* implicit */signed char) (~(min((arr_6 [i_10] [i_0]), (((/* implicit */unsigned long long int) 1095048221))))));
                        var_28 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_29 [i_2] [11] [i_2 - 1] [i_2] [i_10])))) && (((_Bool) 1095048214))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            arr_45 [i_10] [i_0] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 4266120570U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1086)))), (arr_41 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_11])));
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))))), (17ULL)))))));
                            var_30 = ((/* implicit */unsigned long long int) var_0);
                            var_31 = ((/* implicit */unsigned long long int) (((~(1483520131U))) | (((/* implicit */unsigned int) -14))));
                            var_32 = ((/* implicit */short) (~(max((arr_41 [i_0 - 2] [i_1] [i_0] [10ULL] [i_2 + 1]), (((/* implicit */int) ((short) var_2)))))));
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_33 -= ((/* implicit */short) arr_1 [i_10]);
                            arr_48 [i_0] [i_1 + 1] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)59163))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 4035907491U)))) : (((arr_21 [i_0] [i_0 - 4] [i_0 - 4] [i_0] [i_0] [i_0 - 3]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1] [i_1]))))))) ^ (((arr_1 [i_0]) ^ (arr_1 [i_0])))));
                            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) arr_5 [i_10]))));
                        }
                    }
                    for (signed char i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((long long int) max((((/* implicit */int) arr_7 [20ULL] [i_2 - 1])), ((+(((/* implicit */int) var_4))))))))));
                        arr_52 [i_0 - 4] [i_1] [i_0 - 4] [i_0] = ((/* implicit */unsigned char) max((((arr_1 [i_0]) % (arr_1 [i_0]))), (((/* implicit */unsigned int) max((1095048202), (((/* implicit */int) (signed char)-35)))))));
                    }
                }
            } 
        } 
    }
    for (long long int i_14 = 1; i_14 < 10; i_14 += 4) 
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            for (unsigned char i_16 = 0; i_16 < 14; i_16 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        arr_64 [i_15] = ((/* implicit */signed char) min(((+(((/* implicit */int) (signed char)108)))), ((-(((/* implicit */int) (unsigned short)47586))))));
                        var_36 = ((/* implicit */long long int) arr_30 [i_15]);
                    }
                    for (int i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_16] [i_18] [(unsigned short)2] [i_14 + 2])) && (((/* implicit */_Bool) 73871919U)))))));
                        var_38 = ((/* implicit */int) arr_36 [i_15]);
                        arr_68 [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (-4720310937437791726LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_14 + 4] [i_14 + 4] [i_14] [i_14 + 1] [i_16])) ? (((/* implicit */int) arr_31 [i_14] [i_14] [i_14 + 3] [i_14 + 4] [19U])) : (((/* implicit */int) arr_31 [i_14] [i_14] [i_14] [i_14 - 1] [i_16])))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_19 = 0; i_19 < 14; i_19 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned long long int) arr_11 [8] [i_14 + 1]);
                            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((unsigned char) 521462132)))));
                            var_41 = ((/* implicit */unsigned long long int) arr_27 [i_19] [i_18] [i_16] [i_16] [i_15] [7LL]);
                            arr_73 [i_15] [i_18] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned short) arr_26 [i_18] [i_16]);
                        }
                        for (int i_20 = 0; i_20 < 14; i_20 += 4) 
                        {
                            arr_76 [i_14 + 3] [i_15] [i_15] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min(((!(((/* implicit */_Bool) arr_54 [i_14])))), (((arr_9 [i_14] [i_16] [i_20]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_20])))))))), (arr_5 [i_15])));
                            arr_77 [i_14] [i_14] [i_16] [i_14] [i_14] [i_15] [i_14] = ((((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) 1095048208)), (arr_6 [i_15] [i_15]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [14] [14]))))))) + (arr_69 [i_20]));
                            var_42 = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) arr_60 [i_14 + 3] [i_14 + 2])));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_21 = 0; i_21 < 14; i_21 += 4) 
                    {
                        for (unsigned int i_22 = 0; i_22 < 14; i_22 += 1) 
                        {
                            {
                                var_43 += ((/* implicit */signed char) max((arr_74 [i_14] [i_14] [i_15] [i_16] [i_14] [i_21] [i_22]), (((/* implicit */long long int) arr_10 [i_14] [i_21] [i_14] [(_Bool)1]))));
                                arr_83 [i_22] [i_15] [i_16] [i_15] [(short)12] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_27 [i_22] [i_15] [i_22] [i_21] [i_22] [i_22])), ((-(min((((/* implicit */unsigned long long int) var_13)), (arr_4 [i_22] [i_14])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_84 [i_14] [i_14] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)1178))))), ((~(arr_72 [i_14] [0U] [i_14] [i_14 - 1] [i_14 + 3])))));
    }
}
