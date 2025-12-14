/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175732
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_14))))))) ? (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) var_9)), (var_10))), (((/* implicit */unsigned int) (-(var_15))))))) : ((((_Bool)1) ? (var_2) : (((/* implicit */unsigned long long int) ((unsigned int) var_5)))))));
    var_18 = ((/* implicit */int) var_7);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
        {
            var_19 |= ((/* implicit */unsigned short) (+((-(((unsigned long long int) arr_2 [i_0] [i_0] [6LL]))))));
            /* LoopSeq 3 */
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_1 [i_0])))))))) ? (var_3) : (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2] [i_1])));
                arr_7 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((_Bool) min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */short) (_Bool)1)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 4; i_3 < 10; i_3 += 2) 
                {
                    arr_10 [i_2] [i_0] [i_2] [i_0] [i_2 - 1] = (((-(((/* implicit */int) (short)1016)))) + ((~(arr_6 [i_3] [i_3] [i_3 + 1] [i_3 - 3]))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_4 [i_3]))));
                }
                for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 1) 
                {
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 4294967295U)))) < (((long long int) var_3)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(short)10]))) - (arr_9 [i_0] [(_Bool)1] [i_2])))) ? (((/* implicit */int) arr_13 [i_2 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4])) : (((((/* implicit */_Bool) arr_11 [i_0] [(_Bool)0] [(_Bool)0] [i_4])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_8 [(unsigned short)8])))))) : (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_5 [(unsigned char)2] [i_4] [i_4 - 2] [2U])) - (7358))))))))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1140878124U)) ? (((/* implicit */int) (short)1017)) : (((/* implicit */int) (short)-7098)))))));
                    arr_14 [i_0] [i_0] [i_2 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))))), (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + (var_2)))))));
                }
                for (short i_5 = 2; i_5 < 9; i_5 += 2) 
                {
                    var_24 += ((/* implicit */unsigned short) ((unsigned long long int) arr_3 [i_5] [i_2]));
                    arr_18 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) arr_1 [(short)4]);
                }
            }
            for (unsigned int i_6 = 4; i_6 < 9; i_6 += 1) 
            {
                arr_22 [i_0] [i_0] [i_6] = ((/* implicit */short) arr_16 [i_0] [(_Bool)1] [i_0] [i_6] [i_1]);
                var_25 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((var_7), (var_12)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0] [i_6])), (arr_4 [i_0])))) : (((unsigned long long int) arr_15 [i_6] [i_1] [i_1] [(unsigned char)7] [i_0] [i_0]))))));
                arr_23 [i_0] [(unsigned char)0] [i_6] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [2U] [i_1] [0U] [0U]))))) ? (((/* implicit */int) arr_8 [4])) : ((-(((/* implicit */int) arr_8 [(unsigned char)8]))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_6 + 2] [(unsigned char)0] [i_6] [i_6 - 1]))) < (((unsigned int) arr_3 [(signed char)2] [(signed char)2]))))) : (((((/* implicit */_Bool) arr_20 [i_6 - 3] [i_6] [i_6] [i_6 + 2])) ? (((/* implicit */int) arr_20 [i_6 - 4] [i_6 - 1] [i_6 + 1] [i_6 - 3])) : (((/* implicit */int) var_13))))));
                var_26 = ((/* implicit */int) (-(3049406363U)));
            }
            /* vectorizable */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 1])) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_1] [i_7] [i_7 + 1])) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_7 + 1] [i_7 + 1] [i_0] [i_1])) : (((/* implicit */int) (unsigned short)24))))));
                var_28 *= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_25 [i_0] [10U])) ? (((/* implicit */int) (short)-25829)) : (arr_27 [i_0] [i_7])))));
                arr_28 [i_0] = ((/* implicit */unsigned int) (_Bool)0);
            }
        }
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (-(arr_26 [(unsigned char)2] [i_0] [i_0]))))));
            /* LoopSeq 2 */
            for (unsigned char i_9 = 1; i_9 < 9; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_10 = 2; i_10 < 9; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */int) arr_9 [i_10 + 1] [i_11] [i_9]);
                            var_31 = max((((/* implicit */short) arr_24 [i_0] [i_8] [i_10] [i_11])), ((short)1178));
                        }
                    } 
                } 
                arr_39 [i_8] [i_0] [i_8] = ((/* implicit */int) var_4);
                /* LoopNest 2 */
                for (long long int i_12 = 3; i_12 < 11; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */long long int) (~(((/* implicit */int) (short)25810))));
                            var_33 = ((/* implicit */short) min((arr_1 [i_9 + 2]), ((((-(((/* implicit */int) arr_33 [i_0])))) == (((/* implicit */int) arr_2 [i_0] [i_9] [i_0]))))));
                            var_34 |= ((/* implicit */short) min((((/* implicit */long long int) (+(((((/* implicit */int) var_9)) - (((/* implicit */int) var_9))))))), (((arr_32 [i_12 - 1] [i_12 + 1] [i_9 + 2] [i_9 + 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_9] [i_12] [(short)10]))) : (arr_38 [(signed char)10] [i_9 + 3] [i_9 - 1] [i_9 + 1] [i_9 + 3])))));
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) arr_2 [i_8] [i_9 + 1] [2LL]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    var_36 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_20 [i_0] [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_5 [(short)0] [i_14] [i_9 + 3] [i_9]), (((/* implicit */short) arr_0 [(unsigned char)0])))))) : (min((((/* implicit */long long int) (_Bool)1)), (-100987438369513248LL))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_30 [i_9] [i_0] [i_0]))))))))));
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((unsigned long long int) max((arr_32 [i_0] [i_9 - 1] [i_9 + 1] [5U]), (arr_32 [i_0] [i_9 + 1] [i_0] [i_9 + 1])))))));
                    var_38 = ((/* implicit */_Bool) ((int) var_14));
                }
                for (int i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_40 [i_9] [i_9 - 1] [i_9 + 1] [i_15])), (2609207336U)))) ? (348596397835524448LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_48 [i_0] [i_0] [i_0] [i_15]) ? (var_7) : (((/* implicit */long long int) var_3))))))))))))));
                    var_40 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_0] [i_15] [i_8] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_0] [i_0])))))))), (((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_0] [3] [i_9] [i_0]))) : (((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_9 - 1] [i_15])) ? (arr_15 [i_0] [i_0] [i_0] [3] [3] [i_0]) : (((/* implicit */long long int) var_15))))))));
                    arr_51 [i_15] [i_15] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (arr_4 [i_15])))) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (arr_43 [i_15]) : (arr_47 [i_15] [i_15] [(short)0] [i_15]))))))));
                }
                arr_52 [i_0] [(signed char)2] [i_9 + 1] = ((arr_12 [i_8] [i_9 + 2] [i_9 + 2] [i_9 + 2] [1U] [i_9]) <= (((((/* implicit */_Bool) arr_12 [i_8] [i_9 - 1] [(_Bool)1] [i_9 - 1] [i_9] [i_9 + 2])) ? (arr_12 [i_8] [i_9 + 2] [i_9] [i_9] [i_9] [i_9]) : (arr_12 [i_0] [i_9 + 2] [i_0] [i_9] [i_9 - 1] [(_Bool)1]))));
            }
            for (unsigned int i_16 = 2; i_16 < 11; i_16 += 4) 
            {
                arr_55 [i_0] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_0])) << (((((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */int) var_14)))) - (1321973996)))))) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_4))));
                var_41 |= ((/* implicit */short) max((((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_0] [i_16] [6])) ? (arr_41 [i_8] [0LL] [i_8] [i_16] [i_16]) : (arr_41 [(unsigned short)8] [i_8] [i_8] [i_16] [i_8]))), (((/* implicit */int) ((((/* implicit */_Bool) (short)10)) || (arr_34 [i_0] [i_16]))))));
                arr_56 [i_0] [i_8] [i_16 - 2] = 4294967295U;
            }
            arr_57 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_21 [i_0] [i_0]))));
        }
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 1) 
        {
            for (int i_18 = 0; i_18 < 12; i_18 += 2) 
            {
                {
                    var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) arr_11 [i_0] [i_18] [i_18] [i_18]))));
                    arr_62 [i_0] [i_17] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned short) arr_53 [i_0] [i_0] [i_18])), (var_14)));
                }
            } 
        } 
    }
    for (long long int i_19 = 1; i_19 < 11; i_19 += 2) 
    {
        var_43 = ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_64 [i_19] [i_19])) || (((/* implicit */_Bool) arr_65 [i_19] [i_19]))))), ((-(((/* implicit */int) arr_63 [(_Bool)1] [(_Bool)1]))))))), (arr_65 [i_19 + 2] [i_19 + 1])));
        var_44 = min((((/* implicit */long long int) (-(((/* implicit */int) arr_64 [i_19 + 2] [i_19 + 2]))))), (((((/* implicit */_Bool) ((81157095U) / (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_65 [i_19] [i_19])) ? (arr_65 [i_19 + 3] [i_19]) : (arr_65 [i_19] [i_19]))))));
        arr_66 [i_19] |= ((/* implicit */short) (_Bool)1);
    }
}
