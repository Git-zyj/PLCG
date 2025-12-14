/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130108
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            arr_12 [i_0] [i_0 + 2] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_3]))));
                            var_16 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) 32767)) ^ (((unsigned long long int) arr_3 [i_2]))));
                            arr_13 [i_4] [i_3] [i_2] [i_0] = ((/* implicit */unsigned char) (+(arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 1])));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                        {
                            arr_16 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((-32767) / (-32767)));
                            var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (short)3)), (min((5245339214746445410ULL), (((/* implicit */unsigned long long int) (signed char)25))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_3] [i_3] [6ULL] [3U] [i_6])) ^ (((((/* implicit */int) arr_2 [i_0 - 1])) | (-32789)))));
                            arr_19 [i_0 - 1] [i_1] [i_2] [i_2] [i_2] [i_3] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((6242510501620355713ULL) - (6242510501620355684ULL)))));
                            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_18 [(signed char)6] [i_1] [i_2] [i_3] [i_3] [i_6]))));
                        }
                        arr_21 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) 32766)), (((unsigned int) (!(((/* implicit */_Bool) var_6)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_7 = 3; i_7 < 14; i_7 += 3) 
                        {
                            arr_25 [i_7] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)3))));
                            arr_26 [i_2] [i_3] [i_3] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)175)) & (((/* implicit */int) arr_3 [i_2]))))) || (((/* implicit */_Bool) ((short) var_12)))));
                            arr_27 [i_0] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_3]))));
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [i_1] [i_8]))) * (((max((var_12), (((/* implicit */unsigned long long int) (_Bool)1)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))))));
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) var_1)) & (min((((/* implicit */int) (unsigned char)254)), (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_0 + 2] [i_3] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [(signed char)13] [(short)10] [i_2] [i_8])) : (arr_24 [i_0] [i_0] [i_2] [i_3] [i_1]))))))))));
                            arr_30 [i_0 + 1] [i_1] [i_8] [i_3] [i_8 + 1] = ((/* implicit */long long int) (+(arr_17 [i_8 + 1] [i_8 + 1] [i_8] [i_8] [(_Bool)1])));
                        }
                        arr_31 [i_3] [i_2] [i_1] [i_0] = ((signed char) ((((/* implicit */int) (unsigned short)33030)) > (((/* implicit */int) (_Bool)1))));
                    }
                    for (int i_9 = 4; i_9 < 12; i_9 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_3 [i_0]))))), (((((/* implicit */_Bool) (short)23555)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 2] [i_0] [(unsigned short)8] [i_0 - 1] [i_0]))) : (arr_17 [13U] [i_0 - 2] [i_2] [i_1] [i_0 - 2]))))));
                        arr_34 [i_0 - 2] [i_0 - 2] [(signed char)5] [i_1] [i_0 - 1] = ((/* implicit */_Bool) (+((+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (8388607))))))));
                        arr_35 [i_0 - 2] [i_0 + 2] [i_0] [i_0 - 2] [i_0] = ((/* implicit */short) (~((((~(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))))));
                    }
                    for (int i_10 = 4; i_10 < 12; i_10 += 3) /* same iter space */
                    {
                        arr_38 [i_2] [i_1] [i_2] [i_10] = ((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2] [i_0] [i_1]);
                        var_22 = ((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */int) (unsigned char)74)) * (((/* implicit */int) var_9)))) != (((-32789) - (((/* implicit */int) (unsigned char)81)))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_11 = 2; i_11 < 14; i_11 += 1) 
                    {
                        var_23 -= ((/* implicit */unsigned long long int) (signed char)127);
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) max((max((max((arr_24 [i_0] [i_0] [i_0] [i_2] [i_11]), (((/* implicit */int) arr_18 [i_11] [i_2] [i_2] [i_1] [i_1] [i_0])))), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_4)) / (((((/* implicit */int) arr_33 [i_11] [i_2] [i_0] [i_0])) + (((/* implicit */int) var_1)))))))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_46 [i_0] [i_0 - 2] [i_12] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_5 [14U] [i_1] [i_2])), (18446744073709551615ULL))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_42 [i_12]))))))))));
                        arr_47 [i_12] = ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)114), (((/* implicit */signed char) (!(((/* implicit */_Bool) 12204233572089195902ULL))))))))) * (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (1999237023642466490ULL))), (((/* implicit */unsigned long long int) (signed char)-127)))));
                    }
                }
                for (int i_13 = 3; i_13 < 12; i_13 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) ((13201404858963106206ULL) >> (((/* implicit */int) (signed char)26))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 1) 
                    {
                        for (signed char i_15 = 1; i_15 < 14; i_15 += 1) 
                        {
                            {
                                var_26 ^= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_10 [i_15 + 1] [i_14] [i_1] [i_1] [i_0]))))))) == (((/* implicit */int) var_9))));
                                var_27 ^= ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_14] [i_1] [i_0 - 2] [i_14] [i_14] [i_14]))) + (var_0)))));
                                arr_57 [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */int) min(((short)19557), (((/* implicit */short) arr_14 [i_0] [i_0 - 2] [i_0] [i_13 + 2] [(signed char)3]))))) + (-32787)));
                                arr_58 [i_15] = ((/* implicit */_Bool) var_3);
                            }
                        } 
                    } 
                    arr_59 [i_0 + 1] [12] [i_13] [12] = ((/* implicit */unsigned char) min(((~(5263664165909498617ULL))), (((((/* implicit */_Bool) ((unsigned long long int) 13201404858963106205ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_10)))) : (8ULL)))));
                    arr_60 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_8 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8]) : (((/* implicit */int) ((21U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2]))))))))) && (((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) <= (((/* implicit */int) (signed char)-120))))) != (((((/* implicit */int) var_13)) | (((/* implicit */int) (_Bool)1))))))));
                    arr_61 [i_13] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) min((var_4), (((/* implicit */unsigned short) arr_29 [8U] [i_0 - 1] [8U] [i_0 - 1] [i_0 - 1]))));
                }
                arr_62 [i_0 - 2] [i_1] [i_0] = ((/* implicit */signed char) var_11);
                arr_63 [2ULL] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_43 [i_1] [i_0] [i_0 - 1] [i_1] [i_0])) >= (((/* implicit */int) (unsigned char)176))))), (1U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_44 [(short)12] [i_1] [i_1] [i_1] [i_1] [3ULL])), (32802)))) ? (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 2665949563U))))) : (((/* implicit */int) var_7)))))));
            }
        } 
    } 
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((var_13), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0)))))))) : (((/* implicit */int) ((_Bool) 3812669871U)))));
    var_29 ^= ((/* implicit */long long int) -1863582620);
}
