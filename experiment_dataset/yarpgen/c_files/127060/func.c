/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127060
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)111)), (((((/* implicit */int) (signed char)-68)) / (2147483647)))))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_4)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0 + 1]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_10 [(_Bool)1] [(_Bool)1] [i_0 - 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) (signed char)86)))) ? (arr_5 [i_0 + 1] [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [10U] [i_1])) ? ((-(var_2))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                                arr_15 [i_0] [i_0] [i_0] [(short)7] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0 - 1])) + (((/* implicit */int) arr_4 [i_0 - 1]))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (signed char i_5 = 1; i_5 < 9; i_5 += 4) 
                    {
                        arr_19 [i_0] [(unsigned short)1] [i_0] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            arr_22 [0LL] [i_1] [i_5 + 4] [i_5 + 4] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_6] [i_5 + 4] [i_6])) ? (((/* implicit */int) (unsigned short)57283)) : (((/* implicit */int) var_15))));
                        }
                        var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_11 [i_0] [i_1] [i_2] [i_1])))));
                        arr_23 [i_0 - 1] [(_Bool)1] [i_2] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0] [i_5 + 2] [i_5 + 2] [i_5] [i_2]))))) : (var_2)));
                    }
                    for (unsigned int i_7 = 3; i_7 < 12; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_8 = 1; i_8 < 10; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) (~(383034853)));
                            arr_30 [i_0] [i_0] [i_8] [i_7] [i_8] = ((/* implicit */unsigned char) var_3);
                            arr_31 [i_0] [i_7] [i_2 + 1] [i_8] [10] = ((/* implicit */int) ((arr_20 [i_0] [i_1] [i_1] [i_1] [i_1]) || (((/* implicit */_Bool) 383034853))));
                        }
                        for (signed char i_9 = 3; i_9 < 11; i_9 += 2) 
                        {
                            arr_34 [i_0] [i_7] [i_2] [i_7] [i_7] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)52)))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && ((_Bool)0))))));
                            var_23 = ((/* implicit */_Bool) arr_25 [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                            var_24 = ((/* implicit */int) var_16);
                        }
                        arr_35 [i_1] [i_1] [i_7] [i_7] [i_2 + 1] [i_0] = ((/* implicit */signed char) ((((_Bool) (unsigned short)8232)) ? (((/* implicit */int) arr_12 [i_0 + 1] [i_7] [i_7 + 1] [i_7] [(_Bool)1])) : (arr_28 [i_0 - 1] [i_7 + 1] [i_2 + 1])));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -946611442)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_7 - 3] [i_1] [(_Bool)1] [i_7 + 1] [i_0 + 1]))) : (var_5)));
                        arr_36 [i_7] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) 3414420513U);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            arr_44 [i_0 - 1] [i_0 - 1] [i_2] [i_10] [i_10] = ((/* implicit */unsigned int) (signed char)-106);
                            arr_45 [i_0] [i_0] [i_2 + 1] [i_2 + 1] [i_10] [i_1] = ((/* implicit */unsigned int) var_1);
                        }
                        var_26 = ((/* implicit */short) ((1704010985U) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_2))))));
                    }
                    for (unsigned short i_12 = 1; i_12 < 11; i_12 += 2) 
                    {
                        arr_48 [i_0] [i_12] [i_0] [i_0] = ((signed char) arr_13 [i_0 - 1] [i_0 - 1] [(_Bool)1] [i_0 + 1] [i_2]);
                        arr_49 [i_0] [i_12] = ((/* implicit */unsigned char) (((((_Bool)1) && (((/* implicit */_Bool) var_15)))) && (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 10; i_13 += 4) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_55 [i_13 - 1] [i_14] [i_13 - 1] [i_13 - 1] [i_14] = ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_13 + 2] [i_1] [i_2 + 1] [i_0 + 1]))));
                                arr_56 [i_0] [i_14] [(unsigned char)4] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)44779)))) ? (((/* implicit */long long int) arr_18 [i_0 - 1] [i_1] [i_2 + 1] [i_13 + 2] [i_14] [i_0 + 1])) : (((((/* implicit */_Bool) (unsigned short)57303)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (3638643770468653452LL)))));
                                arr_57 [i_0 - 1] [i_14] [i_2 + 1] [i_0 + 1] = ((/* implicit */short) (-(arr_14 [(short)7] [i_2 + 1] [i_14] [i_13 + 2] [i_14] [i_2 + 1] [i_14])));
                                var_27 = (i_14 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) << (((arr_11 [i_0] [i_1] [i_1] [i_14]) - (3595748231U)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_1] [i_1])) || (((/* implicit */_Bool) (short)-3410))))) : (((/* implicit */int) arr_7 [i_2] [i_1] [i_1] [10U]))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) << (((((arr_11 [i_0] [i_1] [i_1] [i_14]) - (3595748231U))) - (4141378510U)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_1] [i_1])) || (((/* implicit */_Bool) (short)-3410))))) : (((/* implicit */int) arr_7 [i_2] [i_1] [i_1] [10U])))));
                                arr_58 [i_14] [i_14] [i_2 + 1] [i_13] [i_14] [i_14] = ((/* implicit */_Bool) ((long long int) arr_52 [i_0] [i_2] [i_0] [i_13 - 1] [i_13 - 1] [(unsigned short)11] [i_13 + 3]));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_15 = 0; i_15 < 20; i_15 += 4) 
    {
        arr_62 [i_15] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)57)) : (((arr_61 [(signed char)14]) ? (((/* implicit */int) (unsigned short)7564)) : (arr_60 [(short)17] [i_15])))));
        var_28 = ((/* implicit */signed char) (unsigned short)49798);
    }
    var_29 = ((/* implicit */int) var_12);
}
