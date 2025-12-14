/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117514
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        arr_10 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_0])) ? (arr_8 [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_0] [i_0] [i_0])))));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_0] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_11 [i_3 + 2] [i_0] [i_3] [i_3] [i_3 + 1])) : (((((/* implicit */_Bool) 13190068375339190940ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3]))) : (13190068375339190940ULL)))));
                            var_13 = ((/* implicit */long long int) arr_1 [i_0]);
                            arr_14 [i_0] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3 + 1] [17LL])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-34))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)15)) && (((/* implicit */_Bool) arr_0 [i_0] [2])))))) : (arr_9 [i_0] [i_0] [i_2] [i_3] [i_4])));
                            arr_15 [i_0] [i_3] [i_3] [(unsigned char)22] [i_1 - 2] [i_1 - 2] [i_0] = ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3] [i_4]);
                        }
                        for (long long int i_5 = 3; i_5 < 23; i_5 += 2) 
                        {
                            var_14 *= ((/* implicit */unsigned int) (-((~(4ULL)))));
                            arr_18 [i_0] [i_0] [i_0] [(unsigned char)21] [i_0] [i_3] [i_5 - 1] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_3]))) / (arr_17 [i_2] [i_3]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_3 + 1])) || (((/* implicit */_Bool) (unsigned char)119))))))));
                            arr_19 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (+(arr_12 [i_3 + 1] [i_3] [i_0] [i_3 - 1] [i_3])));
                            var_15 += ((/* implicit */unsigned char) ((int) arr_17 [i_3 + 1] [i_0]));
                            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 5256675698370360675ULL))));
                        }
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            arr_23 [i_0] [i_1] = var_9;
                            arr_24 [i_3] [i_1] [i_2 + 4] [i_0] [i_0] = ((/* implicit */int) arr_7 [i_2 + 3] [i_0] [i_3] [i_3]);
                            var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_6]))) : (5256675698370360675ULL))) - (((/* implicit */unsigned long long int) arr_11 [i_2] [i_0] [i_1] [i_0] [i_0]))));
                            var_18 = (((+(((/* implicit */int) (unsigned char)91)))) ^ (((int) arr_12 [i_2 + 4] [(signed char)2] [i_0] [(_Bool)1] [(signed char)2])));
                            arr_25 [i_0] = ((/* implicit */short) arr_6 [i_1 + 1] [i_0]);
                        }
                    }
                    for (unsigned short i_7 = 2; i_7 < 24; i_7 += 2) 
                    {
                        var_19 *= ((/* implicit */signed char) arr_26 [i_7] [i_7] [i_2] [i_7] [i_0]);
                        arr_30 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (-(((var_0) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_2])))))));
                        arr_31 [i_0] [i_1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */long long int) ((unsigned long long int) max((arr_28 [i_0] [i_2 - 1] [i_2] [i_1] [i_0] [i_0]), (((/* implicit */long long int) arr_20 [i_0] [i_2 + 4] [i_2] [i_7] [i_2])))));
                    }
                    for (short i_8 = 1; i_8 < 21; i_8 += 4) 
                    {
                        var_20 = ((/* implicit */short) arr_4 [i_0]);
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_0])))) || (((/* implicit */_Bool) max((((/* implicit */long long int) ((_Bool) (signed char)-94))), (arr_28 [i_9] [i_9] [i_8 + 2] [14ULL] [(short)11] [i_0]))))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), ((unsigned char)91)));
                            arr_37 [i_0] [i_0] [i_2] [i_8] [i_9] = ((/* implicit */signed char) arr_2 [i_0]);
                            var_23 += ((/* implicit */short) ((var_4) >> (((((((/* implicit */_Bool) ((long long int) arr_35 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_0]))) ? (max((((/* implicit */unsigned long long int) 789706213596011729LL)), (5256675698370360675ULL))) : (min((((/* implicit */unsigned long long int) -1)), (14110442465981409294ULL))))) - (5256675698370360614ULL)))));
                        }
                        arr_38 [i_0] [i_1] [i_2] [i_8] = ((/* implicit */int) var_8);
                    }
                    var_24 = ((_Bool) ((unsigned char) arr_11 [i_0] [i_0] [i_1 + 1] [i_2 + 3] [i_0]));
                    arr_39 [i_1] [i_1 + 1] [i_0] = ((/* implicit */short) (unsigned char)245);
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_8 [i_0] [(unsigned short)8]))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        for (short i_12 = 0; i_12 < 25; i_12 += 2) 
                        {
                            {
                                arr_47 [i_0] [i_0] = ((/* implicit */int) ((arr_35 [i_1 + 1] [i_1 - 2] [i_0] [i_1] [i_1 - 2]) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_11] [i_12])) ? (((/* implicit */int) (short)-14059)) : (((/* implicit */int) var_12)))))));
                                arr_48 [i_0] [i_1 - 1] [i_10] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(arr_20 [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1])));
                                arr_49 [i_0] [i_1 - 2] [i_0] [i_0] [i_12] [i_1 - 2] = ((/* implicit */int) ((short) ((unsigned int) 16597923092372089498ULL)));
                                var_26 ^= ((/* implicit */long long int) var_7);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_13 = 4; i_13 < 23; i_13 += 2) 
                    {
                        arr_53 [i_13] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_13] [i_1 - 2] [i_13 - 4] [i_13 - 1] [i_13])) ? (1323160476U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_10] [i_1 - 1] [i_13 + 1] [i_13 + 1] [i_13])))));
                        /* LoopSeq 3 */
                        for (int i_14 = 0; i_14 < 25; i_14 += 4) 
                        {
                            var_27 *= ((/* implicit */_Bool) ((unsigned int) (signed char)(-127 - 1)));
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1 - 3] [i_0] [i_10] [i_13] [i_13])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_0] [i_0] [i_10] [i_13 - 4] [i_14]))) : (arr_51 [i_14] [i_10] [i_0] [i_0]))) : (((/* implicit */unsigned int) 799042654))));
                        }
                        for (unsigned long long int i_15 = 2; i_15 < 22; i_15 += 3) 
                        {
                            var_29 = ((/* implicit */_Bool) var_5);
                            arr_60 [i_15] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_55 [i_10] [i_10] [i_0] [i_13 - 2] [i_13])) ? (5660855092410966715ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
                            arr_61 [(short)18] [i_1 - 1] [i_1] [i_0] [i_1] [i_1] [i_1 - 3] = ((/* implicit */unsigned char) var_1);
                            var_30 -= ((/* implicit */unsigned short) ((int) (short)15255));
                        }
                        for (long long int i_16 = 3; i_16 < 24; i_16 += 3) 
                        {
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_13 - 3] [i_1 - 3] [i_10] [i_16 - 2])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-7065))))) : (((arr_44 [i_0] [i_0] [i_10] [i_13]) ^ (((/* implicit */unsigned long long int) arr_32 [i_13] [i_0] [i_10] [i_10]))))));
                            var_32 = ((/* implicit */short) var_12);
                            arr_65 [i_0] [i_1 + 1] [i_10] [i_13] [i_0] [i_1 - 1] = ((/* implicit */signed char) ((unsigned char) -5038307170333110004LL));
                            arr_66 [i_0] [14ULL] [14ULL] [i_13] [i_13] |= ((/* implicit */int) 915292163U);
                        }
                    }
                    for (unsigned long long int i_17 = 1; i_17 < 23; i_17 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 4) 
                        {
                            var_33 = ((((/* implicit */_Bool) 2971806808U)) ? (((/* implicit */int) arr_6 [i_18] [i_18])) : (((/* implicit */int) arr_70 [i_0] [i_1] [(short)20] [i_10])));
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (((var_4) + (((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        }
                        for (int i_19 = 0; i_19 < 25; i_19 += 2) 
                        {
                            var_35 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)12)) & (((/* implicit */int) (unsigned char)246))));
                            var_36 = ((/* implicit */int) ((var_2) && (((/* implicit */_Bool) arr_28 [9U] [i_0] [i_17] [i_17] [i_17 + 2] [i_17]))));
                            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_42 [i_0] [i_1] [i_10] [i_0]))));
                            var_38 = ((/* implicit */unsigned short) (~(arr_67 [i_0] [i_1 - 2] [i_1] [i_1] [i_0])));
                        }
                        for (unsigned int i_20 = 0; i_20 < 25; i_20 += 3) 
                        {
                            arr_76 [i_0] [i_1] [i_10] [i_0] = ((/* implicit */unsigned char) var_7);
                            arr_77 [i_0] [i_1] [i_10] [i_17] [i_20] &= ((/* implicit */signed char) (~(((/* implicit */int) (short)-6))));
                            arr_78 [i_0] [i_1 - 3] [i_0] [i_17 + 2] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1 + 1] [i_0] [i_17 + 1])) ? (arr_11 [i_1] [i_0] [i_1 + 1] [i_10] [i_17 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_0])))));
                        }
                        arr_79 [i_0] [3] [i_0] = (unsigned char)182;
                    }
                    for (short i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        arr_82 [i_0] [i_0] [i_0] [i_21] = ((/* implicit */signed char) 560075652831212989LL);
                        var_39 = ((/* implicit */unsigned char) ((int) arr_5 [i_0] [i_0]));
                    }
                    arr_83 [i_0] [i_1 - 3] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_62 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 + 1]))));
                    arr_84 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-4402)) + (501345021)))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_0] [i_1 + 1] [i_1] [i_0]))) % (arr_64 [i_0] [i_1] [i_0])))));
                }
                arr_85 [i_0] [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_70 [i_1] [i_1] [i_1 + 1] [i_0]))))));
                arr_86 [i_0] [i_1 - 1] = ((/* implicit */unsigned short) 3967232055224162264ULL);
            }
        } 
    } 
    var_40 = (-(max((((/* implicit */unsigned int) max((var_6), (var_12)))), (var_8))));
    var_41 = ((/* implicit */unsigned long long int) var_3);
    var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (max((max((((/* implicit */unsigned long long int) var_12)), (var_4))), ((~(5256675698370360675ULL))))) : (((/* implicit */unsigned long long int) (+(((unsigned int) (unsigned char)78))))))))));
    var_43 = ((/* implicit */unsigned int) var_4);
}
