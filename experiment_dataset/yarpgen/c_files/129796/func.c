/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129796
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
    var_17 = var_3;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= ((-(arr_1 [i_0]))))))));
        arr_5 [i_0] |= ((/* implicit */short) ((((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_2 [i_0])))) & (((((/* implicit */_Bool) max((((/* implicit */unsigned int) 1057814730)), (3248486380U)))) ? (((/* implicit */int) ((((/* implicit */int) (short)4649)) <= (((/* implicit */int) (unsigned char)11))))) : (((/* implicit */int) var_1))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 |= ((/* implicit */unsigned long long int) ((273564868U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54704)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)6614))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7168))) : (273564868U)));
            /* LoopSeq 2 */
            for (signed char i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                arr_17 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) arr_13 [i_3 + 1]);
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    var_19 = ((/* implicit */_Bool) var_12);
                    arr_21 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)11)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_3] [i_3] [(_Bool)1] [i_3 + 1] [i_1])))));
                }
                arr_22 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_3 + 2] [i_3 + 2] [i_2])) ? (17997864137995285955ULL) : (((/* implicit */unsigned long long int) arr_20 [i_3 + 2] [i_3 + 2] [i_3 + 1]))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 1410899101)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)46))))) : (((/* implicit */int) (unsigned short)35180))));
            }
            for (signed char i_5 = 2; i_5 < 11; i_5 += 4) 
            {
                arr_25 [i_1] = ((/* implicit */_Bool) arr_11 [i_1]);
                arr_26 [i_1] [i_2] [i_2] [i_5 - 2] = ((/* implicit */signed char) var_4);
                arr_27 [i_1] = ((/* implicit */short) ((arr_14 [i_5 - 2] [i_2] [i_5]) && (arr_14 [i_5 - 1] [i_2] [i_5])));
                /* LoopSeq 4 */
                for (int i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                {
                    arr_31 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (unsigned char)245);
                    var_21 = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) 12686012169500910437ULL)))));
                    arr_32 [i_1] [i_2] [3U] [i_2] [(short)0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) - (arr_29 [i_1] [i_2] [i_5 + 3] [i_5 + 2] [i_5 - 1] [i_5 + 1])));
                    var_22 &= ((/* implicit */_Bool) (signed char)82);
                    var_23 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 14032526917280643458ULL))));
                }
                for (int i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
                {
                    var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (arr_6 [i_5] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7168)))));
                    var_25 *= ((/* implicit */short) arr_34 [i_1]);
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 3) 
                    {
                        arr_38 [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_16 [i_5] [i_1] [i_8 + 3] [i_5 + 2])) != (((/* implicit */int) arr_19 [i_1] [(signed char)12] [i_8] [i_7] [i_1]))));
                        var_27 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((long long int) (short)-21166))) : (((((/* implicit */unsigned long long int) 3248486382U)) - (var_12))));
                        var_28 &= (-(arr_36 [i_5] [i_5] [i_5 + 2] [i_5] [i_8] [i_8] [i_8]));
                    }
                    arr_39 [i_7] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_20 [i_1] [i_5] [i_7]);
                }
                for (short i_9 = 3; i_9 < 13; i_9 += 3) 
                {
                    arr_42 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_9)))));
                    arr_43 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_2] [i_9 - 3])) <= (((/* implicit */int) arr_15 [i_2] [i_5 + 3]))));
                    /* LoopSeq 4 */
                    for (short i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_9 + 1] [i_5 + 2] [i_5 + 3])) ? (arr_20 [i_9 - 3] [i_5 + 3] [i_5 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                        arr_46 [(short)7] [i_1] [i_5] [i_1] [(short)7] = ((((((/* implicit */_Bool) arr_9 [(_Bool)1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_10] [i_5] [i_5] [i_1]))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        arr_51 [i_1] [i_9 + 1] [i_1] [(unsigned char)5] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_35 [i_1] [i_1] [i_5] [i_9])) * (((/* implicit */int) (unsigned char)14))));
                        var_30 = ((/* implicit */unsigned short) ((arr_1 [i_1]) <= (((/* implicit */int) arr_16 [i_2] [i_1] [i_1] [i_2]))));
                    }
                    for (short i_12 = 4; i_12 < 12; i_12 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44983)) ? (((((/* implicit */_Bool) var_13)) ? (2273263521748875277LL) : (((/* implicit */long long int) 1410899091)))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))))))));
                        arr_54 [i_1] [i_2] [i_5] [i_5] [i_5 - 1] [i_2] [i_1] = ((/* implicit */unsigned int) ((arr_14 [i_12] [i_2] [i_1]) || (arr_14 [7U] [i_2] [i_9])));
                        arr_55 [i_5] [4ULL] [i_5] [i_5] [i_1] = ((/* implicit */unsigned char) (((_Bool)1) ? (3128090065U) : (((/* implicit */unsigned int) -69622043))));
                    }
                    for (unsigned long long int i_13 = 2; i_13 < 13; i_13 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_57 [i_5 + 3] [i_5 + 3] [i_5 + 3] [i_5] [i_9 - 2]))));
                        arr_58 [i_13] [(short)6] [i_1] [i_2] [(short)6] = ((/* implicit */signed char) (+(((/* implicit */int) arr_41 [i_9 - 3] [i_5 - 1]))));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) arr_7 [i_9 + 1] [i_1]))));
                        var_34 = ((/* implicit */_Bool) ((arr_49 [10] [i_13 + 1] [i_9 - 2] [i_5 - 1]) | (arr_49 [i_13] [i_13 - 1] [i_9 - 3] [i_5 + 1])));
                    }
                }
                for (int i_14 = 2; i_14 < 13; i_14 += 2) 
                {
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1410899091)) ? (((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [13ULL] [i_1])))))) : (0)));
                    arr_61 [i_1] [i_1] [(signed char)10] [(unsigned char)11] [i_1] = ((/* implicit */unsigned short) var_10);
                    var_36 ^= ((/* implicit */unsigned int) ((long long int) 504));
                }
            }
            arr_62 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_47 [i_2] [i_1] [5] [i_1] [i_1]))));
            var_37 = ((/* implicit */unsigned long long int) arr_40 [i_1] [i_1] [i_1] [i_2]);
            var_38 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1]))))));
        }
    }
    var_39 = ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) var_10))), ((+(((/* implicit */int) (short)21403))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_2))))));
    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-21404)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)11))));
}
