/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168850
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
    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) var_16))));
    var_18 = ((/* implicit */unsigned char) ((short) var_1));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -8276112949702132703LL))))), (((((/* implicit */_Bool) -8276112949702132696LL)) ? (((35184372088576ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)137))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -8276112949702132699LL))))))))));
        var_19 = ((/* implicit */short) ((2690354396U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)27714)))));
    }
    /* LoopSeq 4 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
        var_20 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)19290))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                arr_23 [i_1] [i_2] [5ULL] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_5] [i_1])) & (((/* implicit */int) var_5))))) : ((~(18446708889337463011ULL)))));
                                var_21 = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)143));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_10 [i_1] [i_3] [i_5]))) ? (((/* implicit */int) arr_21 [i_1] [i_2] [i_2] [i_4] [i_4] [i_5] [i_2])) : (((/* implicit */int) ((short) arr_12 [i_2] [i_2] [i_4] [i_2])))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) arr_9 [0ULL] [i_4])) : (((/* implicit */int) arr_2 [i_2]))))));
                            }
                        } 
                    } 
                    arr_24 [i_1] [i_2] = ((/* implicit */unsigned char) arr_18 [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)19290)) ? (18446708889337463017ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_1] [i_2] [i_2] [i_3] [i_6] [10LL] [i_7])) | (((/* implicit */int) var_8)))))));
                                arr_30 [(unsigned short)5] [(unsigned short)2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_17 [i_7] [i_6] [i_6] [i_3] [i_2] [i_1])) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_3] [i_6] [i_7] [i_3])) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_3] [i_6] [i_7] [i_6])))), (((((/* implicit */int) arr_17 [i_1] [i_1] [3ULL] [0U] [i_6] [(unsigned short)10])) ^ (((/* implicit */int) var_13))))));
                                var_24 = ((/* implicit */long long int) (~(min(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_2 [i_1])) * (((/* implicit */int) (unsigned char)208))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_9 = 1; i_9 < 11; i_9 += 3) 
                        {
                            arr_35 [i_1] [i_9] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_9 + 1] [i_9 + 1])) ? (arr_7 [i_9 + 1] [i_9 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) | ((+(arr_7 [i_9 + 1] [i_9 + 1])))));
                            arr_36 [i_1] [i_2] [i_2] [i_9] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)20)))) % (((arr_22 [i_1] [i_1] [i_3] [(unsigned short)2] [i_1] [i_9] [i_3]) % (((/* implicit */long long int) arr_32 [i_1] [i_1] [i_1] [i_1] [i_1]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-127))))) - (((/* implicit */int) arr_17 [i_3] [i_9 + 1] [(unsigned char)4] [i_9] [i_9 + 1] [i_9 - 1]))))));
                        }
                        var_25 ^= ((((/* implicit */_Bool) 35184372088581ULL)) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7689))));
                    }
                    for (unsigned short i_10 = 2; i_10 < 11; i_10 += 2) 
                    {
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) arr_37 [i_1] [i_1] [i_10 - 1] [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) arr_25 [i_1] [(unsigned short)2] [i_10 - 2] [8])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))));
                        var_27 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_1]))));
                    }
                    for (unsigned short i_11 = 4; i_11 < 9; i_11 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) (((-(((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65526))))))) % (((/* implicit */unsigned int) (~(((/* implicit */int) var_13)))))));
                        arr_41 [(unsigned short)8] [i_3] [4LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (arr_27 [i_2] [i_11] [i_11] [i_11] [i_11 - 2] [i_11]) : (((/* implicit */unsigned long long int) (+(arr_0 [(unsigned short)12]))))));
                    }
                    arr_42 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */int) (+(((((/* implicit */_Bool) 72053195991416832LL)) ? (35184372088602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
        var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) ((signed char) var_12))) : (((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) (unsigned short)7936)) : (((/* implicit */int) (_Bool)1))))))) ? (max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (var_1))))) : (max((arr_22 [(unsigned short)0] [i_1] [i_1] [(unsigned short)0] [i_1] [i_1] [i_1]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19290))) - (1U))))))));
    }
    for (int i_12 = 0; i_12 < 13; i_12 += 4) 
    {
        arr_45 [i_12] [i_12] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)41755)) || ((_Bool)1))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775801LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_12]))) : (3608484690U))))))));
        arr_46 [i_12] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [8LL])) ? (((/* implicit */int) arr_3 [i_12])) : (((/* implicit */int) var_7)))))))));
        var_30 = ((/* implicit */signed char) var_16);
        var_31 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (arr_0 [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) < (((/* implicit */long long int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned short) (signed char)63))))))));
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 3) 
    {
        var_32 = ((((/* implicit */_Bool) arr_47 [i_13])) ? (-8276112949702132703LL) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19290))) | (var_1))));
        var_33 = ((((/* implicit */int) arr_48 [i_13])) - (((/* implicit */int) arr_48 [i_13])));
        arr_49 [i_13] [i_13] = ((/* implicit */unsigned long long int) ((short) (_Bool)1));
    }
    /* vectorizable */
    for (unsigned short i_14 = 3; i_14 < 20; i_14 += 4) 
    {
        arr_52 [i_14] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (arr_50 [i_14 - 2] [i_14 + 1])));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_14 - 3] [i_14 - 1])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
        arr_53 [i_14] [i_14] = ((/* implicit */unsigned int) ((var_4) - (arr_50 [20ULL] [i_14 + 1])));
        arr_54 [2ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_50 [i_14] [i_14 - 2]))));
    }
    var_35 = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))), (((((/* implicit */_Bool) 2006636141)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
}
