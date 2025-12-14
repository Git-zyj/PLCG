/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139271
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
    var_16 = ((/* implicit */short) min(((-(min((((/* implicit */long long int) 3029176449U)), (140737488355327LL))))), (((/* implicit */long long int) var_13))));
    var_17 = ((/* implicit */int) min(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) < (((long long int) var_3))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                var_19 = ((/* implicit */short) 11978300422237294731ULL);
                var_20 = ((/* implicit */int) min(((unsigned short)65526), ((unsigned short)65535)));
                var_21 = ((/* implicit */int) min((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */unsigned short) arr_6 [18U]))))) : (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) 11978300422237294731ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2345596693U)))));
            }
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    {
                        var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_2)))) ? ((~(((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_0 + 2] [i_4])))) : ((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 1] [i_1]))))));
                        arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_8 [i_0])) : (var_6)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                for (unsigned short i_6 = 1; i_6 < 20; i_6 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) min((arr_3 [i_0 + 2]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 12538503814128305688ULL))))))))));
                            arr_23 [i_0] [i_1] [i_0] [i_5] [(short)12] [i_7] |= ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) var_12)) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 70368744177663LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_18 [i_7] [(unsigned short)16] [(unsigned short)0] [i_6] [i_7] [(unsigned short)0]))))))));
                            var_24 |= ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0 + 2] [i_0]))) + (arr_2 [i_0]))) >= (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (arr_12 [i_0 - 2] [i_5] [i_6])))))))));
                            arr_24 [(_Bool)1] [i_6] [i_6] [i_6] [i_7] = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_5])))))) % (arr_8 [i_0 + 1]))), (var_2)));
                            var_25 = ((/* implicit */_Bool) arr_11 [i_0 + 1]);
                        }
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_8] [i_6] [i_6] [i_6] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 - 2] [i_1] [i_6] [1LL])))))));
                            arr_28 [i_6] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_4 [i_0 - 2])))) ? (((/* implicit */unsigned long long int) min((min((140737488355327LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((short) arr_20 [i_0] [i_6])))))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 2]))) : (arr_19 [i_6] [i_0 + 2] [i_6 + 2] [i_6 + 2] [i_6 + 2])))));
                            var_26 += ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                            var_27 ^= ((/* implicit */long long int) var_5);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) 6468443651472256885ULL))));
                            arr_32 [i_0] [i_0] [i_5] [i_6] [i_6] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                        }
                        var_29 = ((/* implicit */_Bool) arr_4 [(_Bool)1]);
                        var_30 |= min((((((/* implicit */_Bool) arr_11 [i_0 - 2])) ? (((/* implicit */int) arr_7 [i_6] [i_6 + 1] [i_6 + 2] [i_6])) : (((/* implicit */int) arr_7 [i_6] [i_6 + 2] [i_6 + 1] [i_6])))), (min((arr_11 [i_0 - 2]), (arr_26 [0] [i_0 + 2]))));
                    }
                } 
            } 
            arr_33 [i_1] [i_0 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((1497873266203418668LL), (((/* implicit */long long int) (unsigned short)0))))) ? (min(((~(arr_29 [i_0] [i_0] [7LL] [i_1] [i_1] [i_0] [i_1]))), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_36 [i_0] [i_1] [(unsigned short)7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_0 + 1] [i_0 - 2] [i_0 + 1])) ? (arr_34 [i_0 - 1] [i_0 - 1] [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 2])))));
                var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                var_32 = (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_11])));
                arr_39 [i_0] [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_0 - 1])))) ? (arr_0 [i_0 + 2] [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0 + 2] [(unsigned char)20] [i_0 + 2] [i_0] [i_0 - 2] [i_0 + 2])))))) ? (((((/* implicit */_Bool) arr_11 [i_0 - 2])) ? (arr_11 [i_0 + 2]) : (567258171))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (var_12)))))))));
            }
            for (long long int i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (arr_13 [i_0] [i_1] [21U] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))))))) ? ((((!(((/* implicit */_Bool) var_12)))) ? ((((_Bool)1) ? (-6746751289061995877LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(signed char)18]))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : ((+(arr_37 [i_0] [i_0 - 1] [i_0] [i_0])))));
                var_34 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [(signed char)7] [i_1] [(signed char)7]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0 + 1] [4LL])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))) : (var_12)))));
                var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((min((var_2), (var_2))), (min((arr_8 [i_0]), (((/* implicit */long long int) arr_11 [(unsigned char)6]))))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [(short)4]))) & (arr_10 [i_0] [i_0] [i_0 - 2] [i_0 + 2])))));
            }
            /* vectorizable */
            for (unsigned char i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                arr_46 [i_1] [i_1] [7LL] = ((/* implicit */long long int) arr_25 [i_1] [i_1]);
                var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) arr_7 [16] [16] [i_13] [i_13]))));
            }
        }
        for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
        {
            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((long long int) (~(((/* implicit */int) arr_3 [i_14]))))))));
            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (+((+(((/* implicit */int) arr_5 [i_14] [i_0 - 1])))))))));
            arr_50 [(signed char)8] = ((/* implicit */long long int) ((_Bool) ((long long int) min((arr_19 [(_Bool)1] [i_14] [i_14] [(unsigned char)18] [i_0]), (((/* implicit */unsigned long long int) var_4))))));
            arr_51 [(_Bool)1] [i_14] [i_14] = ((/* implicit */unsigned short) ((((_Bool) -140737488355331LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(var_7))) > (((/* implicit */unsigned int) ((/* implicit */int) (short)-29849))))))) : ((+(arr_20 [i_0] [14U])))));
            arr_52 [i_14] = ((/* implicit */signed char) arr_22 [(signed char)16]);
        }
        for (int i_15 = 2; i_15 < 18; i_15 += 1) 
        {
            var_39 ^= ((/* implicit */_Bool) var_13);
            var_40 = ((/* implicit */short) ((((_Bool) arr_40 [18U])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) 4001480544U)) : (9392625784250437554ULL))) : (((/* implicit */unsigned long long int) (-(arr_26 [10LL] [i_0 - 1]))))));
            arr_55 [(unsigned char)18] [(unsigned char)18] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_53 [i_15] [i_15])))) && (((/* implicit */_Bool) var_14))))), (min((((/* implicit */unsigned long long int) arr_5 [i_0 - 2] [i_0])), (((unsigned long long int) arr_21 [i_0] [i_0] [6ULL] [i_0 + 2] [12U] [i_15]))))));
        }
        var_41 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 1] [i_0])) ? (arr_29 [(short)11] [i_0] [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_0]))))))));
        var_42 = ((/* implicit */unsigned short) (~(((long long int) arr_12 [i_0] [i_0 - 1] [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 3; i_16 < 20; i_16 += 1) 
        {
            for (unsigned int i_17 = 2; i_17 < 20; i_17 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 22; i_19 += 1) 
                        {
                            var_43 = ((/* implicit */short) (+(((/* implicit */int) arr_58 [i_17]))));
                            arr_64 [6U] [i_18 - 1] [6U] [i_17] [6U] = ((/* implicit */short) (!((_Bool)0)));
                            var_44 |= ((/* implicit */long long int) (+(((/* implicit */int) arr_21 [i_0] [i_16] [i_17] [i_18 - 1] [i_17] [i_17]))));
                            arr_65 [i_17] [i_16] [i_16 - 1] [i_16 - 1] [i_16] [i_16] [i_17] = ((/* implicit */_Bool) (+(arr_19 [i_17] [i_17] [15LL] [i_18 - 1] [i_19])));
                        }
                        for (unsigned char i_20 = 0; i_20 < 22; i_20 += 1) 
                        {
                            arr_69 [i_17] = ((/* implicit */unsigned short) (-(((arr_63 [i_0] [i_16] [i_17] [i_18] [i_0]) >> (((18446744073709551601ULL) - (18446744073709551551ULL)))))));
                            arr_70 [(signed char)16] [(signed char)16] [i_17] [i_18] [i_20] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min(((short)-2793), ((short)-29837)))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (3539435545765730530ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_58 [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_34 [i_0] [i_17] [i_17])))))), (arr_41 [i_18] [i_16 - 2] [i_17])));
                            var_45 |= ((/* implicit */unsigned long long int) min(((((_Bool)1) || ((!(((/* implicit */_Bool) arr_16 [i_16] [i_20])))))), ((_Bool)1)));
                            arr_71 [i_0] [i_16] [i_17 + 1] [i_0] [i_20] [12] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_8))) ? (((((/* implicit */_Bool) (signed char)127)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))))) : (((/* implicit */unsigned long long int) arr_8 [i_0 + 1]))));
                        }
                        for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                        {
                            var_46 ^= ((/* implicit */long long int) min((min((arr_42 [i_18 - 1] [i_18 - 1] [5U] [i_18]), (arr_42 [i_18] [i_18 - 1] [i_18 - 1] [i_18 - 1]))), ((+(arr_13 [i_16 - 2] [i_16 - 1] [20] [i_18 - 1])))));
                            arr_74 [i_21 + 1] [i_21] [i_21] [i_17] [i_21] = ((/* implicit */short) var_14);
                        }
                        var_47 ^= ((/* implicit */long long int) arr_58 [(unsigned char)20]);
                    }
                    var_48 += ((/* implicit */short) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) arr_7 [i_0 - 1] [i_16 - 3] [i_17 + 1] [i_17 + 1]))))) ? (((/* implicit */unsigned int) (~((+(((/* implicit */int) (unsigned char)232))))))) : (((3178026982U) << (((((/* implicit */int) (short)14682)) - (14677)))))));
                    var_49 ^= ((/* implicit */short) var_6);
                }
            } 
        } 
        var_50 = ((/* implicit */_Bool) min(((unsigned short)58118), (((/* implicit */unsigned short) (_Bool)1))));
    }
    for (unsigned long long int i_22 = 1; i_22 < 19; i_22 += 1) 
    {
        var_51 += ((/* implicit */unsigned short) ((unsigned int) (short)-19414));
        arr_78 [i_22] [i_22 + 4] = ((/* implicit */unsigned int) (~(min(((-(((/* implicit */int) arr_76 [(short)14] [i_22])))), ((+(((/* implicit */int) arr_76 [i_22 - 1] [i_22]))))))));
        /* LoopNest 2 */
        for (unsigned char i_23 = 0; i_23 < 23; i_23 += 1) 
        {
            for (unsigned long long int i_24 = 2; i_24 < 21; i_24 += 1) 
            {
                {
                    arr_85 [i_22] [i_23] |= ((/* implicit */short) -1663929123);
                    arr_86 [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_79 [i_22 + 2] [i_23] [i_24]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : ((~(((/* implicit */int) var_15))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) 1586329064U))))))) : (((((((/* implicit */int) arr_81 [i_22] [i_24])) >= (arr_80 [i_24] [i_23] [i_22]))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)19422))) <= (arr_83 [i_22 - 1] [i_23] [i_24])))) : (((/* implicit */int) arr_79 [i_22 + 2] [i_22 + 2] [i_24 + 2]))))));
                }
            } 
        } 
        var_52 = ((/* implicit */unsigned int) min((arr_75 [i_22] [i_22 + 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_81 [i_22] [i_22 - 1]))))))))));
        var_53 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) min((((/* implicit */unsigned char) (!((_Bool)1)))), ((unsigned char)0)))), ((unsigned short)59379)));
    }
    var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_14))) << ((((~(((/* implicit */int) (short)(-32767 - 1))))) - (32752)))))) ? (((((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_5)))) << (((((((/* implicit */int) var_13)) + (4264))) - (14))))) : (((/* implicit */int) var_14))));
}
