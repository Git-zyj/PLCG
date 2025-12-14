/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120531
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
    var_10 = ((/* implicit */int) var_8);
    var_11 -= ((/* implicit */long long int) ((int) var_0));
    var_12 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_13 += ((/* implicit */short) var_6);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) ((var_8) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)127))))));
                                var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) var_3))))), (max((((/* implicit */unsigned long long int) var_0)), (arr_0 [i_1]))))))));
                                arr_15 [i_3] [i_4] = ((/* implicit */int) ((long long int) max((((/* implicit */long long int) max((4160749568U), (((/* implicit */unsigned int) (_Bool)0))))), (max((var_1), (var_8))))));
                                arr_16 [i_4] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) max(((short)768), (((/* implicit */short) var_9))))) ? (((((/* implicit */_Bool) arr_10 [(signed char)6] [i_1] [i_2] [i_1] [2ULL])) ? (((/* implicit */int) arr_12 [i_4] [i_3] [i_1] [9LL])) : (((/* implicit */int) (short)16380)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)2))) != ((-9223372036854775807LL - 1LL)))))))), (min((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) (signed char)0))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            {
                                arr_23 [(_Bool)1] [(_Bool)1] [i_1] [i_1] [2U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_0] [i_2] [i_5] [i_6])), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (max((arr_1 [i_2] [i_5]), (((/* implicit */unsigned int) var_9))))));
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (unsigned char)255))));
                                var_17 -= ((short) arr_17 [i_2] [i_0]);
                                var_18 -= ((/* implicit */signed char) min((((/* implicit */long long int) (~(arr_18 [i_0] [i_0] [i_2] [i_5])))), (min((((/* implicit */long long int) arr_18 [i_0] [i_1] [i_2] [i_6])), (var_6)))));
                            }
                        } 
                    } 
                    var_19 = (!(((/* implicit */_Bool) ((((/* implicit */long long int) 13U)) | (var_6)))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_7 = 0; i_7 < 21; i_7 += 1) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_7] [i_7])) ? (arr_20 [i_7] [i_7]) : (((/* implicit */unsigned long long int) arr_17 [i_7] [i_7]))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((arr_0 [(unsigned char)11]) % (((/* implicit */unsigned long long int) var_8)))))));
        var_22 = ((/* implicit */signed char) (~(((/* implicit */int) arr_13 [i_7] [i_7] [(unsigned char)4] [i_7] [(unsigned char)4] [i_7] [0ULL]))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                {
                    arr_32 [i_10] [i_9] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63)))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */_Bool) arr_31 [i_8] [0ULL] [i_10] [i_10])) ? (0ULL) : (((/* implicit */unsigned long long int) 1U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (var_7))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_8] [i_9] [i_10] [i_9])) | (((/* implicit */int) arr_31 [i_8] [i_8] [i_9] [i_10])))))));
                    arr_33 [i_9] = ((/* implicit */int) ((unsigned long long int) max(((unsigned short)63), (((/* implicit */unsigned short) arr_7 [i_10] [i_10])))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            {
                                arr_40 [i_8] [i_8] [i_10] [i_11] [i_12] &= ((/* implicit */short) ((134217728U) % (2U)));
                                arr_41 [i_12] [i_9] [i_12] [i_11] = ((/* implicit */signed char) 0ULL);
                                var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_9]))) ? (min((max((var_3), (((/* implicit */int) var_7)))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) <= ((-9223372036854775807LL - 1LL))))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_25 [i_12])) : (((/* implicit */int) arr_13 [i_8] [i_8] [i_11] [12] [i_11] [i_12] [4]))))));
                                arr_42 [i_9] [i_9] [i_12] = ((/* implicit */unsigned short) var_6);
                                arr_43 [i_8] [i_8] [i_8] [i_12] [i_10] [i_11] [i_12] = ((/* implicit */signed char) ((long long int) max((arr_30 [i_8]), (arr_30 [i_9]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 += ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-1))))) ? (max((((/* implicit */unsigned long long int) var_6)), (arr_10 [i_8] [i_8] [i_8] [i_8] [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-761)))))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_1)) ? (arr_24 [i_8]) : (var_0)))))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_25 -= ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (min((min((18446744073709551613ULL), (((/* implicit */unsigned long long int) arr_18 [i_13] [i_13] [i_13] [i_13])))), (((unsigned long long int) arr_38 [(unsigned char)2] [i_13] [i_13] [i_13] [(unsigned char)2])))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (4294967295U))))));
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (~(((long long int) arr_45 [i_13] [i_13])))))));
        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_5))) / (min((var_8), (((/* implicit */long long int) (unsigned char)0)))))) * (((((/* implicit */_Bool) ((unsigned char) 4294967294U))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-762)))))) : (max((-1LL), (((/* implicit */long long int) var_4)))))))))));
        var_28 = ((/* implicit */int) max((var_28), (((int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_4) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_13])))) : ((~(var_8))))))));
    }
}
