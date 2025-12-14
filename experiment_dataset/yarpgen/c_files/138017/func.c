/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138017
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) | (((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) (short)16376)) ? (((/* implicit */int) (unsigned short)14643)) : (((/* implicit */int) arr_0 [i_2])))) : (((((/* implicit */int) arr_0 [i_2])) * (((/* implicit */int) arr_0 [i_0]))))));
                    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (unsigned short)9000)))) : (((((/* implicit */_Bool) arr_0 [(signed char)3])) ? (((/* implicit */int) arr_0 [i_1])) : (arr_4 [i_0] [i_2]))))))));
                    arr_8 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) max((((/* implicit */short) arr_5 [i_2] [i_2] [i_2])), (arr_0 [i_1])))) : (((/* implicit */int) (signed char)0))))) | (((arr_5 [i_0] [i_0] [i_0]) ? (((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3101))) : (4735050605954163830ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)8948)) | (((/* implicit */int) arr_0 [i_0])))))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << (((((((((/* implicit */_Bool) min((arr_4 [i_1] [i_1]), (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) + (54))) - (4)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) 841388936)) ? (((/* implicit */int) arr_5 [i_2] [(unsigned short)2] [i_2])) : (((/* implicit */int) (signed char)-42)))) << (((((((/* implicit */_Bool) arr_11 [(short)4] [i_1] [i_2] [i_2] [i_3] [i_3])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)6]))))) - (6055722678505909418ULL))))) > (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) max((((/* implicit */signed char) arr_5 [i_1] [i_1] [i_1])), ((signed char)-94)))) : (((/* implicit */int) arr_1 [i_0] [i_3 - 1]))))));
                        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2] [i_1] [i_3 - 1] [i_0] [i_3 - 1] [i_3 + 2])) << (((/* implicit */int) arr_6 [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_3] [i_3 - 1])) < (((/* implicit */int) arr_6 [i_3 + 2] [i_3 + 3] [i_3 + 3] [i_3 + 3])))))) : (((((/* implicit */_Bool) arr_1 [i_3] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3 - 1] [i_3 - 1]))) : (16308060159614633212ULL)))));
                    }
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (10674630125058212558ULL)));
    var_14 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_0))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))));
    /* LoopSeq 1 */
    for (short i_4 = 3; i_4 < 18; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_6])) ? (((/* implicit */int) (unsigned char)51)) : (((/* implicit */int) arr_13 [i_5]))))) ? (min((arr_17 [i_4] [i_5] [i_5] [i_6]), (((/* implicit */unsigned int) arr_12 [i_4])))) : (((((/* implicit */_Bool) arr_17 [i_4] [i_5] [i_4 - 1] [i_5])) ? (arr_16 [i_4 - 3] [(short)11] [i_6]) : (arr_17 [(_Bool)0] [i_5] [i_6] [i_6]))))) < (arr_17 [i_4] [i_5] [i_5] [i_4 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 1; i_7 < 15; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-16359)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65526)) ? (((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4])) ? (arr_16 [i_4] [i_4] [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(short)9]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_5])) && (((/* implicit */_Bool) (signed char)-1)))))))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_4] [i_4 - 2] [i_4] [16LL] [i_7 - 1])) ? (arr_22 [i_4] [i_4 + 1] [10LL] [i_4 + 1] [i_7 - 1]) : (((((/* implicit */_Bool) arr_22 [i_4] [i_4 - 2] [i_6] [i_7] [i_7 + 1])) ? (arr_22 [(signed char)17] [i_4 - 3] [i_5] [i_7 - 1] [i_7 + 3]) : (arr_22 [i_4] [i_4 - 3] [i_6] [i_6] [i_7 - 1])))));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 - 2])) ? (((/* implicit */int) arr_12 [i_4 + 1])) : (((/* implicit */int) arr_12 [i_4 - 3]))))) ? (((((/* implicit */_Bool) arr_22 [(unsigned short)10] [(unsigned char)15] [(unsigned char)1] [i_4 - 3] [i_4])) ? (((/* implicit */unsigned long long int) max((arr_22 [i_4] [i_4] [i_4] [(signed char)15] [(unsigned short)6]), (((/* implicit */unsigned int) arr_18 [i_5] [i_5] [(signed char)4]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5]))) * (arr_14 [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_18 [i_5] [i_5] [i_5]), (((/* implicit */short) arr_21 [i_4 - 1]))))))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_4 + 1] [(signed char)9] [(unsigned short)18] [i_5] [i_6])) ? (((/* implicit */int) arr_19 [i_4 + 1] [(unsigned short)10] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_19 [i_4 + 1] [i_5] [i_6] [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_4 + 1])) <= (((/* implicit */int) arr_15 [i_4 - 3])))))) : (((((/* implicit */_Bool) arr_13 [i_4 - 2])) ? (((/* implicit */unsigned long long int) -841388937)) : (arr_14 [i_4 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        for (signed char i_10 = 3; i_10 < 16; i_10 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)236)) ? (2739480042U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [i_5] [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6]))) : (arr_20 [(signed char)2] [i_5] [i_9] [i_9] [i_6])))) ? (((((/* implicit */_Bool) arr_19 [14] [16U] [i_6] [i_10 - 3] [i_9])) ? (arr_22 [i_6] [(unsigned short)1] [i_10] [i_10 + 3] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_10] [i_10] [i_10 + 1] [i_10 - 1] [i_5]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5]))) < (arr_14 [i_5]))))))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4 + 1])) ? (((((/* implicit */_Bool) arr_25 [i_6] [i_6])) ? (arr_14 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6] [i_9] [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_6] [i_10 + 3] [i_10 - 1])))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3184112909U)) ? (((/* implicit */int) (unsigned short)27756)) : (((/* implicit */int) (signed char)-124)))) >> (((((((/* implicit */_Bool) (short)30074)) ? (((/* implicit */int) (unsigned short)30135)) : (((/* implicit */int) (unsigned char)139)))) - (30121)))))) : (((((/* implicit */_Bool) ((arr_28 [i_4] [i_4] [i_4 - 3] [i_4] [i_4]) ? (((/* implicit */int) arr_12 [i_10])) : (((/* implicit */int) arr_29 [i_9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4 + 1]))) : (arr_22 [i_4 - 2] [i_4 - 2] [i_4 - 2] [(unsigned short)2] [i_10 + 2])))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_4])) ? (arr_20 [i_4] [i_5] [i_6] [i_6] [i_10]) : (((/* implicit */unsigned long long int) arr_17 [i_4] [i_6] [i_6] [i_9]))))) ? (arr_27 [i_10] [i_10] [(_Bool)1] [i_10 + 1] [i_10] [(unsigned short)10] [(signed char)6]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6] [i_4 + 1] [10] [i_4 + 1] [i_6])))))) ? (((((/* implicit */_Bool) arr_20 [i_4 - 1] [i_4] [i_6] [i_4] [i_4 - 3])) ? (arr_20 [i_4 - 2] [i_4] [i_6] [i_4 - 1] [i_4 - 1]) : (arr_20 [i_4 + 1] [i_4] [i_6] [12ULL] [i_4 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6])))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_28 [i_10] [i_10] [(unsigned char)12] [i_10] [i_10 - 2])), (arr_19 [i_10] [i_10] [(unsigned short)13] [i_10] [i_6])))) | (((((/* implicit */_Bool) arr_20 [(unsigned short)1] [i_10] [i_6] [i_6] [i_10 - 2])) ? (((/* implicit */int) arr_19 [i_10] [i_10] [i_10] [i_10] [i_6])) : (((/* implicit */int) arr_28 [(short)5] [(short)5] [(short)13] [(unsigned short)15] [i_10 - 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_30 [i_4] = ((/* implicit */signed char) arr_29 [i_4 - 1]);
    }
    /* LoopNest 3 */
    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) 
    {
        for (short i_12 = 0; i_12 < 25; i_12 += 3) 
        {
            for (unsigned short i_13 = 0; i_13 < 25; i_13 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30143)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_11])) / (((/* implicit */int) arr_33 [i_11]))))) : (arr_36 [i_12])));
                        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_32 [i_11])) ? (((/* implicit */int) arr_32 [i_12])) : (((/* implicit */int) arr_32 [(unsigned short)23])))) | (((((/* implicit */int) arr_32 [i_11])) | (((/* implicit */int) arr_32 [i_13]))))));
                        arr_44 [i_11] [i_12] [(unsigned short)19] [(unsigned short)1] [i_11] [i_11] = ((/* implicit */unsigned short) ((arr_42 [i_11] [i_11] [i_13] [i_14]) ? (arr_39 [i_12] [i_12] [(unsigned short)17]) : (((/* implicit */long long int) max((((((/* implicit */int) (unsigned short)14861)) / (arr_35 [i_14] [i_12] [i_11]))), (((((/* implicit */int) arr_31 [i_14])) + (((/* implicit */int) (short)3625)))))))));
                    }
                    var_26 = (unsigned short)4095;
                }
            } 
        } 
    } 
}
