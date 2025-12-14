/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181294
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
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) (((~(((/* implicit */int) var_13)))) <= (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [1LL])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15)))))))));
                    var_17 = (~(((/* implicit */int) arr_6 [i_0])));
                }
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    var_18 = ((/* implicit */unsigned char) (~((~(((long long int) (short)-15311))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) min(((+(4898347526104832527ULL))), (((/* implicit */unsigned long long int) 7963270673266555365LL))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7963270673266555350LL)) ? (7963270673266555365LL) : (7963270673266555365LL)));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((((/* implicit */_Bool) 8364402488169406618LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) : (-7963270673266555355LL))) <= (((/* implicit */long long int) min((711099411U), (((/* implicit */unsigned int) var_3))))))) ? (((max((3583867901U), (((/* implicit */unsigned int) arr_4 [i_4] [10] [i_0])))) >> (((((3583867901U) << ((((((-2147483647 - 1)) - (-2147483617))) + (58))))) - (3892314106U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_0)) & (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_3] [i_3] [i_4])))) >= (((/* implicit */int) max((arr_14 [i_0] [12LL] [i_3] [i_4] [i_3] [i_3]), (arr_4 [i_3] [(short)0] [(short)0])))))))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            var_22 ^= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4)))));
                            var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_3] [i_5])) ? (((/* implicit */int) arr_5 [i_6] [i_0] [i_3])) : (((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned char)6]))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_24 [i_0] [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_7]))));
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [4] = ((/* implicit */short) ((signed char) var_10));
                        }
                        var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_0])) * (((/* implicit */int) var_1))));
                    }
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -7963270673266555365LL)) ? (((/* implicit */unsigned int) 37958216)) : (711099411U)));
                        var_25 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) 2147483647)), (min((((/* implicit */unsigned int) var_7)), (711099404U))))), (((/* implicit */unsigned int) min((((/* implicit */short) var_13)), (((short) arr_13 [i_0])))))));
                    }
                    for (signed char i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
                    {
                        arr_32 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)12327)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_10))))) < (((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_16)))) & (min((-7333048257241828661LL), (((/* implicit */long long int) (signed char)60))))))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) & (711099394U)))) ? ((~(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) var_3))))) ? (arr_8 [i_1] [i_3] [i_9]) : (((/* implicit */unsigned long long int) min((-8364402488169406590LL), (((/* implicit */long long int) var_14))))))))));
                        var_27 = ((/* implicit */unsigned short) var_12);
                        arr_33 [i_9] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) (short)-16624)), (-8364402488169406608LL))), (((/* implicit */long long int) max((arr_13 [i_9]), (arr_13 [i_3]))))));
                        var_28 = ((/* implicit */short) -2913783931727982250LL);
                    }
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) var_12)) : (min((15360ULL), (((/* implicit */unsigned long long int) -4638235252700537106LL))))))) ? (((7963270673266555365LL) << ((((~(((/* implicit */int) (signed char)-112)))) - (111))))) : (((/* implicit */long long int) (~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)-27238)))))))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) arr_36 [i_12] [(signed char)0] [2LL]))));
                                arr_43 [i_0] [i_1] [i_1] [i_1] [i_1] [(unsigned short)7] = ((/* implicit */signed char) var_15);
                            }
                        } 
                    } 
                    var_31 &= ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)126)), (max((((((/* implicit */int) var_5)) << (((/* implicit */int) (signed char)11)))), ((~(((/* implicit */int) var_16))))))));
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((2913783931727982247LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65280)))))))) != (arr_11 [8U] [i_0]))))));
                        arr_46 [i_1] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_3))))));
                    }
                    arr_47 [i_0] [i_0] [i_1] [i_1] = arr_44 [i_1] [i_1] [i_1] [i_1];
                }
                var_33 = var_3;
                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) var_10))))))));
                var_35 = ((/* implicit */short) var_8);
            }
        } 
    } 
    var_36 = var_0;
    /* LoopNest 2 */
    for (short i_14 = 0; i_14 < 18; i_14 += 4) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                arr_52 [(_Bool)1] [(_Bool)1] [i_15] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_50 [(short)1] [i_15] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_14] [i_14] [i_14]))) : (2235387875U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_50 [i_14] [i_14] [i_14])) << (((((/* implicit */int) arr_50 [i_14] [i_15] [i_15])) - (18028))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_16 = 0; i_16 < 18; i_16 += 3) 
                {
                    var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_16] [i_16] [i_15] [i_14])) && (((/* implicit */_Bool) (unsigned short)56044))))))))));
                    var_38 = ((/* implicit */_Bool) ((short) var_15));
                    var_39 = ((/* implicit */int) ((((/* implicit */int) arr_50 [i_14] [i_15] [i_15])) < (((/* implicit */int) arr_50 [i_15] [i_15] [i_16]))));
                    arr_56 [(unsigned char)5] [i_14] [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)3072)) >= (((/* implicit */int) (signed char)-60))));
                }
                var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (~(((/* implicit */int) (short)32767)))))));
            }
        } 
    } 
}
