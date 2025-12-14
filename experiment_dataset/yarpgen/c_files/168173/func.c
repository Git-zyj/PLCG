/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168173
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
    var_16 *= ((/* implicit */unsigned long long int) 4294967295U);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        var_17 -= (+(((long long int) arr_8 [i_3] [i_3] [i_3] [i_3])));
                        arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3]);
                        arr_13 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (var_0)));
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (short)-24491))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [i_0] [i_2] [i_4] = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2] [i_4]);
                        var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)96))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (max((((/* implicit */unsigned int) (unsigned char)250)), (4294967284U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)(-32767 - 1))))))));
                        var_21 &= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) min((((/* implicit */signed char) (_Bool)1)), (var_10)))), ((short)-27084)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)24491), (((/* implicit */short) (unsigned char)54)))))) : ((-(arr_1 [i_4 - 1] [i_4 - 1])))));
                    }
                    arr_17 [i_1] = ((/* implicit */short) max(((~(arr_1 [i_1] [i_1]))), (((/* implicit */long long int) min((arr_9 [i_2] [i_1] [i_0]), (((/* implicit */int) (signed char)-33)))))));
                }
            } 
        } 
        var_22 = ((/* implicit */int) min((((2147483647) < (((/* implicit */int) (unsigned char)33)))), (arr_3 [i_0] [i_0])));
    }
    var_23 = max((((/* implicit */int) (unsigned char)129)), ((-(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) arr_19 [i_5]))), (min(((((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_5]))))), (((/* implicit */long long int) arr_18 [i_5]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 3) 
        {
            arr_23 [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6LL)) ? (arr_22 [i_5] [i_6]) : (((/* implicit */long long int) 4294967295U))))))))));
            var_24 ^= ((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-21444))) > (arr_21 [i_5] [i_5])))), (((short) arr_18 [i_5]))))), ((~(((/* implicit */int) (short)-24491))))));
            arr_24 [i_6] [i_6] [i_5] = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) (unsigned char)255)), (var_6))), (((/* implicit */long long int) (_Bool)1))));
            var_25 = ((/* implicit */unsigned long long int) arr_21 [i_5] [i_5]);
        }
        /* vectorizable */
        for (short i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    {
                        arr_34 [i_5] [i_5] [i_7] [i_8] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_7] [i_7] [i_7])) ? (arr_28 [i_5] [i_5] [i_5]) : (((/* implicit */long long int) var_11))))) ? (((/* implicit */int) (unsigned char)5)) : ((+(((/* implicit */int) (signed char)114)))));
                        var_26 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_7] [i_8] [i_9])))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned long long int) arr_32 [i_5] [i_7] [i_7] [i_7]);
        }
    }
    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 22; i_11 += 2) 
        {
            for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)73)))))))) ? (min(((((_Bool)1) ? (((/* implicit */int) (short)21444)) : (((/* implicit */int) var_1)))), (((/* implicit */int) arr_31 [i_12] [i_12])))) : (((((/* implicit */int) (signed char)-6)) | (((/* implicit */int) (short)-21444))))));
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) arr_44 [i_13]))));
                        arr_48 [i_10] [i_11] [i_12] [i_13] = ((min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) arr_42 [i_11])) - (108)))))), ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (short)2797))))))) > (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_10]))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        arr_52 [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(131071)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(arr_32 [i_14] [i_12] [i_11] [i_10]))))))) : (min((14536432645284995453ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_49 [i_14] [i_12] [i_11] [i_10])))))))));
                        var_30 = ((min((((((/* implicit */_Bool) 0LL)) ? (arr_47 [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))))), (((/* implicit */unsigned long long int) arr_49 [i_10] [i_11] [i_12] [i_14])))) != (((/* implicit */unsigned long long int) arr_30 [i_10] [i_10] [i_10])));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                        {
                            var_31 += ((/* implicit */_Bool) ((((((/* implicit */int) (short)-2801)) >= (((/* implicit */int) arr_27 [i_10] [i_11] [i_14])))) ? (((/* implicit */int) var_15)) : ((~(((/* implicit */int) arr_54 [i_10] [i_10] [i_10] [i_11] [i_10]))))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 716925875)) ? (((/* implicit */int) arr_49 [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_49 [i_10] [i_10] [i_10] [i_10]))));
                            arr_55 [i_10] [i_11] [i_15] [i_14] [i_15] = ((/* implicit */_Bool) (+(arr_40 [i_12] [i_14] [i_15])));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            arr_58 [i_14] [i_11] [i_11] [i_14] [i_14] = ((/* implicit */int) ((((min((((/* implicit */unsigned long long int) arr_39 [i_10])), (11519287321272640680ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_11]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((min(((short)27083), (arr_31 [i_14] [i_10]))), (((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_10] [i_10])) || (((/* implicit */_Bool) var_13)))))))))));
                            arr_59 [i_10] [i_11] [i_12] [i_14] [i_16] = ((/* implicit */unsigned int) (~(-5070533233577144297LL)));
                            arr_60 [i_14] = ((/* implicit */_Bool) var_11);
                            var_33 = ((/* implicit */int) ((((/* implicit */int) (short)2)) >= (((/* implicit */int) (_Bool)1))));
                        }
                    }
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_54 [i_10] [4U] [i_10] [4U] [i_10]))))));
    }
}
