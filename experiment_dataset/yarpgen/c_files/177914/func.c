/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177914
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_1]))))) ? (((/* implicit */int) arr_7 [10] [i_1])) : (((/* implicit */int) ((_Bool) arr_4 [i_0] [i_1] [i_0])))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((arr_7 [i_0] [i_1]) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0])) - (((/* implicit */int) arr_5 [i_1]))))))))));
                var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (13914998689046186725ULL) : (((/* implicit */unsigned long long int) var_16))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)146)), ((short)-19972))))) : (var_9)))));
                arr_9 [i_0] [i_0] [i_0] &= var_15;
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = (!(((/* implicit */_Bool) arr_5 [i_0])));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_20 [i_4 - 1] [i_3] [i_3] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((max((arr_3 [i_0]), (((/* implicit */unsigned long long int) (signed char)0)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)19972)) : (((/* implicit */int) arr_11 [i_4 + 1] [i_4] [(short)0] [i_4])))))))) ? (((/* implicit */unsigned long long int) var_3)) : (arr_15 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4 + 2])));
                                var_21 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) % (max((arr_3 [i_4 + 1]), (((/* implicit */unsigned long long int) 262143U))))));
                                arr_21 [i_1] [i_1] [i_1] [i_3] [i_4] &= ((/* implicit */unsigned char) max((((/* implicit */int) (short)19972)), (arr_17 [i_0] [(signed char)21] [(short)5] [i_3] [i_4] [(signed char)20] [i_2])));
                                arr_22 [i_0] [i_0] [i_2] [(unsigned char)3] [(unsigned char)3] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_5)) << (((((unsigned int) arr_11 [i_4 - 1] [i_2] [20U] [i_0])) - (49U)))));
                                var_22 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) (short)-19987))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) arr_7 [i_0] [i_1]);
                    var_24 = max((((/* implicit */int) max((((/* implicit */short) arr_7 [i_1] [i_0])), ((short)20008)))), (var_13));
                }
                for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 4) /* same iter space */
                    {
                        arr_29 [i_0] [i_1] [(signed char)14] [i_6] [i_5] [i_6 + 1] = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */int) (short)19985)) : (((/* implicit */int) (signed char)17)))) < (((((/* implicit */_Bool) arr_19 [i_0] [i_6 - 1] [i_0] [i_6] [(unsigned char)8])) ? (var_3) : (arr_12 [i_0] [i_6 - 1] [i_0] [(_Bool)1] [i_1])))));
                        var_25 = ((/* implicit */unsigned long long int) var_0);
                        arr_30 [2] [i_1] [8ULL] [i_6 - 2] [i_1] [i_1] = ((/* implicit */unsigned int) ((signed char) var_10));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            var_26 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_31 [i_1] [i_8] [(signed char)9] [(signed char)9] [i_1] [(signed char)9])), (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (max((arr_18 [i_7] [i_1] [i_0] [i_7]), (((/* implicit */unsigned int) -2147483637)))))))));
                            var_27 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) ((signed char) arr_2 [i_7]))), (((((/* implicit */_Bool) var_12)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19976))))))), (((/* implicit */unsigned int) arr_10 [i_8] [i_8] [i_5] [i_7]))));
                            arr_37 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) var_14);
                        }
                        for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */short) arr_11 [i_0] [i_1] [i_0] [i_1]);
                            arr_40 [i_0] [i_1] [i_5] [i_7] [i_7 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) << (((((/* implicit */int) ((unsigned short) var_5))) - (66)))))) % (arr_15 [i_0] [(short)7] [i_5] [i_5] [i_7 - 2] [i_7 + 1])));
                            var_29 = ((/* implicit */unsigned int) max((arr_15 [i_0] [17] [i_5] [(signed char)5] [i_9] [i_7]), (((/* implicit */unsigned long long int) arr_25 [i_0] [i_1] [8U] [i_9]))));
                        }
                        for (signed char i_10 = 3; i_10 < 20; i_10 += 1) 
                        {
                            arr_44 [(signed char)8] [i_1] [i_5] [i_7] [i_10] = ((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_10]);
                            var_30 = ((/* implicit */unsigned int) arr_15 [20ULL] [i_7] [i_5] [i_7 - 2] [3U] [i_10]);
                        }
                        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            var_31 = ((/* implicit */int) max((arr_15 [i_11] [i_11] [i_1] [i_5] [i_1] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_10 [i_0] [i_1] [i_5] [i_7]), (((/* implicit */short) var_6))))) ? (var_14) : (((/* implicit */unsigned int) ((arr_17 [i_0] [i_0] [i_1] [i_5] [12ULL] [i_1] [i_5]) / (-13359559)))))))));
                            var_32 = ((/* implicit */_Bool) arr_41 [i_7 - 2] [i_7 - 1] [i_11] [i_7 - 2] [i_11]);
                        }
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_5] [(short)2])) + (((((/* implicit */_Bool) arr_17 [i_7 + 1] [i_7 + 1] [i_7] [i_7] [i_7 - 2] [i_7] [i_7 + 1])) ? (((/* implicit */int) arr_25 [i_0] [i_1] [i_5] [i_7])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                        var_34 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-120)) && ((_Bool)1))) ? (arr_36 [i_1] [i_1] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                    }
                    for (short i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        var_35 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_12] [i_0] [i_1])) ? (var_16) : (var_9)))) ? (((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (short)-20003)) : (((/* implicit */int) (unsigned char)161)))) : ((+(((/* implicit */int) var_12)))))), (((/* implicit */int) arr_11 [i_12] [i_1] [i_1] [13U]))));
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */int) arr_14 [i_1])), (var_3))), ((~(((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)19976)))))) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (int i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned int) (signed char)-89);
                        var_38 = ((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */short) var_8)), ((short)20022)))), (((((/* implicit */int) arr_25 [i_0] [i_1] [i_5] [i_5])) - (arr_12 [i_0] [i_1] [i_5] [i_13] [(_Bool)1])))));
                    }
                    var_39 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_1] [i_0]))) + (var_16))));
                }
                for (unsigned short i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    var_40 = ((/* implicit */short) var_16);
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        for (signed char i_16 = 1; i_16 < 21; i_16 += 1) 
                        {
                            {
                                var_41 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (signed char)8)) || (((/* implicit */_Bool) var_8)))));
                                var_42 ^= ((/* implicit */short) ((unsigned int) (short)-23694));
                                var_43 = ((/* implicit */_Bool) ((unsigned int) ((short) arr_43 [i_1] [i_14] [i_16 + 1] [i_16] [i_16] [i_16])));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (signed char i_17 = 0; i_17 < 22; i_17 += 3) /* same iter space */
                    {
                        var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)4)))))));
                        var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) var_10))));
                        var_46 = ((/* implicit */short) var_6);
                        arr_62 [i_0] [(signed char)20] [i_14] [10ULL] = ((/* implicit */short) arr_49 [i_17] [i_14] [i_1] [i_0]);
                    }
                    for (signed char i_18 = 0; i_18 < 22; i_18 += 3) /* same iter space */
                    {
                        var_47 = ((/* implicit */_Bool) arr_5 [i_0]);
                        arr_65 [i_0] [i_1] [i_14] [i_14] [(unsigned short)4] = ((/* implicit */unsigned char) min((25ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_58 [i_0] [i_0] [i_18] [i_18] [i_18] [(short)11])) : (((((/* implicit */_Bool) arr_49 [i_0] [i_1] [i_14] [i_18])) ? (((/* implicit */int) arr_24 [i_0] [i_0])) : (((/* implicit */int) arr_10 [(short)18] [i_1] [0] [i_14])))))))));
                    }
                    for (signed char i_19 = 0; i_19 < 22; i_19 += 3) /* same iter space */
                    {
                        var_48 = ((/* implicit */int) max((((arr_50 [i_0] [i_0] [i_1] [i_14] [i_19]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)20033)) ? (arr_17 [i_0] [i_1] [i_14] [i_19] [i_1] [i_0] [i_0]) : (var_15)))))), (((/* implicit */unsigned int) var_3))));
                        var_49 = ((unsigned int) min((((/* implicit */int) (short)-24957)), (((((/* implicit */_Bool) (short)-7121)) ? (((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_58 [i_0] [i_19] [i_14] [i_0] [i_1] [i_1]))))));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 4) 
                    {
                        arr_70 [i_0] [i_1] [i_14] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_49 [(short)19] [10U] [i_0] [3])) > (((/* implicit */int) var_1))));
                        var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) (((_Bool)0) ? (max((max((8987655884239289705ULL), (((/* implicit */unsigned long long int) (signed char)114)))), (((/* implicit */unsigned long long int) arr_58 [i_0] [i_1] [i_14] [i_14] [i_1] [i_0])))) : (((5811865361989776262ULL) << (((arr_27 [i_20] [i_1] [i_1] [i_20]) - (2631774784U))))))))));
                        var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_12 [(_Bool)1] [i_1] [i_14] [i_20] [(_Bool)1])) ? (max((((/* implicit */int) arr_42 [i_0] [i_0] [i_1] [i_1] [i_14] [i_14] [i_20])), (var_15))) : ((+(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_14] [(signed char)8] [i_0] [i_14])) && ((!(((/* implicit */_Bool) var_9)))))))));
                        arr_71 [i_20] [i_0] = ((/* implicit */unsigned long long int) max((var_11), (arr_23 [i_0] [i_0])));
                    }
                }
            }
        } 
    } 
    var_52 = (_Bool)1;
    var_53 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */short) var_4)), ((short)23694))), (((/* implicit */short) var_4))))) ? (((var_3) | (((/* implicit */int) var_6)))) : (((/* implicit */int) ((short) max((var_17), (((/* implicit */short) var_8))))))));
}
