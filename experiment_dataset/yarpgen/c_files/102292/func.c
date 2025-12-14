/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102292
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((/* implicit */int) (short)-2336)), ((-(((/* implicit */int) arr_3 [i_0])))))))));
        var_19 += ((/* implicit */unsigned long long int) 7U);
        var_20 = ((/* implicit */unsigned long long int) ((int) ((arr_3 [15LL]) || (((/* implicit */_Bool) arr_0 [i_0])))));
    }
    for (long long int i_1 = 2; i_1 < 13; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned short) var_6)))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((2309240959U), (((/* implicit */unsigned int) (unsigned char)255)))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) arr_6 [6U])) - (((/* implicit */int) arr_6 [2U])))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (unsigned int i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */_Bool) 1U);
                    arr_13 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4 - 1]))));
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2])) || (((/* implicit */_Bool) ((long long int) 2309240959U)))));
    }
    /* LoopSeq 3 */
    for (signed char i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        var_26 = ((/* implicit */unsigned short) 1985726337U);
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) max((7039811557894442032ULL), (((/* implicit */unsigned long long int) 1985726324U)))))));
        var_28 = ((/* implicit */unsigned short) (~(max(((-(arr_15 [i_5]))), (((/* implicit */unsigned long long int) max((arr_3 [i_5]), (arr_4 [i_5] [i_5]))))))));
    }
    for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 4) 
    {
        var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) (((!(((/* implicit */_Bool) 5U)))) || (((/* implicit */_Bool) arr_21 [i_6])))))));
        var_30 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) (unsigned short)62480)) & (((/* implicit */int) (unsigned char)0)))))), (max((max((arr_18 [(_Bool)1]), (((/* implicit */unsigned long long int) (short)2336)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3336893342717982846LL)) ? (arr_19 [i_6] [i_6]) : (-3336893342717982846LL))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                {
                    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6 + 2])) ? (((/* implicit */unsigned int) (-(65535)))) : (arr_21 [i_6])))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) 297085124424635369ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_23 [i_6]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((arr_22 [i_6]), (((/* implicit */short) (unsigned char)54)))))))))));
                    /* LoopSeq 3 */
                    for (int i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        arr_30 [2U] [1LL] [11LL] [i_6] = ((/* implicit */unsigned short) ((short) ((_Bool) -1183314426140371450LL)));
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 1; i_10 < 23; i_10 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_33 [i_6] [i_10 - 1] [i_8] [(unsigned char)4])) ? (arr_33 [i_6] [i_10 + 2] [i_8] [i_9]) : (arr_33 [i_6] [i_10 + 2] [i_8] [i_9]))));
                            var_33 = ((/* implicit */unsigned int) min((var_33), (max((((/* implicit */unsigned int) (unsigned short)65535)), (((unsigned int) 6013649375925281237ULL))))));
                        }
                    }
                    for (unsigned int i_11 = 1; i_11 < 22; i_11 += 1) 
                    {
                        var_34 = ((/* implicit */long long int) (+(-440825605)));
                        var_35 = 13902313775323203900ULL;
                    }
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        var_36 = ((/* implicit */short) arr_38 [i_6] [i_6] [i_6] [(short)19] [i_6] [(unsigned char)13]);
                        var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) 9223372036854775799LL))));
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            arr_42 [7LL] [i_6] = ((/* implicit */int) arr_34 [i_6] [i_6 - 1] [i_6 - 1] [i_12]);
                            var_38 += ((/* implicit */short) arr_39 [i_6] [i_7] [i_7] [(unsigned short)2]);
                            var_39 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_36 [i_6] [i_6] [i_6 - 1] [i_6 + 4] [i_6 - 1])))) ? (((/* implicit */int) arr_39 [i_6] [6LL] [i_8] [i_12])) : (((/* implicit */int) ((_Bool) 2147483646)))));
                            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)2336)), (arr_23 [i_6 + 4])))) ? (max((((/* implicit */long long int) (unsigned short)62476)), (-4135873951752764516LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_6 + 4])) || (((/* implicit */_Bool) arr_37 [i_6 + 4] [i_7] [i_6 - 1] [12ULL])))))))))));
                            var_41 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_41 [i_6] [i_7] [i_8] [i_13])), ((+(((((/* implicit */_Bool) arr_31 [i_6] [i_8] [i_13])) ? (arr_29 [i_6] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                        {
                            var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((arr_23 [(short)19]) >> (((((/* implicit */int) arr_22 [i_6])) + (10433)))))))) ? (((((/* implicit */int) ((_Bool) 3298413803135169508ULL))) >> ((-(4294967293U))))) : (((/* implicit */int) arr_39 [i_6] [i_6] [i_6] [(unsigned short)13]))));
                            var_43 = ((/* implicit */int) ((2175885293U) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3298413803135169492ULL))))))));
                        }
                        var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) max((((arr_28 [i_6] [i_12]) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_6]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_6] [i_7])) ? (((/* implicit */int) ((15148330270574382097ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_6] [i_12] [i_6] [i_12] [18LL] [i_12])))))) : (((/* implicit */int) max(((unsigned short)26564), ((unsigned short)62476))))))))))));
                    }
                    var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_38 [i_6] [i_6] [i_7] [i_7] [i_6] [i_8]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned int) arr_32 [i_6 - 1] [i_6] [i_6] [i_6] [i_6 + 2]))))) : (((((-1183314426140371418LL) != (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_6 + 2] [i_6] [(unsigned short)11] [i_8] [5]))))) ? (1183314426140371461LL) : (((/* implicit */long long int) var_11))))));
                    var_46 = 2647859421U;
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 2) 
        {
            var_47 = ((/* implicit */_Bool) arr_19 [i_15] [i_15]);
            arr_48 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6 + 4])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6])))))));
            var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)38972)))))));
        }
        for (long long int i_16 = 0; i_16 < 25; i_16 += 1) 
        {
            var_49 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_43 [i_6] [i_6] [i_16])))) ? (((((/* implicit */_Bool) (unsigned short)3053)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_6] [i_6] [i_6]))) : (arr_21 [i_6]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)48382))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 1; i_17 < 21; i_17 += 4) 
            {
                for (unsigned long long int i_18 = 3; i_18 < 21; i_18 += 3) 
                {
                    {
                        var_50 = ((/* implicit */_Bool) min((((arr_33 [i_6] [i_6] [i_18] [i_18 + 2]) | (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_17 - 1] [i_18] [i_18] [i_18 + 1]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_6] [i_6] [i_17 + 2] [i_6]))) : (4294967295U)))))))));
                        var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((+(arr_19 [i_17] [(_Bool)1]))), (((1183314426140371442LL) | (((/* implicit */long long int) arr_21 [i_18]))))))) ? (((/* implicit */int) arr_50 [i_6] [i_6] [i_18])) : (((((/* implicit */_Bool) arr_51 [i_17 + 4] [i_16] [i_6 + 4] [i_18 - 2])) ? (((/* implicit */int) arr_51 [i_17 + 3] [i_16] [i_6 + 2] [i_18 + 4])) : (((/* implicit */int) arr_51 [i_17 + 4] [i_16] [i_6 - 1] [i_18 + 4]))))));
                        var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((unsigned int) (unsigned short)62459)) : (((((/* implicit */_Bool) arr_31 [i_16] [12ULL] [i_18 + 4])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [4] [i_16] [(unsigned short)2] [14ULL])))))))))))));
                    }
                } 
            } 
        }
    }
    for (unsigned short i_19 = 0; i_19 < 14; i_19 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_20 = 0; i_20 < 14; i_20 += 3) 
        {
            for (unsigned char i_21 = 3; i_21 < 13; i_21 += 4) 
            {
                for (int i_22 = 0; i_22 < 14; i_22 += 3) 
                {
                    {
                        var_53 = ((/* implicit */unsigned short) min((var_53), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 3298413803135169486ULL)) ? ((((~(4294967294U))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */unsigned int) min(((~(((/* implicit */int) (short)0)))), (((/* implicit */int) (short)678))))))))));
                        arr_70 [i_19] [i_22] [i_19] [i_19] [i_19] = ((/* implicit */short) arr_63 [(_Bool)1] [i_20] [i_21] [(_Bool)1]);
                        var_54 = ((/* implicit */_Bool) min((var_54), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_19]))))) ? (((/* implicit */unsigned long long int) (~(arr_23 [i_21])))) : ((-(((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) var_11)) : (14137897552821455912ULL))))))))));
                    }
                } 
            } 
        } 
        var_55 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)0)), (14137897552821455912ULL)))) ? ((((+(arr_25 [i_19]))) | (min((2206878102U), (((/* implicit */unsigned int) arr_58 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])))))) : (max((arr_64 [i_19] [i_19] [i_19]), (((/* implicit */unsigned int) arr_40 [i_19] [(unsigned short)2] [(_Bool)1] [i_19] [i_19]))))));
        arr_71 [i_19] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_66 [i_19] [i_19] [i_19]))))))), (max(((unsigned short)38957), ((unsigned short)62471)))));
    }
    var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (min((3298413803135169478ULL), (((/* implicit */unsigned long long int) 3993180661U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2631)))));
}
