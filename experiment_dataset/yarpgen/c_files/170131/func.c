/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170131
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_0))));
                    /* LoopSeq 4 */
                    for (int i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)1);
                        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)30740)) ? (arr_2 [i_1]) : (((/* implicit */int) (signed char)97))))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (arr_3 [i_3]))))))))));
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) var_2)), (130944ULL))) == (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (((~(((/* implicit */int) arr_8 [15ULL] [(unsigned short)10] [5LL])))) - (((/* implicit */int) (signed char)-102)))))));
                        var_17 = ((/* implicit */signed char) (unsigned char)72);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_13 [18ULL] [18ULL] [i_2] [3U] [i_5]) : (((/* implicit */long long int) ((int) var_3)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 3; i_6 < 19; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (signed char)-108))));
                            var_19 = ((/* implicit */int) min((var_19), ((+(((((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_6] [i_6 - 2] [i_6 - 3])) - (((/* implicit */int) arr_15 [i_6] [i_6 - 2] [i_6] [17LL] [i_6 - 3] [i_6 + 1]))))))));
                        }
                        arr_22 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) 1073741824U));
                    }
                    for (unsigned char i_7 = 3; i_7 < 18; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (var_3))) == (((((/* implicit */int) var_6)) + (((/* implicit */int) var_9)))))))) : (18446744073709420668ULL))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)43297))))) ? (1472740360) : ((+(((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [(unsigned short)10] [i_7] [i_7 - 3] [i_2])))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((unsigned int) (-(2369424763U)))) != (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) arr_6 [i_0] [i_8])) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_8]))))))))))));
                            var_23 = ((/* implicit */unsigned short) 3923227120U);
                            arr_28 [i_0] = ((/* implicit */signed char) ((int) min(((unsigned short)22214), (((/* implicit */unsigned short) (signed char)-93)))));
                        }
                    }
                    var_24 = ((/* implicit */int) min((var_24), ((+(arr_2 [(_Bool)1])))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */int) arr_32 [i_2] [i_1] [i_2] [19U]);
                        arr_33 [0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11855)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) -2023944974)) ? (-2337892511224970632LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)98))))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2] [i_2])))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        arr_38 [(_Bool)1] [(short)7] [i_10] [i_10] = ((/* implicit */int) (_Bool)1);
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (((_Bool)1) ? (((18446744073709420668ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_1)) + (25963)))))))) : ((~(min((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL))))))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1492045794)) ? (((/* implicit */int) arr_19 [i_2] [i_2])) : ((+((~(((/* implicit */int) var_9)))))))))));
                        /* LoopSeq 2 */
                        for (signed char i_12 = 2; i_12 < 16; i_12 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((min((((/* implicit */unsigned int) -2147483644)), (528482304U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned char)4] [i_11] [8ULL] [i_11] [i_12 + 2]))))))));
                            var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) ^ (((/* implicit */unsigned long long int) arr_3 [i_12 + 2])))))));
                        }
                        for (signed char i_13 = 2; i_13 < 16; i_13 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned long long int) var_1);
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((~(arr_13 [(unsigned short)18] [i_13] [i_13 + 2] [3ULL] [i_13 - 1]))))))));
                            var_32 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_39 [i_0] [i_13 + 2]) ^ (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_32 [i_13 + 4] [i_11] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_8))))))))), (((min((((/* implicit */unsigned long long int) var_10)), (arr_12 [i_0] [(signed char)7]))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_11])))))))));
                        }
                    }
                    for (int i_14 = 1; i_14 < 17; i_14 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) 7658408389092139785ULL))));
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 4; i_15 < 19; i_15 += 3) 
                        {
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) arr_43 [i_2] [i_14] [i_14 + 3] [i_14] [i_15 + 1]))))) ? (((min((5078494694296522880ULL), (((/* implicit */unsigned long long int) (unsigned short)22214)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) > (((/* implicit */int) var_6)))))))) : (((/* implicit */unsigned long long int) var_3))));
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_0))))))));
                        }
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */int) ((2369424740U) > (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))) / (((((/* implicit */_Bool) (unsigned short)59371)) ? (((/* implicit */int) (unsigned char)216)) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                    arr_51 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (+(((int) ((var_3) == (((/* implicit */int) arr_27 [i_0] [i_0] [(short)7] [i_0] [i_1] [i_2] [i_1])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_16 = 3; i_16 < 20; i_16 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_17 = 0; i_17 < 24; i_17 += 1) 
        {
            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_56 [(short)2])))))));
            /* LoopSeq 2 */
            for (short i_18 = 3; i_18 < 22; i_18 += 2) 
            {
                var_38 = ((/* implicit */_Bool) max((var_38), (var_0)));
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 24; i_19 += 4) 
                {
                    for (unsigned char i_20 = 0; i_20 < 24; i_20 += 2) 
                    {
                        {
                            var_39 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)24576))));
                            var_40 = ((/* implicit */long long int) (!(((((/* implicit */int) (_Bool)1)) != (2147483628)))));
                        }
                    } 
                } 
            }
            for (long long int i_21 = 0; i_21 < 24; i_21 += 4) 
            {
                var_41 = ((/* implicit */long long int) (~((~(arr_53 [17])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 1) 
                {
                    var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) (signed char)62))));
                    /* LoopSeq 2 */
                    for (signed char i_23 = 0; i_23 < 24; i_23 += 1) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((arr_61 [i_21] [2]) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_4))))))));
                        var_44 = ((/* implicit */int) min((var_44), (((((/* implicit */_Bool) arr_70 [i_16] [i_16 + 3] [i_21])) ? (((/* implicit */int) arr_70 [i_16] [i_16 + 3] [i_21])) : (((/* implicit */int) (short)5768))))));
                        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) 2305842459457880064ULL))));
                    }
                    for (signed char i_24 = 0; i_24 < 24; i_24 += 1) /* same iter space */
                    {
                        var_46 = ((/* implicit */unsigned long long int) min((var_46), (arr_61 [i_21] [i_16])));
                        var_47 = ((/* implicit */int) max((var_47), ((-(((/* implicit */int) arr_58 [(signed char)14] [i_24] [i_21] [i_16 + 2]))))));
                    }
                }
                arr_75 [i_17] [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_72 [i_16 - 2] [i_17] [i_16] [i_17] [i_16 + 1])) ? (((/* implicit */long long int) arr_72 [i_16 - 2] [i_17] [i_16] [i_17] [i_16 + 1])) : (-1387764892109002308LL)));
                arr_76 [i_21] [i_17] [i_17] [i_16] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((1387764892109002308LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)94))))))));
            }
        }
        for (short i_25 = 2; i_25 < 21; i_25 += 1) 
        {
            arr_81 [i_16] = ((/* implicit */signed char) arr_74 [(_Bool)1] [i_16] [i_16] [(signed char)2] [i_16]);
            arr_82 [i_16] [i_25] = ((((/* implicit */_Bool) arr_70 [(unsigned char)14] [i_16 - 1] [(_Bool)1])) ? ((+(((/* implicit */int) arr_58 [i_16 + 4] [i_16 - 3] [(unsigned short)20] [i_25])))) : (arr_72 [i_16] [(signed char)4] [2ULL] [i_16] [10U]));
            /* LoopNest 2 */
            for (unsigned long long int i_26 = 2; i_26 < 22; i_26 += 2) 
            {
                for (int i_27 = 0; i_27 < 24; i_27 += 1) 
                {
                    {
                        var_48 = ((/* implicit */long long int) max((var_48), (((long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_67 [i_16] [i_26 + 2] [i_26])))))));
                        arr_88 [i_16] [10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                    }
                } 
            } 
        }
        arr_89 [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)108))) - (144110790029344768LL)));
        var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_3)) ^ (var_12)))) && (((/* implicit */_Bool) var_4))));
    }
}
