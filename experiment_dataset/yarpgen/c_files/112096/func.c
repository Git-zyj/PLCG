/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112096
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */short) min((var_4), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (13297715633250498878ULL)))))))));
                    var_11 = ((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) (short)28681)) : (((/* implicit */int) arr_1 [i_2] [i_0]))))) : (max((((/* implicit */unsigned int) var_3)), (var_0))));
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (min((arr_5 [i_1]), (((/* implicit */unsigned long long int) var_4))))));
                }
            } 
        } 
        var_13 *= ((/* implicit */short) var_1);
    }
    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_9))));
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_5))));
                }
            } 
        } 
        var_16 |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3] [i_3 - 1] [i_3])) ? (((/* implicit */int) arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) var_1)))), (2147483647)));
        var_17 = ((/* implicit */int) max((var_17), (max((((((/* implicit */int) arr_10 [i_3 + 1] [i_3 - 1])) * (((/* implicit */int) arr_13 [i_3 - 1] [i_3] [i_3 + 1] [i_3 + 1])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_13 [0U] [i_3] [i_3] [i_3 + 1]))))))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 2; i_6 < 17; i_6 += 1) 
        {
            var_18 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28682))) <= (13297715633250498901ULL)));
            var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 1734815691)) ? (((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_6]))))) : (max((arr_15 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) -1007405981)))))), (((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)57)), ((short)-20691))))));
            /* LoopNest 3 */
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                for (short i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) (+(4062484671U)))), (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)179))) - (min((((/* implicit */unsigned int) arr_20 [i_3] [i_3 - 1] [i_8] [i_3] [i_3 + 1])), (1407343471U))))))));
                            arr_27 [i_3] [i_3] [i_8] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65517)) & (((/* implicit */int) (unsigned short)58975))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */short) (+(((((/* implicit */int) arr_13 [i_6 + 1] [(unsigned short)2] [i_6 - 2] [i_6 - 2])) % (((/* implicit */int) var_8))))));
            var_22 = ((/* implicit */unsigned long long int) arr_18 [i_3 + 1] [i_3 - 1] [(unsigned char)2]);
        }
    }
    for (int i_10 = 0; i_10 < 15; i_10 += 1) 
    {
        var_23 &= ((/* implicit */short) ((int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)6566)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (((arr_22 [i_10] [(unsigned char)2] [(unsigned char)2] [i_10]) >> (((((/* implicit */int) var_1)) - (2787))))))));
        var_24 += ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_10] [i_10])) : (((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_10] [i_10])) && (((/* implicit */_Bool) arr_10 [i_10] [i_10]))))) : (((/* implicit */int) var_3))))));
        /* LoopSeq 4 */
        for (unsigned short i_11 = 1; i_11 < 12; i_11 += 2) /* same iter space */
        {
            var_25 -= ((/* implicit */short) var_4);
            arr_32 [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((unsigned short) 2433904446U))) & (((/* implicit */int) ((((/* implicit */_Bool) 10847882731049760039ULL)) || (((/* implicit */_Bool) (unsigned short)13886))))))) << (((((/* implicit */int) arr_16 [1ULL])) + (5085)))));
        }
        for (unsigned short i_12 = 1; i_12 < 12; i_12 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) min((4294967295U), (((/* implicit */unsigned int) arr_35 [i_10] [i_12]))))))));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) min((arr_8 [i_10] [i_12]), (((/* implicit */unsigned short) arr_34 [i_10] [i_10])))))))) ? (((((/* implicit */int) arr_28 [i_12 + 2] [14ULL])) + (((/* implicit */int) (unsigned short)40392)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 4062484689U)))))));
            var_28 = ((/* implicit */unsigned char) var_6);
            arr_36 [i_10] [(short)0] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) var_7))))), ((~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_6)))))))));
            /* LoopNest 3 */
            for (unsigned int i_13 = 1; i_13 < 12; i_13 += 4) 
            {
                for (int i_14 = 1; i_14 < 13; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 15; i_15 += 3) 
                    {
                        {
                            arr_45 [i_10] [i_10] [i_10] [i_10] [(unsigned short)9] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7598861342659791568ULL)) && (((/* implicit */_Bool) arr_30 [i_14 + 1] [i_13 + 2] [i_12 + 1]))))), (max((min((((/* implicit */unsigned long long int) var_1)), (10847882731049760051ULL))), (min((arr_22 [i_10] [i_10] [i_13 - 1] [i_15]), (((/* implicit */unsigned long long int) -1511751053)))))));
                            var_29 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_10] [i_12]))));
                            var_30 = ((((/* implicit */_Bool) arr_19 [(unsigned short)2] [(unsigned short)2] [i_13] [16U])) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (var_5))), (var_2))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_16 = 0; i_16 < 15; i_16 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_17 = 0; i_17 < 15; i_17 += 4) 
            {
                var_31 *= ((/* implicit */int) ((((/* implicit */_Bool) ((1301102942420742402ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) && (((/* implicit */_Bool) max((arr_20 [i_10] [i_16] [i_17] [i_17] [i_16]), (var_3))))));
                var_32 = ((/* implicit */unsigned char) 3056361260U);
                var_33 = ((/* implicit */unsigned short) (short)-25335);
                /* LoopNest 2 */
                for (unsigned int i_18 = 1; i_18 < 12; i_18 += 1) 
                {
                    for (short i_19 = 0; i_19 < 15; i_19 += 2) 
                    {
                        {
                            var_34 = max((max((arr_50 [i_17] [i_17] [i_17]), (arr_50 [i_18] [i_18 + 3] [i_18 - 1]))), (134184960U));
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_18] [i_18] [i_17] [i_16] [i_10])) ? (var_5) : (((/* implicit */unsigned long long int) var_0))));
                            var_36 = ((/* implicit */unsigned short) (short)10094);
                        }
                    } 
                } 
            }
            var_37 = ((var_2) >> (((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))), (max((((/* implicit */unsigned long long int) 2950852129U)), (var_2))))) - (7991928543527223659ULL))));
        }
        for (unsigned int i_20 = 0; i_20 < 15; i_20 += 2) 
        {
            var_38 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)146))))) && (((/* implicit */_Bool) arr_22 [i_10] [i_10] [i_10] [i_10]))))), (((unsigned long long int) arr_59 [i_10] [i_10] [i_10]))));
            var_39 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_8 [i_10] [i_10])) ? (-1800449594) : (((/* implicit */int) arr_8 [i_10] [i_10])))), (((((/* implicit */int) arr_8 [i_20] [i_10])) & (((/* implicit */int) arr_8 [i_10] [i_10]))))));
            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((min((var_9), (((unsigned int) var_1)))) > (var_9))))));
            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_24 [i_20] [i_20] [i_20] [(unsigned short)3] [i_20]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_4))))));
        }
        var_42 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_31 [i_10])), (((((/* implicit */_Bool) arr_49 [4U] [i_10] [4U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_9)))));
        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */short) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_10] [i_10] [i_10])))))) : ((+(arr_40 [i_10] [i_10] [i_10] [i_10])))))) || (((/* implicit */_Bool) arr_46 [i_10] [i_10]))));
    }
    for (short i_21 = 1; i_21 < 18; i_21 += 3) 
    {
        var_44 = ((/* implicit */unsigned int) (unsigned short)58527);
        arr_64 [i_21] [18U] = ((/* implicit */unsigned short) ((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61796)))));
        arr_65 [i_21] = ((/* implicit */unsigned int) var_3);
    }
    var_45 = ((/* implicit */unsigned short) var_0);
    var_46 = var_1;
}
