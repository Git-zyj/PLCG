/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185042
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
    var_10 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 1) 
                        {
                            var_12 |= ((/* implicit */unsigned long long int) arr_5 [i_0] [5ULL] [i_0 - 1]);
                            arr_13 [i_1] [(unsigned char)9] [(unsigned char)9] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)32752))) - (-2981182091228836043LL)))), (var_1)))));
                            arr_14 [i_1] [i_0] [i_1] [(unsigned short)13] [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) min((var_4), (((/* implicit */unsigned char) arr_8 [(unsigned char)20] [i_1 + 1] [i_2 - 1] [i_4]))))) != (((arr_12 [i_0] [i_3] [i_2 + 2] [i_3] [i_1]) - (((/* implicit */int) var_6))))))), (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))), (var_5)))));
                            var_13 = ((/* implicit */unsigned long long int) max((((2548046421U) * (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            arr_18 [i_1] [i_5] = ((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)102)))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)35944)) : (((/* implicit */int) (unsigned char)255))))));
                            var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 + 3] [i_1] [i_1 - 1]))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 2; i_6 < 23; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */signed char) arr_15 [i_0 + 3] [i_1] [i_2]);
                            arr_21 [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_1 + 3] [i_0 + 1]))) & (var_8))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0 + 1] [i_1] [i_0 + 1] [i_1 + 1] [i_1] [i_6 + 1])))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_0 - 2] [(_Bool)1] [i_0 - 2])) > (((/* implicit */int) var_7))));
                        }
                        var_17 = ((/* implicit */signed char) arr_12 [i_0 - 2] [i_0] [i_0 + 1] [i_0] [i_1]);
                        var_18 = ((/* implicit */short) min((((((/* implicit */int) arr_8 [i_2 - 1] [i_1 - 1] [i_2 - 3] [i_1 - 1])) << (((/* implicit */int) arr_8 [i_2 - 2] [i_2 - 2] [i_2] [i_3])))), (((((/* implicit */int) arr_8 [i_2 - 3] [i_2 - 3] [i_0 + 2] [i_2 - 3])) >> (((/* implicit */int) var_7))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_1 + 2]))) : (var_2))) & (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */int) var_7)) > (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_9)))))));
                        }
                    }
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 1; i_9 < 21; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_0] [i_1 + 2] [(short)21] [i_8] [(unsigned short)18])) / ((+(((/* implicit */int) (_Bool)1)))))))));
                            var_22 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_15 [i_0 - 1] [i_1] [i_2 - 1]))))));
                            var_23 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? ((+(var_2))) : (((/* implicit */unsigned int) var_5)))) & (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_1 + 1] [i_9 + 2])))))));
                        }
                        var_24 = ((/* implicit */short) ((((/* implicit */long long int) (-(var_5)))) + (((long long int) var_5))));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_0))));
                        arr_29 [i_1] [i_0 - 2] [i_0 - 2] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */int) var_7)) != ((+(var_3))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)7), (((/* implicit */signed char) (_Bool)1)))))) >= (min((10377380943496108249ULL), (((/* implicit */unsigned long long int) (unsigned short)35954))))))));
                        arr_30 [i_1] [i_8] = ((/* implicit */unsigned short) (((!((_Bool)1))) ? (((/* implicit */int) (!((_Bool)1)))) : (1410116771)));
                    }
                    arr_31 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_1] [i_2] [i_0 - 1] [i_1])) ? (arr_22 [i_0] [i_2] [i_2] [i_0 + 1] [i_2]) : (arr_22 [i_0] [i_1] [i_2 + 1] [i_0 + 1] [i_0])))));
                }
            } 
        } 
        arr_32 [0ULL] = ((/* implicit */long long int) arr_20 [i_0 + 2] [(signed char)8]);
    }
    for (int i_10 = 3; i_10 < 21; i_10 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_10] [i_10])) ? (((/* implicit */int) ((arr_10 [i_10] [i_10 - 2] [(short)6] [i_10] [(_Bool)1]) >= (arr_10 [i_10 + 1] [i_10 - 3] [(_Bool)1] [i_10] [i_10])))) : ((~(((/* implicit */int) min((var_4), (((/* implicit */unsigned char) var_7)))))))));
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1068440299)) ? (((/* implicit */int) (short)-12427)) : (((/* implicit */int) (unsigned short)37277))))) && (((/* implicit */_Bool) min((var_5), (arr_24 [i_10] [i_10 - 1] [i_10 + 1] [i_10 - 2] [i_10])))))))));
    }
    for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
    {
        arr_40 [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_11] [i_11] [19] [i_11] [i_11])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [(_Bool)1] [i_11] [i_11] [(unsigned char)12] [i_11])) / (((/* implicit */int) arr_19 [i_11] [i_11] [i_11] [i_11] [i_11]))))) : (min((((/* implicit */unsigned int) arr_17 [i_11] [i_11] [i_11] [(unsigned char)21] [i_11])), (var_2)))));
        /* LoopSeq 4 */
        for (long long int i_12 = 2; i_12 < 23; i_12 += 1) 
        {
            var_28 = ((/* implicit */long long int) max((((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (var_1))), (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_5))))))), (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_4)) - (((/* implicit */int) var_6)))) : (((((/* implicit */int) arr_1 [i_11])) >> (((var_1) - (18364964287424045540ULL)))))))));
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_46 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */int) arr_8 [i_12 - 2] [i_12 - 2] [i_12 + 1] [i_11])) : (((/* implicit */int) arr_8 [i_12 - 1] [i_12 - 2] [i_12 + 1] [i_11]))))) ? (((var_3) + (((/* implicit */int) arr_8 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_11])))) : (((((/* implicit */int) arr_8 [i_12 + 1] [i_12 - 1] [i_12 - 2] [i_11])) + (((/* implicit */int) arr_8 [i_12 - 2] [i_12 - 1] [i_12 - 1] [i_11]))))));
                var_29 *= ((/* implicit */short) (-(((/* implicit */int) ((short) arr_26 [15LL] [i_12 + 1] [i_12] [i_11] [i_12 - 1] [i_12])))));
            }
        }
        for (unsigned int i_14 = 4; i_14 < 23; i_14 += 1) 
        {
            arr_49 [4ULL] |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_14]))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2)))) : (arr_9 [i_11] [i_11] [i_14 - 1])))));
            arr_50 [i_14] [i_11] = ((/* implicit */_Bool) var_6);
            arr_51 [14] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_14 - 1] [i_14] [i_14] [i_11] [i_11] [i_11])) ^ (((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_47 [i_11])) : (((/* implicit */int) arr_8 [12LL] [i_11] [i_11] [i_11])))))));
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (+(min((var_2), (((/* implicit */unsigned int) var_5)))))))));
        }
        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            var_31 ^= ((/* implicit */short) (+((+(var_5)))));
            arr_56 [i_11] [i_11] = ((/* implicit */unsigned char) min((((arr_54 [i_11] [(short)20] [i_11]) / (arr_54 [i_15] [i_15] [i_15]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_54 [i_11] [i_11] [i_15])))))));
            var_32 = ((/* implicit */int) max((var_1), (((((/* implicit */_Bool) arr_44 [i_11] [i_11] [i_11] [i_11])) ? (var_8) : (((/* implicit */unsigned long long int) arr_25 [i_11] [i_15] [i_11] [i_11]))))));
        }
        for (unsigned int i_16 = 3; i_16 < 21; i_16 += 1) 
        {
            arr_59 [i_11] [i_16] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_5 [i_16 + 1] [i_16 + 1] [(_Bool)1])))));
            var_33 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (signed char)-99)))))) ? (((arr_25 [i_16 - 3] [20LL] [20LL] [i_16]) << (((arr_12 [i_16 - 1] [i_16] [i_16 - 1] [i_16 - 1] [(_Bool)1]) + (1412791859))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (var_2)))));
            var_34 += ((/* implicit */int) var_6);
            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) min(((+(var_2))), (((/* implicit */unsigned int) max((((((/* implicit */int) var_6)) / (((/* implicit */int) var_4)))), (max((var_3), (arr_42 [(unsigned short)2])))))))))));
        }
    }
    for (int i_17 = 0; i_17 < 25; i_17 += 1) 
    {
        arr_64 [(short)2] |= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_17] [(signed char)20] [(signed char)20])) - (arr_12 [i_17] [i_17] [i_17] [(unsigned short)2] [2LL])))) - (((((/* implicit */_Bool) arr_12 [2LL] [i_17] [i_17] [(signed char)14] [(signed char)18])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_17] [(unsigned char)6] [(unsigned short)22]))) : (var_2)))));
        /* LoopSeq 2 */
        for (short i_18 = 0; i_18 < 25; i_18 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_19 = 1; i_19 < 23; i_19 += 1) 
            {
                for (long long int i_20 = 0; i_20 < 25; i_20 += 1) 
                {
                    for (short i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        {
                            var_36 -= ((/* implicit */short) var_5);
                            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) min(((~(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((arr_9 [i_19 + 2] [i_19 + 1] [i_19 + 2]) >= (((/* implicit */unsigned long long int) var_2))))))))));
                            arr_75 [i_19 + 1] [i_21] [i_17] [i_20] [i_17] [(short)12] = ((/* implicit */short) ((((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_1)))) ? ((+(((/* implicit */int) arr_15 [i_17] [i_17] [i_21])))) : (((var_3) & (((/* implicit */int) var_6)))))) ^ ((+(((/* implicit */int) arr_67 [i_18] [i_20] [i_20] [i_19 + 2]))))));
                        }
                    } 
                } 
            } 
            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)15717)), (0ULL))))));
            var_39 ^= ((/* implicit */short) (~(((/* implicit */int) ((signed char) max((((/* implicit */long long int) var_7)), (arr_22 [i_17] [i_18] [i_17] [(_Bool)1] [(_Bool)1])))))));
        }
        for (signed char i_22 = 0; i_22 < 25; i_22 += 1) 
        {
            var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) max((min((arr_9 [i_17] [i_17] [i_17]), (((/* implicit */unsigned long long int) var_0)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (arr_76 [i_22] [i_22]))))))));
            arr_78 [(short)0] [i_22] [i_17] = ((/* implicit */unsigned long long int) (+((~(arr_24 [23U] [i_17] [i_17] [i_17] [i_22])))));
        }
    }
}
