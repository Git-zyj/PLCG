/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16270
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
    var_10 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) min((var_7), (var_1))))))), ((~(223129536U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) (+(((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) arr_1 [i_1]))))) >> (((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) + (2224037829038100063LL)))))));
                var_12 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (((/* implicit */int) ((arr_4 [i_0]) < (arr_4 [i_0])))) : (((/* implicit */int) min((arr_0 [i_1]), (arr_0 [14]))))))) | (max(((-(arr_4 [(unsigned char)2]))), ((+(arr_4 [i_0])))))));
                /* LoopSeq 4 */
                for (short i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3257650071401647234LL)) && (((/* implicit */_Bool) (short)0)))))) - (((unsigned int) (short)16))));
                                var_14 = ((/* implicit */unsigned short) arr_0 [i_2]);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) (signed char)98)), (((((/* implicit */_Bool) 1651519752)) ? (2297320465301119366LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) arr_10 [i_0] [i_1] [7] [i_1] [i_2] [(_Bool)1]))));
                    var_16 = ((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])), (((((((/* implicit */long long int) ((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_2]))) > (arr_4 [i_1]))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_10 [i_0] [(signed char)14] [i_1] [i_1] [i_2] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_2])))))))));
                }
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_1] [i_0] [i_0] [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)5691)), ((unsigned short)46911))))));
                                var_17 = ((/* implicit */signed char) ((arr_12 [(short)13] [i_1] [i_5] [i_0] [(_Bool)1]) != (max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned short)18624))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [(unsigned char)0] [i_1] [(short)3])) ? (((/* implicit */int) arr_13 [(unsigned short)0] [i_0] [(unsigned short)0] [i_1] [(_Bool)1] [i_5] [i_5])) : (((/* implicit */int) arr_8 [i_0] [10U] [i_0])))), ((~(((/* implicit */int) (_Bool)1))))))) ? (((((_Bool) 975682523)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10])) || (arr_8 [i_0] [i_1] [i_0])))) : (((/* implicit */int) min((arr_13 [i_0] [i_0] [i_1] [i_1] [(unsigned char)6] [i_5] [i_5]), (arr_13 [i_0] [i_0] [i_1] [i_1] [i_1] [i_5] [i_5])))))) : ((-(((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_5])) >> (((arr_20 [i_0] [i_1] [i_5]) - (3221626248U)))))))));
                }
                for (unsigned int i_8 = 1; i_8 < 14; i_8 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_9 = 4; i_9 < 15; i_9 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_10 = 1; i_10 < 15; i_10 += 1) 
                        {
                            var_19 = (~(((/* implicit */int) ((_Bool) arr_18 [i_0] [i_0] [i_0] [(_Bool)1]))));
                            arr_29 [i_0] [i_0] [i_1] [i_0] [(_Bool)1] [i_10] = ((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_8] [i_10]);
                        }
                        var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((unsigned int) arr_14 [i_1])), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_16 [i_0] [i_0] [3U] [i_9])), (arr_6 [i_1] [i_8] [(unsigned char)3]))))))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (min((arr_14 [i_0]), (arr_21 [(_Bool)1] [i_0] [i_1] [i_8] [10U])))))));
                    }
                    for (signed char i_11 = 2; i_11 < 13; i_11 += 2) 
                    {
                        arr_33 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((int) arr_30 [i_0] [i_1] [i_1]))) ? (((/* implicit */int) ((_Bool) 1806554196))) : (((/* implicit */int) ((short) (_Bool)1)))))));
                        arr_34 [i_0] [7U] [(_Bool)1] [i_8] [i_11] [i_8] = ((/* implicit */_Bool) arr_15 [1LL] [i_0] [(signed char)13] [i_11]);
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)28451)))))) / ((+(min((((/* implicit */long long int) arr_26 [i_0] [i_1] [i_1] [i_8] [(_Bool)1])), (arr_18 [12] [i_1] [i_0] [i_11])))))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        arr_37 [(short)8] [(short)8] [i_0] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) % (arr_4 [i_1]))), ((~(arr_36 [i_0] [i_0])))))) ? (((/* implicit */int) ((((long long int) arr_18 [(_Bool)1] [4LL] [i_0] [i_12])) < (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (arr_6 [(unsigned char)13] [(_Bool)1] [i_12])))))))) : ((+((~(-1806554196)))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 1) 
                        {
                            arr_42 [i_0] [i_0] [i_1] [i_8] [i_1] [i_0] = ((/* implicit */unsigned short) ((unsigned char) max((-1915960578), (975682511))));
                            arr_43 [i_8] [i_0] [i_13] = ((/* implicit */short) ((signed char) min((((/* implicit */short) (signed char)-55)), ((short)0))));
                        }
                        for (short i_14 = 1; i_14 < 12; i_14 += 1) 
                        {
                            arr_46 [10LL] [11] [i_0] [i_14] = ((/* implicit */unsigned short) min((min(((~(975682519))), (max((-2012020060), (((/* implicit */int) (short)-28430)))))), (((/* implicit */int) (short)-4))));
                            arr_47 [i_0] [i_0] [(signed char)5] [2LL] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [10LL] [(unsigned short)0] [(unsigned short)0] [i_12] [i_14]))) | (((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (1695870663439771651LL)))) ? (arr_4 [(unsigned short)2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_0] [(short)5])) ? (((/* implicit */int) arr_38 [i_0] [i_1] [12LL] [i_12] [i_14])) : (((/* implicit */int) arr_2 [i_0] [(signed char)10] [(unsigned char)6])))))))));
                        }
                        arr_48 [i_0] [(unsigned char)2] [(_Bool)1] [i_12] [i_12] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_8] [2U]))) : (max((arr_44 [i_0] [i_1] [i_1] [(_Bool)1] [(_Bool)1]), (arr_20 [i_0] [i_0] [i_12]))))), (((/* implicit */unsigned int) arr_31 [i_0] [i_1] [i_0] [i_0]))));
                        var_22 = ((/* implicit */_Bool) arr_1 [i_8]);
                        var_23 = ((/* implicit */long long int) ((unsigned int) (unsigned short)40499));
                    }
                    arr_49 [i_0] [i_0] [0U] = ((/* implicit */signed char) (((+((+(arr_14 [i_0]))))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-28452)))))));
                    arr_50 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_21 [i_0] [i_0] [9LL] [i_8] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [13LL] [i_0])))))), (min((((/* implicit */unsigned int) arr_9 [11LL] [i_1] [i_0] [(_Bool)1])), (arr_44 [i_0] [i_0] [i_0] [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) arr_20 [i_0] [i_1] [i_0])) : (arr_21 [(_Bool)1] [12LL] [7LL] [(_Bool)1] [7LL])));
                }
                /* vectorizable */
                for (unsigned int i_15 = 0; i_15 < 16; i_15 += 2) 
                {
                    arr_53 [i_0] [(unsigned char)10] [i_15] [i_0] = ((unsigned int) ((unsigned char) arr_19 [12U] [(signed char)8]));
                    arr_54 [i_0] [i_0] [i_0] = ((((/* implicit */int) ((((/* implicit */int) arr_38 [(unsigned short)15] [i_1] [(unsigned char)14] [i_15] [i_15])) <= (((/* implicit */int) arr_25 [i_0]))))) - ((~(arr_12 [i_0] [i_0] [i_0] [i_0] [(signed char)14]))));
                    /* LoopSeq 1 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((long long int) arr_15 [i_0] [i_0] [i_15] [i_15])) - (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_0] [i_1] [(_Bool)1] [(_Bool)1] [(_Bool)1])))));
                        arr_58 [(unsigned char)11] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) ((((((/* implicit */int) arr_56 [(signed char)9] [i_0] [(signed char)9] [i_15] [(signed char)9] [(short)15])) >> (((arr_27 [i_0] [(_Bool)1] [i_0] [i_0] [0LL] [i_0] [i_16]) - (8628483936389092756LL))))) / (((arr_35 [i_0] [13U] [13U] [13U] [i_16]) ? (((/* implicit */int) arr_52 [i_0] [i_0] [i_15] [14LL])) : (((/* implicit */int) arr_38 [i_0] [i_1] [(short)13] [14U] [i_16]))))))) : (((/* implicit */short) ((((((/* implicit */int) arr_56 [(signed char)9] [i_0] [(signed char)9] [i_15] [(signed char)9] [(short)15])) >> (((((arr_27 [i_0] [(_Bool)1] [i_0] [i_0] [0LL] [i_0] [i_16]) - (8628483936389092756LL))) + (1192756944617926274LL))))) / (((arr_35 [i_0] [13U] [13U] [13U] [i_16]) ? (((/* implicit */int) arr_52 [i_0] [i_0] [i_15] [14LL])) : (((/* implicit */int) arr_38 [i_0] [i_1] [(short)13] [14U] [i_16])))))));
                    }
                    arr_59 [i_0] [(unsigned char)11] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (7172345198603595003LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-28451)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-17291)) && (((/* implicit */_Bool) (short)-28432))))) : (((((/* implicit */int) (short)32767)) * (((/* implicit */int) (_Bool)0))))));
                }
                var_25 = max((((unsigned int) max((arr_40 [i_0] [i_1] [i_1] [1ULL] [i_1] [i_1]), (((/* implicit */unsigned int) arr_10 [i_0] [8LL] [1] [i_0] [i_1] [i_1]))))), (((/* implicit */unsigned int) ((4308328598421665227LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                arr_60 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_38 [i_0] [i_0] [0LL] [i_1] [0U]))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */short) var_9))))))))));
}
