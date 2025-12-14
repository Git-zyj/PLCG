/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123983
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
    var_14 = ((/* implicit */int) max((var_14), ((~(((/* implicit */int) (signed char)75))))));
    var_15 &= ((/* implicit */unsigned long long int) (!(var_10)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_2]))))) - (1871509549U)))));
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_9 [i_4] [(signed char)2] [i_1]))));
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) (-(((unsigned int) arr_6 [i_0] [i_3 - 1]))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [(unsigned short)6]))) & (((((((/* implicit */long long int) 3524216020U)) | (arr_23 [i_7] [i_6] [i_1]))) & (((/* implicit */long long int) var_2))))));
                                var_18 = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (var_7)))))));
                                arr_25 [11U] [i_0] [(unsigned short)7] [(unsigned char)9] [i_1] [i_0] [(unsigned char)9] = ((/* implicit */_Bool) (+(((/* implicit */int) ((-4307714836857586483LL) < (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_11) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) - (((unsigned int) var_2)))));
                }
                for (signed char i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                {
                    arr_30 [i_0] [i_0] [(signed char)10] [i_8] = ((/* implicit */unsigned char) (-((+(((arr_13 [i_0] [i_1] [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_8] [(short)1] [i_1] [(short)1] [i_1] [i_0])))))))));
                    var_19 |= ((/* implicit */unsigned int) ((unsigned short) min((var_6), (((/* implicit */signed char) ((_Bool) 2563064123U))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_35 [i_0] [i_1] [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) ((long long int) arr_4 [i_10]));
                                var_20 ^= ((/* implicit */_Bool) (-(((((/* implicit */int) arr_33 [i_9] [i_10 - 1] [i_10 - 1] [i_10] [i_8])) * (((/* implicit */int) arr_33 [i_1] [i_10 - 1] [i_10 - 1] [i_10] [i_1]))))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((unsigned int) min((((/* implicit */unsigned long long int) (signed char)21)), (min((arr_27 [i_1] [i_8] [i_9]), (var_7))))))));
                                arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_31 [i_0] [i_8] [i_1] [i_0])) || (((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) arr_29 [i_10] [i_10 - 1] [i_10] [i_10]))))), ((((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((long long int) (short)6668))) : (arr_21 [i_9] [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1])))));
                            }
                        } 
                    } 
                    arr_37 [i_1] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_1] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_28 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_28 [i_0] [(unsigned short)13] [i_8] [i_0])))) : (((((/* implicit */unsigned long long int) arr_28 [i_0] [i_1] [i_1] [i_8])) % (var_7)))));
                }
                for (signed char i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_12 = 3; i_12 < 12; i_12 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) 0U)) & (arr_6 [i_0] [i_11])))));
                        arr_43 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_41 [i_0] [i_12 - 2] [i_12 - 1] [i_12 - 3]);
                    }
                    var_23 = ((unsigned int) min(((-(arr_3 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (4503599627370495ULL))))));
                }
                arr_44 [i_1] &= ((/* implicit */long long int) var_11);
                var_24 = ((/* implicit */long long int) min((arr_39 [i_1] [i_1] [i_0]), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_0] [i_0])) ^ (((/* implicit */int) var_6))))) * (var_12)))));
            }
        } 
    } 
    var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)88)) ? (var_0) : (0U)))) ? (((4294967293U) / (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-87))))))) ? (((/* implicit */unsigned long long int) 1731903173U)) : (var_11)));
}
