/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152872
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) arr_3 [(signed char)7]);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_8 [i_0] [i_1] [i_0]) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (unsigned char)115))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) arr_2 [(unsigned short)0] [(short)5])) : (((/* implicit */int) arr_0 [i_2]))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_1] [i_0])) : (909040492U))))) >> (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1]))) : (min((var_13), (((/* implicit */unsigned long long int) arr_0 [i_4]))))))));
                                var_20 = ((/* implicit */int) 909040492U);
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */signed char) 7836428239260356337ULL);
                    var_22 &= ((/* implicit */short) arr_0 [i_0]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1887785790)) ? (3385926800U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2)))));
    var_24 = ((/* implicit */short) var_10);
    /* LoopSeq 4 */
    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        var_25 = ((/* implicit */unsigned char) arr_13 [(unsigned char)12]);
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            var_26 *= (!((!(((/* implicit */_Bool) arr_0 [i_6])))));
            var_27 = ((/* implicit */long long int) (unsigned short)19828);
        }
        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            var_28 = ((/* implicit */unsigned char) 909040492U);
            var_29 = (+(((((/* implicit */_Bool) arr_10 [(unsigned short)9] [(unsigned short)9] [i_7] [(unsigned short)9])) ? (((/* implicit */int) arr_0 [i_7])) : (((/* implicit */int) min(((signed char)2), (((/* implicit */signed char) arr_8 [i_7] [i_5] [5LL]))))))));
        }
    }
    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                for (short i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    {
                        var_30 = (unsigned char)141;
                        var_31 = ((/* implicit */int) min((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_8])) != ((+(((/* implicit */int) (unsigned short)65530)))))))));
                        var_32 = min(((+(((/* implicit */int) arr_30 [i_8])))), (((/* implicit */int) arr_30 [i_9])));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */unsigned short) min((min((((/* implicit */int) arr_28 [i_8] [i_8] [i_8] [8])), (-490824490))), (((((/* implicit */int) (unsigned char)233)) + (((/* implicit */int) arr_28 [i_8] [i_8] [i_8] [9ULL]))))));
        var_34 = ((/* implicit */unsigned long long int) 3385926804U);
        /* LoopSeq 2 */
        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 3) 
        {
            var_35 = ((/* implicit */signed char) min((min((arr_26 [i_12] [i_12] [i_8]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) arr_23 [i_8]))))))), (min((min((((/* implicit */unsigned int) (_Bool)1)), (4056834211U))), (((/* implicit */unsigned int) min(((unsigned short)4080), ((unsigned short)45723))))))));
            var_36 = ((/* implicit */int) (~(909040484U)));
        }
        for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
        {
            arr_38 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_13]))) : (min((arr_25 [2] [(unsigned char)4]), (arr_25 [i_8] [(unsigned short)16])))))) & (((((/* implicit */_Bool) 536870400)) ? (((arr_23 [i_8]) | (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28)))))));
            var_37 = ((/* implicit */unsigned int) (unsigned short)16);
        }
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 3) 
    {
        var_38 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_14] [(unsigned short)12] [i_14]))));
        var_39 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (unsigned char)28)))) ^ (((((/* implicit */int) var_14)) * (((/* implicit */int) (unsigned short)45708))))));
    }
    for (short i_15 = 0; i_15 < 10; i_15 += 3) 
    {
        arr_45 [i_15] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_26 [i_15] [i_15] [i_15])) >= (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)16384)))) ? (arr_3 [(unsigned char)9]) : (((((/* implicit */_Bool) 0U)) ? (arr_3 [i_15]) : (((/* implicit */long long int) 1786642797))))))));
        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((3856631856U), (arr_24 [i_15] [i_15])))) * ((+(0ULL)))))) ? (((/* implicit */int) ((min((var_9), (((/* implicit */unsigned int) (signed char)73)))) < ((+(arr_24 [i_15] [i_15])))))) : ((-(((/* implicit */int) arr_8 [i_15] [i_15] [i_15]))))));
        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_30 [i_15]) ? (((/* implicit */int) arr_30 [(unsigned char)13])) : (((/* implicit */int) arr_30 [i_15]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)49142))))) && (((/* implicit */_Bool) arr_6 [4] [(_Bool)1] [(signed char)0])))))) : ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) ^ (17538044757449105696ULL)))))));
    }
}
