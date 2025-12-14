/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16222
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
    var_16 = ((/* implicit */unsigned char) var_12);
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(-8075656448899395298LL)))))) & (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9))), (((-8075656448899395298LL) | (((/* implicit */long long int) 2716119294U)))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (8075656448899395297LL) : (-4293887265387546737LL))));
                        var_19 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) (unsigned char)255)))))) >= (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1]))) : (-6607954035625246709LL))));
                        arr_11 [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_2 - 1]))));
                        var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8075656448899395297LL)) ? (2716119280U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) ((signed char) -8625320479737974183LL))) : (((/* implicit */int) var_5))));
                    }
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (unsigned char)2))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 2; i_5 < 9; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */signed char) max((255U), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)2)) || (((/* implicit */_Bool) var_13)))) && (((/* implicit */_Bool) arr_10 [i_5])))))));
                            arr_16 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_4] [i_2 - 2]))) >= (arr_7 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) min((((/* implicit */short) arr_14 [i_0] [i_0] [i_2] [i_4] [i_5] [i_1])), (min((((/* implicit */short) arr_12 [i_0] [i_0] [i_0] [i_4] [i_0] [i_4])), (var_4))))))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned short) arr_10 [i_2])), ((unsigned short)22936))), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_2 + 1] [i_2 + 1] [i_0])) : (((((/* implicit */int) max((arr_15 [i_0] [i_1] [i_2] [i_4] [i_5] [i_5] [i_5]), (((/* implicit */short) arr_0 [i_5] [i_2]))))) | (((((/* implicit */int) (unsigned char)254)) / (((/* implicit */int) (signed char)61))))))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_14 [i_2] [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2]))) ? (((((((/* implicit */_Bool) arr_13 [i_4] [i_1] [i_2 + 1] [i_4] [i_4] [i_5])) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_4])))) ? (((((/* implicit */_Bool) 2716119294U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_4] [i_5] [i_5]))) : (arr_9 [i_4] [i_4] [i_5] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (short)-4122))))) : (((/* implicit */long long int) max((((/* implicit */int) var_0)), ((+(((/* implicit */int) arr_3 [i_1]))))))))))));
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) max(((unsigned char)254), (((/* implicit */unsigned char) arr_6 [i_5] [i_1] [i_0])))))) == (((((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_4] [i_5])) ? (8075656448899395297LL) : (-8075656448899395309LL))) | (((((-8075656448899395298LL) + (9223372036854775807LL))) >> (((arr_7 [i_0] [i_4] [i_1] [i_0]) - (1129204298781697207ULL))))))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((unsigned short) var_8));
                            var_27 &= ((/* implicit */long long int) ((_Bool) 8211348599534866461LL));
                            var_28 = ((/* implicit */unsigned long long int) max((arr_9 [i_0] [i_0] [i_2] [i_4] [i_0]), (((/* implicit */long long int) arr_14 [i_2] [i_6] [i_1] [i_4] [i_6] [i_1]))));
                        }
                        var_29 -= ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */_Bool) var_12)) ? (4748017599220281824LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))))) != (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (arr_7 [i_4] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) == (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                    }
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (signed char)127))) ? (((long long int) var_0)) : (max((((/* implicit */long long int) var_5)), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2 - 2] [i_0] [i_2] [i_0] [i_1] [i_1]))) + (0ULL))))))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 9; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */short) arr_2 [i_0] [i_2]);
                                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) 1578848015U)) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) arr_2 [i_0] [i_8])) : (((/* implicit */int) (short)-4123)))) & (((/* implicit */int) ((unsigned short) arr_0 [i_2 - 2] [i_8])))))) : (min((((((/* implicit */_Bool) arr_9 [i_8] [i_7] [i_1] [i_1] [i_0])) ? (arr_17 [i_0] [i_1] [i_1] [i_7 - 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)132))))), (arr_21 [i_2] [i_0] [i_1])))));
                                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((short) ((((((/* implicit */_Bool) arr_22 [i_8] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (-8211348599534866470LL))) < (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)36679), (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_27 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_1)))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max(((unsigned char)81), (((/* implicit */unsigned char) (signed char)98)))))))));
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_9] [i_9] = max((max((((arr_5 [i_2 - 2] [i_1] [i_0]) << (((((/* implicit */int) (unsigned char)71)) - (70))))), (((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_0])) / (((/* implicit */int) (unsigned short)64321))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_9] [i_10] [i_10]))))) || (((/* implicit */_Bool) (signed char)114))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_29 [i_0] = ((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)115)) == (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (2716119280U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [2ULL] [i_0]))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    {
                        arr_39 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) min(((signed char)94), ((signed char)110))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 18446744073709551615ULL)))) : (((((((/* implicit */_Bool) arr_35 [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned char)88)))) ? (max((((/* implicit */long long int) arr_1 [i_13])), (arr_21 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_13)))))))));
                        var_34 = ((/* implicit */long long int) arr_35 [i_0] [i_13]);
                    }
                } 
            } 
        } 
        var_35 = ((long long int) ((((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)94)) : (arr_22 [i_0] [i_0]))) >= (((/* implicit */int) ((unsigned short) -2080832991642448589LL)))));
    }
    for (unsigned char i_14 = 1; i_14 < 11; i_14 += 4) 
    {
        arr_42 [i_14] = ((/* implicit */short) arr_41 [i_14 + 2]);
        arr_43 [i_14] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)235)), ((short)32492)))) + (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) (short)18566)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_40 [i_14]) < (arr_41 [i_14]))))) : (((arr_41 [i_14]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98)))))))));
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 12; i_15 += 2) 
        {
            for (long long int i_16 = 0; i_16 < 13; i_16 += 2) 
            {
                {
                    var_36 = ((((/* implicit */unsigned long long int) ((long long int) ((long long int) 20LL)))) | (((unsigned long long int) arr_47 [i_14] [i_15] [i_16] [i_15])));
                    arr_49 [i_14 + 2] [i_14] [i_16] = ((/* implicit */unsigned char) (+(((/* implicit */int) min(((unsigned short)18720), (((/* implicit */unsigned short) (unsigned char)231)))))));
                }
            } 
        } 
    }
}
