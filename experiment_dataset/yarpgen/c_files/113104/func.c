/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113104
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((((/* implicit */int) var_11)) + (2147483647))) << (((2118737958U) - (2118737958U))))) << (((((long long int) var_1)) - (20319LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((short) -1654023183))))) : (((/* implicit */int) ((_Bool) max((var_2), (var_13)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_16 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0] [i_1]), (var_2)))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])) ? (8404864450611927016ULL) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 3])))))))) ? (var_6) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_2 [i_1] [i_0] [i_0])), (306735312U))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    arr_6 [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0 - 3] [i_0] [i_0 + 2] [i_0 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (((((_Bool)1) ? (744615838U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13120))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_4 [i_0 - 1] [i_1] [i_0 - 1] [i_2 - 3])))))))) : (((((/* implicit */_Bool) arr_4 [i_2 + 4] [i_0 - 3] [i_0 - 3] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 1] [i_2] [i_2 - 2] [i_0 - 3]))) : (arr_4 [i_2 + 4] [i_0 + 2] [i_0 + 4] [i_0 - 2])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_17 = ((unsigned int) min((arr_1 [i_1] [i_0 - 3]), (arr_1 [i_3] [i_0 + 2])));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) 2118737958U)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_2] [i_3])), (arr_8 [i_1] [i_2 + 4])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0 + 3] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) (short)31))))))))));
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_1 [i_1] [i_1])) & (((unsigned int) arr_2 [i_0] [i_1] [i_4]))))) ? (min((((unsigned int) var_8)), (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) * (3769098373U))))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_5 [i_0 + 4] [i_2 - 2] [(signed char)1] [i_4])) ? (-888111764) : (((/* implicit */int) (unsigned short)44035)))))))))));
                            var_19 = ((/* implicit */_Bool) min((var_19), ((_Bool)0)));
                            var_20 &= ((/* implicit */long long int) ((_Bool) ((unsigned long long int) max((((/* implicit */unsigned int) arr_7 [i_4])), (3465499041U)))));
                        }
                    }
                    var_21 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_11 [i_2] [i_2 - 1] [(signed char)3] [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 2])) - (arr_1 [i_0 - 3] [i_2 + 2]))));
                    var_22 |= ((/* implicit */unsigned int) var_3);
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 1; i_6 < 14; i_6 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_7 = 1; i_7 < 14; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */int) var_11);
                            var_24 = ((/* implicit */short) arr_9 [i_0 + 4] [i_1] [i_5]);
                            var_25 = ((unsigned int) arr_11 [i_0] [i_0] [i_0] [i_6 + 2] [i_6 + 2] [i_6 - 1] [i_6]);
                            arr_24 [i_5] [i_6 + 1] [i_5] [(short)9] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_7 [i_0 - 3]))));
                            var_26 = ((/* implicit */unsigned int) min((var_26), (((arr_22 [i_0]) << (((arr_22 [i_0]) - (1736555364U)))))));
                        }
                        for (unsigned short i_8 = 1; i_8 < 15; i_8 += 2) 
                        {
                            var_27 &= ((((((/* implicit */_Bool) arr_23 [i_5] [i_1] [i_5] [i_6] [i_8 - 1])) && (arr_26 [i_5]))) ? (((/* implicit */unsigned int) arr_21 [i_6])) : (((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0 - 1] [i_5] [i_6 - 1] [i_8])) ? (arr_23 [i_0] [i_1] [i_5] [i_6] [i_8 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 - 4] [i_0 - 4]))))));
                            var_28 &= ((/* implicit */_Bool) ((unsigned int) arr_1 [i_6 + 1] [i_1]));
                            var_29 |= ((/* implicit */short) ((((((/* implicit */int) arr_19 [i_1] [i_1] [i_0] [i_0])) != (((/* implicit */int) arr_2 [i_1] [i_5] [i_5])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_8])) || (((/* implicit */_Bool) 16440721105181790469ULL))))) : (((/* implicit */int) arr_11 [i_0 - 2] [i_0 + 2] [i_6 + 1] [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_8 - 1]))));
                            arr_27 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_8 + 1] [i_6 - 1] [i_5] [3])) ? (arr_10 [i_5] [i_5] [12ULL] [12ULL] [i_1]) : (((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_6 - 1] [(_Bool)1] [i_1] [i_0 - 4])))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0 + 4] [i_1] [i_0] [i_0]))) % (arr_23 [i_1] [i_6 + 1] [i_5] [i_1] [i_0])))))));
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0 + 3])) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)7640)) ? (((/* implicit */int) var_2)) : (arr_1 [i_6 + 1] [(short)4])))))))));
                            arr_30 [i_0] [i_1] [i_0 + 3] [i_0 + 3] [i_1] [i_5] = ((/* implicit */unsigned int) arr_2 [i_9] [i_5] [i_1]);
                            arr_31 [i_0] [i_1] [i_1] [i_1] &= ((/* implicit */signed char) arr_19 [(_Bool)1] [i_0] [i_0] [i_1]);
                        }
                        for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) arr_29 [i_0] [i_0 - 1] [i_0] [i_5] [i_5] [i_6 + 1] [i_10]))))))));
                            arr_35 [i_1] [i_1] [i_5] [i_5] [i_10] = ((/* implicit */signed char) arr_23 [i_0] [i_0] [i_5] [i_5] [i_0]);
                        }
                        arr_36 [0U] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) ((_Bool) arr_19 [i_0] [i_1] [i_0] [i_6 + 2]));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        arr_39 [i_11] [i_0] [i_0] [i_0 + 2] |= ((/* implicit */unsigned int) ((short) arr_16 [i_0] [i_0] [i_0] [i_11 + 1]));
                        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((arr_23 [i_11 + 1] [i_11 + 1] [i_11] [i_11] [i_11]) == (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                        /* LoopSeq 2 */
                        for (short i_12 = 2; i_12 < 14; i_12 += 4) 
                        {
                            var_34 += ((/* implicit */unsigned int) arr_9 [i_11 + 1] [i_0 - 1] [i_12 - 2]);
                            arr_42 [i_5] [i_11] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_0] [i_0 + 2] [i_0 + 4] [i_5] [i_0 + 4])) ? (((/* implicit */int) arr_18 [i_5])) : (((/* implicit */int) arr_18 [i_5]))));
                        }
                        for (short i_13 = 0; i_13 < 16; i_13 += 2) 
                        {
                            arr_45 [i_1] [i_5] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) -1)) ? (arr_29 [i_1] [i_1] [i_5] [i_1] [(unsigned char)14] [i_1] [i_1]) : (((/* implicit */long long int) arr_32 [i_13] [i_5] [i_5] [i_5] [i_0])))));
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_13] [i_13] [i_0] [i_11] [i_0] [i_11 + 1] [i_11 + 1])) ? (((/* implicit */int) arr_43 [i_13] [i_11 + 1] [i_11 + 1] [i_0 + 1] [i_0])) : (((((/* implicit */_Bool) (short)9671)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) var_2)))))))));
                        }
                        var_36 ^= ((((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_0])) - (((/* implicit */int) (signed char)-100))))) / (arr_20 [i_0] [i_0] [i_0] [i_5] [i_11]));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 0; i_15 < 16; i_15 += 4) 
                        {
                            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_13 [i_5] [i_0])))) ? (((/* implicit */long long int) arr_23 [i_0] [i_0 + 4] [i_0 + 3] [i_5] [i_14])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_5] [i_1]))) : (arr_29 [i_0] [i_0 + 1] [i_15] [i_0] [i_0] [i_0 + 1] [i_0]))))))));
                            arr_51 [i_5] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_44 [i_15] [i_14] [i_14] [i_5] [6] [i_0 - 2]))))) ? ((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [0LL] [i_14] [i_15] [i_15])))) : (((/* implicit */int) arr_5 [i_0 - 4] [i_5] [i_14] [i_15])));
                        }
                        var_38 += ((/* implicit */signed char) ((_Bool) arr_20 [i_0 + 2] [i_0 - 4] [i_0 - 2] [i_0 + 2] [i_5]));
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 4; i_16 < 15; i_16 += 2) 
                        {
                            var_39 &= ((/* implicit */short) arr_41 [i_0] [4LL] [i_1] [i_5] [i_14] [i_0] [i_16]);
                            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_16 - 4] [i_16 - 3])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0 + 1] [i_14])) : (var_9)));
                        }
                        /* LoopSeq 1 */
                        for (int i_17 = 2; i_17 < 15; i_17 += 3) 
                        {
                            arr_56 [i_0] [i_5] [i_5] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_14] [i_14])) ? (arr_33 [i_14] [(signed char)7] [i_17 + 1] [i_17 + 1] [(unsigned short)3] [i_5]) : (((/* implicit */unsigned int) 1352265449))))) ? (426341125U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10)))));
                            var_41 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0]))) * (var_8)))) ? (((/* implicit */int) var_14)) : (arr_37 [i_1] [i_1] [i_1] [i_0] [i_1])));
                            var_42 = ((/* implicit */unsigned long long int) ((short) arr_13 [i_17 - 1] [i_5]));
                            var_43 = ((/* implicit */_Bool) var_3);
                            arr_57 [i_0] [i_0] [i_5] [i_5] [i_14] [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_1] [i_17 - 2] [0U] [i_5] [i_5] [i_1] [i_0 + 1])) ? (((/* implicit */int) arr_43 [i_0 + 3] [i_0 - 1] [i_0 - 2] [i_0 + 4] [i_0 + 1])) : (((/* implicit */int) ((arr_16 [i_0] [i_5] [i_0] [i_0]) && (((/* implicit */_Bool) (short)24556)))))));
                        }
                        var_44 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_49 [i_0 - 3])) ? (var_7) : (arr_28 [i_1] [i_1]))) << (((/* implicit */int) ((_Bool) arr_26 [i_5])))));
                    }
                }
            }
        } 
    } 
    var_45 = ((/* implicit */signed char) var_4);
}
