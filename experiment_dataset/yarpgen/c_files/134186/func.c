/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134186
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
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((((int) arr_0 [2ULL] [2ULL])) * (((/* implicit */int) ((((/* implicit */_Bool) 224563437U)) || (((/* implicit */_Bool) (-2147483647 - 1)))))))) < ((+(((/* implicit */int) arr_1 [i_0] [8])))))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned char) (unsigned short)5664);
            var_14 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1])) ? (arr_4 [(short)10] [i_0 - 1]) : (arr_4 [i_0] [i_0 - 2]))), ((+((+(((/* implicit */int) (unsigned short)5653))))))));
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (unsigned char)52)))), (((/* implicit */int) ((unsigned char) 2147483632)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)59896)), (arr_4 [i_0] [i_1])))))))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1])) ? (arr_3 [i_1] [i_0 + 1]) : (((/* implicit */long long int) arr_4 [i_1] [i_0 + 1]))))));
            var_16 = ((/* implicit */signed char) ((arr_2 [i_0]) ? (((((/* implicit */int) arr_2 [i_1])) / (((/* implicit */int) (unsigned short)59883)))) : (((((/* implicit */_Bool) (unsigned short)59854)) ? (((/* implicit */int) (unsigned short)59863)) : (((/* implicit */int) arr_2 [i_0]))))));
            var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)59862)) ? (((/* implicit */int) (unsigned short)59865)) : (((/* implicit */int) (unsigned char)52)))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [(unsigned char)15])))))));
        }
        for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)5682)) && (((/* implicit */_Bool) 245155854U)))))));
                            var_19 = ((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_0 [i_0 + 2] [i_5 + 2])))));
                            var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */unsigned long long int) 1878129842)) : (5580966678475313404ULL)))) ? (((/* implicit */int) arr_0 [i_5 - 2] [i_0 + 2])) : (arr_5 [i_0 - 1] [i_5]))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)188)) - (((/* implicit */int) (unsigned short)59875))))) <= (((unsigned int) (unsigned char)23)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) 6152240358611875508ULL)) ? (arr_12 [(unsigned char)9] [i_2] [(unsigned short)5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)120))))))))));
                /* LoopSeq 4 */
                for (short i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_7] [i_2] [i_6]));
                    var_23 &= ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_6] [i_6]);
                }
                for (short i_8 = 0; i_8 < 18; i_8 += 1) /* same iter space */
                {
                    var_24 = max((((/* implicit */unsigned int) ((((((/* implicit */int) arr_15 [i_0] [i_2])) != (arr_5 [i_8] [(_Bool)1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0 + 2] [i_2] [i_6] [i_8] [i_6] [i_0]))))) : (((/* implicit */int) arr_2 [i_0 - 1]))))), (((unsigned int) (signed char)-122)));
                    var_25 &= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 2])) ? (((/* implicit */long long int) ((int) arr_13 [i_2] [2U] [i_6] [i_6] [i_6]))) : (((long long int) arr_23 [i_0] [i_2] [i_8] [i_8] [i_0] [i_8]))))));
                    var_26 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_5 [i_2] [i_2]) : (arr_14 [9] [i_2] [(unsigned char)11] [i_8] [i_0 - 1] [i_8] [i_8])));
                }
                for (short i_9 = 3; i_9 < 17; i_9 += 4) 
                {
                    var_27 = ((/* implicit */short) arr_18 [i_9 - 3] [i_2] [i_6] [i_9] [(unsigned char)6]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)82))))) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_19 [i_0] [i_0 - 1] [(_Bool)1] [2] [i_9 - 3]))));
                        var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59874)) ? (arr_10 [i_6] [i_2] [i_6] [i_9]) : (((/* implicit */long long int) arr_24 [i_0] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_10] [i_2] [i_6]))))) : (((/* implicit */int) arr_1 [i_0] [i_9 - 2])));
                        var_30 = (((+(((/* implicit */int) arr_17 [i_2] [i_6] [i_6] [i_9] [i_10] [i_0 - 2])))) << (((((/* implicit */int) (unsigned short)21397)) - (21389))));
                    }
                    var_31 = ((/* implicit */unsigned long long int) ((unsigned int) ((long long int) (unsigned short)59889)));
                    var_32 = ((/* implicit */unsigned int) (+(arr_12 [i_9 - 3] [i_2] [i_6])));
                    var_33 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((14668995108978948405ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5671)))))) ? (((/* implicit */int) arr_19 [11] [i_2] [i_6] [i_9 - 1] [i_6])) : (((((/* implicit */_Bool) (unsigned short)59873)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) arr_26 [i_0])))))), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_6] [i_6])) >= (((/* implicit */int) (unsigned char)27)))))));
                }
                for (int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    var_34 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_11 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_11 [i_2] [i_0 - 1]))))) < (((unsigned long long int) arr_11 [i_0] [i_0 - 1]))));
                    var_35 |= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) arr_15 [i_0] [i_0 - 1])) | (((/* implicit */int) arr_19 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_6])))));
                }
                var_36 -= ((/* implicit */unsigned char) ((unsigned int) ((arr_2 [i_0 + 2]) || (arr_2 [i_0 - 1]))));
                var_37 |= ((/* implicit */unsigned char) (short)-32767);
            }
            for (unsigned char i_12 = 0; i_12 < 18; i_12 += 1) 
            {
                var_38 = min((((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)62))) : (9223372036854775807LL))), (((/* implicit */long long int) 640111481)));
                var_39 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) max((arr_9 [i_12] [i_12] [i_12] [i_12]), (((/* implicit */short) arr_34 [i_2] [i_2] [i_12] [i_0 + 1]))))) * ((-(((/* implicit */int) (unsigned short)5358)))))))));
            }
            var_40 += max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_0 + 1] [i_0 - 2] [(unsigned char)2] [i_0]))))), (((signed char) max((((/* implicit */long long int) -67108864)), (arr_3 [i_0] [i_0 + 2])))));
            var_41 = min((((/* implicit */unsigned long long int) ((((int) arr_30 [i_0] [i_2] [i_0] [i_0 + 2])) >> (((((/* implicit */int) (signed char)-118)) + (122)))))), (((unsigned long long int) min((((/* implicit */int) arr_25 [8] [i_2] [i_2] [i_2] [i_0] [i_0])), (arr_14 [i_0 + 1] [i_2] [i_0] [6U] [i_2] [i_2] [i_2])))));
            var_42 = min((arr_21 [(unsigned short)16] [i_2] [i_0]), (((((/* implicit */_Bool) (~(364966066U)))) ? (((((/* implicit */_Bool) 6219822676202695091ULL)) ? (arr_24 [i_0] [i_0]) : (((/* implicit */int) arr_33 [(unsigned char)14])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1668412719U))))))));
        }
        var_43 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((/* implicit */int) arr_33 [i_0]))))), (((arr_3 [i_0 - 1] [i_0 - 1]) - (arr_3 [i_0 - 1] [i_0 - 1])))));
    }
    for (short i_13 = 0; i_13 < 23; i_13 += 4) 
    {
        var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((((/* implicit */int) min((arr_36 [i_13] [i_13]), (arr_36 [i_13] [i_13])))) < (((/* implicit */int) arr_36 [i_13] [i_13])))))));
        var_45 = ((/* implicit */unsigned long long int) ((_Bool) ((short) arr_35 [i_13])));
    }
}
