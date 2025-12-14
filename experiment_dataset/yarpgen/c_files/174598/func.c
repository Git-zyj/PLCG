/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174598
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
    var_10 = ((/* implicit */int) ((_Bool) var_2));
    var_11 -= ((/* implicit */unsigned long long int) ((short) var_8));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        var_12 &= ((/* implicit */int) (unsigned char)132);
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_8 [i_0]), (arr_8 [i_0])))) ? (((/* implicit */int) arr_3 [i_0])) : ((-(((/* implicit */int) (signed char)-41))))));
                        arr_11 [i_0] = ((/* implicit */long long int) arr_4 [i_0]);
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        arr_14 [i_0] [(short)4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2 + 1] [i_2 + 1] [i_2 - 1])) ? (((((/* implicit */int) arr_8 [i_0])) | (507904))) : (((/* implicit */int) arr_6 [i_2 - 1] [i_0]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 2; i_5 < 9; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [(signed char)1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_5 - 2] [i_0])) || (((/* implicit */_Bool) ((unsigned int) var_4)))));
                            var_14 += ((/* implicit */unsigned short) ((int) ((16522704962030222850ULL) >= (((/* implicit */unsigned long long int) var_3)))));
                            var_15 += ((/* implicit */unsigned char) ((((/* implicit */int) (short)2452)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (147)))));
                        }
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_2 - 1] [i_2] [i_2] [4LL] [i_2])) || (((/* implicit */_Bool) var_6)))))));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2452)) ? (((/* implicit */int) (signed char)-42)) : (-507934)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 997358142))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_0] [(unsigned char)0])) && (((/* implicit */_Bool) arr_12 [10ULL]))))))))));
                        var_18 = ((((((/* implicit */_Bool) var_7)) ? (4196123043080530183ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16384))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7492156486253201428ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))))));
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 3; i_7 < 10; i_7 += 1) 
                        {
                            {
                                arr_26 [i_7 - 2] [i_0] [(signed char)7] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) 4294967295U)))));
                                var_19 = ((/* implicit */_Bool) var_7);
                                arr_27 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                                var_20 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_1] [i_6 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [(signed char)7] [i_6] [i_6 - 1]))) : (1803856908U)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0]))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0]))))))) ? (((arr_21 [i_0]) ? (((/* implicit */int) arr_21 [i_0])) : (((/* implicit */int) arr_21 [i_0])))) : (((507912) | (var_2)))));
                }
            } 
        } 
        var_22 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)42)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            arr_30 [i_0] [i_0] = ((((/* implicit */int) arr_23 [i_0] [i_8] [i_0] [i_8])) | (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0])));
            var_23 += ((/* implicit */unsigned long long int) (-(arr_17 [i_0] [i_0] [i_0] [0U] [10])));
            /* LoopNest 3 */
            for (unsigned char i_9 = 1; i_9 < 11; i_9 += 1) 
            {
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 3; i_11 < 11; i_11 += 1) 
                    {
                        {
                            arr_39 [i_0] [1U] [i_9] [i_0] [i_11 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0])) ? (arr_12 [i_0]) : (arr_12 [i_0])));
                            arr_40 [i_0] [0ULL] [i_9] [0ULL] [i_11] [i_0] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)1))))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)165))) > (arr_7 [i_0] [i_9] [i_10] [i_11])))) | (((/* implicit */int) ((((/* implicit */int) arr_20 [i_9 - 1])) > (((/* implicit */int) var_5)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_12 = 1; i_12 < 9; i_12 += 1) 
            {
                for (long long int i_13 = 1; i_13 < 11; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 12; i_14 += 1) 
                    {
                        {
                            var_25 = arr_16 [i_13 - 1] [i_0];
                            arr_49 [i_0] [i_0] [i_0] [i_13] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_41 [i_14] [i_0] [i_0] [i_0])) : (194784238)))) + (((((/* implicit */_Bool) var_4)) ? (arr_46 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))));
                            var_26 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_8] [i_12] [i_14])) ? (((/* implicit */int) (short)-21034)) : (var_4)))) >= (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_12] [i_13] [i_13] [(unsigned char)4])) ? (arr_46 [i_14] [i_13] [i_12] [0ULL] [i_0]) : (((/* implicit */long long int) var_2))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 1) 
            {
                for (unsigned int i_16 = 0; i_16 < 12; i_16 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_27 ^= ((((/* implicit */_Bool) arr_36 [i_0] [i_8] [i_15] [i_16] [(signed char)10])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) : (arr_51 [i_0] [i_0] [i_0] [i_0]));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_2)))) || (((/* implicit */_Bool) (-(var_6))))));
                            arr_58 [i_0] [(signed char)1] [(signed char)1] [(signed char)11] [(signed char)1] [(signed char)1] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_0] [(_Bool)1] [i_15])) ? (((/* implicit */int) arr_56 [i_0] [i_8] [i_17])) : (((/* implicit */int) arr_56 [i_0] [(_Bool)1] [i_17]))));
                        }
                        arr_59 [(unsigned short)8] [i_16] [i_16] [i_16] &= ((/* implicit */long long int) (-(((/* implicit */int) arr_53 [i_0] [i_8] [i_8] [i_15] [i_16] [i_16]))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-3)) || (((/* implicit */_Bool) 4U))))) : (((/* implicit */int) (unsigned short)24539))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (unsigned short)17))) ? ((-(((/* implicit */int) arr_6 [i_0] [i_0])))) : (((/* implicit */int) arr_54 [i_0] [i_8] [i_0]))));
                    }
                } 
            } 
        }
    }
    var_31 += ((/* implicit */signed char) ((var_2) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) (signed char)-3))))));
    var_32 = var_9;
}
