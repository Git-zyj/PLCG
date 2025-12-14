/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172204
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((_Bool) min((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (arr_2 [i_0])))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))))));
                            var_13 = (i_1 % 2 == zero) ? (((/* implicit */_Bool) (((~(((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_3])))) & (((((/* implicit */int) arr_0 [i_0] [i_1])) >> (((((/* implicit */int) arr_8 [i_1] [i_0] [i_1] [i_0])) - (93)))))))) : (((/* implicit */_Bool) (((~(((/* implicit */int) arr_8 [i_1] [i_1] [i_2] [i_3])))) & (((((/* implicit */int) arr_0 [i_0] [i_1])) >> (((((((/* implicit */int) arr_8 [i_1] [i_0] [i_1] [i_0])) - (93))) + (47))))))));
                        }
                    } 
                } 
                var_14 &= (!(((/* implicit */_Bool) (signed char)127)));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    arr_16 [i_4] &= ((/* implicit */unsigned int) ((((_Bool) 1065920846085741525ULL)) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) ((_Bool) arr_7 [i_4] [i_0] [i_4])))))) : (min((((/* implicit */long long int) (~(arr_10 [i_4] [i_4] [i_4] [i_0])))), (var_1)))));
                    arr_17 [i_1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_15 [i_1] [i_1] [i_4])), (min((((/* implicit */long long int) (_Bool)1)), (-9223372036854775797LL)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) var_7))))) : ((-(((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */unsigned short) (short)23662)))))))));
                }
                arr_18 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)120)) / (-1890305551)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0]), (arr_3 [i_1]))))) : (arr_11 [i_1] [i_1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_4))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) var_12)) ^ (((((/* implicit */_Bool) min(((short)-3532), (((/* implicit */short) var_4))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)77)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)6065)) : (((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_25 [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (_Bool)1)), (max((((((/* implicit */_Bool) (short)-28522)) ? (arr_22 [i_5] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_5] [i_5] [i_5]))))), (((/* implicit */unsigned int) ((arr_21 [i_5]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    arr_28 [i_5] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */long long int) 2355157420U)) : (min((((long long int) 7)), (((/* implicit */long long int) (short)3840))))));
                    arr_29 [i_7] &= ((/* implicit */unsigned short) min((((unsigned long long int) arr_20 [i_7])), (((/* implicit */unsigned long long int) max((var_1), (var_6))))));
                    var_16 = ((/* implicit */signed char) arr_26 [i_5]);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
                {
                    arr_37 [i_8] [i_8] [i_8] = ((/* implicit */signed char) (~((~(4224326672U)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) ((((/* implicit */int) arr_31 [i_8])) != (((/* implicit */int) (_Bool)1))));
                                arr_42 [i_9] [i_11] [i_8] [i_9] [i_9] &= ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) (signed char)-124)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        arr_45 [i_8] [i_9 + 1] [i_8] [12LL] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned char)77)))))));
                        arr_46 [i_13] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_33 [i_8] [i_8])) : (((/* implicit */int) var_3))))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_14 = 0; i_14 < 20; i_14 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned short i_16 = 3; i_16 < 18; i_16 += 1) 
                        {
                            {
                                arr_53 [i_15] [i_15] [i_15] [i_8] [i_9] [i_9 + 1] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (747278057U)))) ? ((~(((/* implicit */int) (short)-28522)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1)))))));
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((_Bool) (~(1640281436755387155LL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_8] [i_9]))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) var_3)))))));
                        arr_58 [i_8] [i_9 - 2] [i_9] [i_17] &= ((/* implicit */unsigned short) ((_Bool) ((signed char) var_1)));
                        arr_59 [i_9 + 1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_8] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_33 [i_8] [i_8]))));
                    }
                    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_52 [i_8] [i_9 - 1]))));
                    arr_60 [(_Bool)1] [i_8] [13ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (_Bool)1))) >= (((((/* implicit */int) var_11)) & (((/* implicit */int) (unsigned short)65535))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_8] [i_9 - 2])) ? (((/* implicit */int) arr_48 [i_8] [i_9 - 1])) : (((/* implicit */int) arr_48 [i_8] [i_9 - 1]))));
                }
                var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) -5111720565646207173LL)) && (((/* implicit */_Bool) (short)-10409))))) << (((((/* implicit */_Bool) max((2451280173U), (((/* implicit */unsigned int) arr_54 [i_8] [(short)16] [i_8] [i_8] [i_9] [i_9 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (max((((/* implicit */unsigned int) arr_51 [i_8] [i_9 - 1] [i_9 - 2])), (arr_30 [i_8])))))));
                arr_61 [13ULL] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_54 [i_8] [i_8] [i_8] [i_8] [i_8] [i_9]))));
            }
        } 
    } 
}
