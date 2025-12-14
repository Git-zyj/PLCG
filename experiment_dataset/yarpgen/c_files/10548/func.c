/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10548
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) (_Bool)0)), (((-7477714469668866982LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
                var_17 = ((/* implicit */signed char) max((-7477714469668866972LL), (((/* implicit */long long int) (unsigned char)171))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)28)), (arr_5 [i_1] [i_0])))))))));
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    arr_10 [5U] [i_1] [5U] [i_1] = ((/* implicit */unsigned short) var_6);
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
                    var_19 = max((11764912049294098126ULL), (((/* implicit */unsigned long long int) 3854535492U)));
                }
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_5] [(unsigned char)9] [i_5] [i_5] &= ((/* implicit */int) arr_18 [i_5]);
                                arr_20 [i_1] [i_1] [(_Bool)0] [8LL] [8LL] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (arr_4 [i_0] [i_0]) : (arr_9 [(unsigned short)1] [i_1] [i_3]))), (((/* implicit */long long int) ((int) arr_16 [i_5])))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))) ^ (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (arr_5 [i_0] [i_5]))))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_3]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0])) ? (arr_9 [i_0] [i_1] [i_1]) : (arr_9 [i_7] [i_3] [i_1]))) >> (((-1379430094) + (1379430132)))));
                                arr_26 [i_0] [i_7] [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) arr_9 [i_1] [i_1] [i_6]));
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_7] [i_6] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_5 [i_3] [i_7])) + (arr_18 [i_6])));
                                arr_28 [i_3] |= ((/* implicit */long long int) ((short) min((var_5), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) (~(arr_24 [i_0] [i_1] [i_3])));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 9; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min((((/* implicit */long long int) arr_31 [i_0] [i_0] [i_0] [i_8 + 1] [i_0])), (((((/* implicit */_Bool) max(((unsigned short)38907), (((/* implicit */unsigned short) arr_0 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38896))) : (((arr_14 [(unsigned short)1] [i_1] [(signed char)3]) ? (((/* implicit */long long int) var_12)) : (arr_4 [i_9] [8ULL]))))))))));
                                var_23 = ((/* implicit */short) (+(((/* implicit */int) ((_Bool) arr_6 [i_0] [i_8 - 1] [i_3])))));
                                arr_33 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) ((signed char) 7477714469668866972LL))) + (2147483647))) >> (((((((/* implicit */int) arr_29 [i_0] [i_8 - 1] [i_8 - 1] [i_9] [i_9])) | (((/* implicit */int) arr_22 [i_3] [i_8 + 2] [i_8] [i_8 + 2])))) - (16759)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned int) arr_5 [i_0] [i_0])), (var_12))))) ? (max((max((2050230108308124658LL), (((/* implicit */long long int) (short)32767)))), (((/* implicit */long long int) arr_7 [(signed char)6] [(unsigned short)10] [i_3])))) : (((/* implicit */long long int) ((arr_23 [i_10 - 1] [i_10 - 1] [i_1] [i_1]) + (arr_23 [i_1] [i_3] [i_10 - 1] [i_11]))))));
                                var_25 = ((/* implicit */int) (((((_Bool)0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7477714469668866972LL)) ? (2050230108308124660LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)120)))))) : (((arr_32 [i_0] [i_0] [10U] [i_3] [i_10] [i_11]) & (((/* implicit */unsigned long long int) 174807449)))))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 4294967295U)), (584338422100206969LL))))));
                                arr_38 [i_0] [i_10] [i_10] [i_10] [i_0] = ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) var_9)));
                                arr_39 [i_0] [i_1] [i_3] [i_10] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_9 [i_1] [i_3] [i_1])) ? (arr_9 [i_11] [(signed char)0] [i_0]) : (arr_9 [i_1] [i_3] [i_10]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1409658628U)) ? (((/* implicit */unsigned long long int) 174807468)) : (19ULL)))) ? (((arr_37 [i_11] [i_11] [i_11] [i_11] [i_11] [6LL]) ? (-4LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) : (((arr_37 [i_0] [i_1] [i_3] [i_3] [i_10] [i_11]) ? (-2050230108308124659LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_10 - 1] [10U] [10U])))))))));
                            }
                        } 
                    } 
                }
                arr_40 [i_1] [i_0] [i_0] = ((/* implicit */signed char) min((arr_2 [i_0] [i_1]), (((/* implicit */short) (!(((/* implicit */_Bool) ((var_4) % (var_15)))))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned char) max((9223372036854775807LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -268435456)) ? (16ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-20296)) : (((/* implicit */int) var_14)))) : (((((/* implicit */int) (_Bool)0)) + (524287))))))));
    /* LoopNest 3 */
    for (short i_12 = 1; i_12 < 14; i_12 += 4) 
    {
        for (long long int i_13 = 3; i_13 < 12; i_13 += 3) 
        {
            for (signed char i_14 = 0; i_14 < 16; i_14 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        for (unsigned int i_16 = 1; i_16 < 14; i_16 += 2) 
                        {
                            {
                                arr_53 [i_12] [i_12] [i_14] [i_12] [i_12] [i_12] [i_13] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned short) arr_42 [i_16 + 2]))) || (((/* implicit */_Bool) 181314214)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_43 [i_12] [i_14])))))) < (arr_49 [i_16 - 1] [i_12 - 1] [i_12] [i_12])))));
                                var_27 = ((/* implicit */short) ((unsigned char) arr_45 [(_Bool)1] [i_14] [i_14]));
                                arr_54 [i_15] [i_12] [i_14] [i_15] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_48 [i_13] [0ULL])) : (((/* implicit */int) (signed char)37))));
                                var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_47 [i_12] [i_12 + 1] [i_12] [i_12]), (arr_47 [i_12] [i_13] [i_13] [i_12]))))));
                                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((unsigned long long int) min((var_8), (((/* implicit */unsigned short) (_Bool)1))))) + ((~(var_0))))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_49 [i_14] [i_14] [i_13 - 3] [i_12]), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_12 + 1] [i_12])) ? (-181314200) : (((/* implicit */int) arr_43 [i_12] [i_14]))))) : (var_12)))) ? (max((arr_50 [i_14]), (((/* implicit */long long int) arr_52 [i_12] [i_13] [i_13 + 1] [i_14] [i_14] [i_14])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_12 + 2])) ? (arr_42 [i_12 + 1]) : (arr_42 [i_12 + 1]))))));
                }
            } 
        } 
    } 
}
