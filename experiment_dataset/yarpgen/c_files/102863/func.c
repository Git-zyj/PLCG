/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102863
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_12))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) min((min((min((1299840697185834974LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) max((arr_3 [i_0]), (arr_3 [i_0])))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) 6762546250348287674LL)) ? (((/* implicit */int) (short)1788)) : (-1923142042))), (((/* implicit */int) arr_3 [i_0])))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            var_20 = ((/* implicit */unsigned short) max((max(((-(((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-34)), ((unsigned short)49109)))))), (((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0]))));
            var_21 = ((/* implicit */unsigned char) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])) && (((/* implicit */_Bool) 6571585914977325527ULL)))))) : (max((((/* implicit */long long int) arr_6 [i_0 - 1] [i_1])), (arr_0 [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_6 [i_0 - 1] [i_1 + 1])))))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 65970697666560LL)) && (((/* implicit */_Bool) max((((arr_6 [i_0 + 1] [i_1]) ? (65970697666560LL) : (((/* implicit */long long int) 4288398180U)))), (((/* implicit */long long int) arr_6 [i_1 - 2] [i_1 + 1])))))));
        }
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 19; i_2 += 3) 
        {
            var_23 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)14585)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : ((-9223372036854775807LL - 1LL)))) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1])))));
            var_24 = ((/* implicit */unsigned long long int) 5222171941291174091LL);
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) ((3912327009U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1])))));
            var_26 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_3] [i_3])) ? (arr_9 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220)))))) ? (((/* implicit */int) arr_3 [i_3])) : (((((/* implicit */int) arr_6 [10U] [10U])) + (((/* implicit */int) (_Bool)1))))));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) -3958410287036609831LL))));
            var_28 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_3])) % (((/* implicit */int) (signed char)34))))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)114)))) : (((/* implicit */int) (signed char)33))));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (unsigned char i_5 = 2; i_5 < 18; i_5 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (unsigned short)16))));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 2; i_6 < 19; i_6 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_4] [i_6 + 1])) ? (6569115U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 + 1] [i_0 + 1] [i_6 + 1])))));
                            var_31 = ((/* implicit */signed char) 1923142049);
                            var_32 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4638276435879171592LL)) && (((/* implicit */_Bool) arr_12 [i_0 - 1] [i_5 - 1] [i_6 - 2]))));
                        }
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            var_33 &= ((/* implicit */short) ((((/* implicit */int) (unsigned char)95)) | (((/* implicit */int) (unsigned short)54132))));
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3447)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_11 [i_3] [i_5] [16LL]))))) ? ((+(((/* implicit */int) (unsigned short)65510)))) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_3]))));
                        }
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            var_35 = ((((/* implicit */_Bool) (unsigned short)48548)) && (arr_6 [i_0 - 1] [i_5 + 1]));
                            var_36 = ((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0]))));
                            var_37 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 + 1] [i_5 + 1])) ? (((/* implicit */int) (unsigned short)4723)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_5 - 2]))));
                            var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                        }
                    }
                } 
            } 
        }
        for (long long int i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned short) (short)-25809)), ((unsigned short)0))), (((/* implicit */unsigned short) arr_6 [i_0] [i_0]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_23 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_9])) : (-2051958637)))), (max((arr_25 [i_9]), (((/* implicit */unsigned long long int) arr_6 [(signed char)13] [(signed char)13]))))))));
            var_40 = ((((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)-2)))), (((((/* implicit */int) (unsigned char)114)) % (((/* implicit */int) (short)-290))))))) || (((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)34))))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64980)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) arr_8 [i_10] [10ULL])) : (((/* implicit */int) arr_17 [i_10] [i_10] [i_10] [i_11] [i_11]))));
            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_10] [i_10])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_10])) - (((/* implicit */int) (unsigned short)65535))))) : ((-(1392382374U)))));
            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_10])) ? (arr_14 [i_10] [i_11] [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)70)))))) && (((/* implicit */_Bool) (unsigned char)200))));
            var_44 = ((/* implicit */signed char) ((arr_23 [i_10] [i_11] [i_11] [i_11] [i_11]) ? (((/* implicit */int) arr_23 [12U] [i_10] [i_10] [12LL] [i_11])) : (((/* implicit */int) arr_23 [3LL] [i_11] [i_11] [i_11] [i_11]))));
        }
        var_45 = ((/* implicit */_Bool) ((arr_23 [(signed char)5] [(signed char)5] [(_Bool)1] [i_10] [i_10]) ? (((((/* implicit */int) (short)-12367)) | (((/* implicit */int) (unsigned char)2)))) : (((/* implicit */int) arr_23 [i_10] [i_10] [11ULL] [i_10] [i_10]))));
    }
}
