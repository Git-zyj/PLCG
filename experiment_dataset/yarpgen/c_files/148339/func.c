/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148339
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
    var_18 = ((/* implicit */unsigned char) 18446744073709551615ULL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_2 - 1] [(short)6]))));
                    var_19 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0]);
                    var_20 = ((/* implicit */signed char) ((int) arr_5 [i_0] [i_1] [i_0]));
                }
            } 
        } 
        var_21 &= ((/* implicit */int) arr_6 [i_0]);
        /* LoopSeq 1 */
        for (signed char i_3 = 2; i_3 < 12; i_3 += 4) 
        {
            arr_11 [i_0] [i_0] = ((unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_3] [i_0])) != (((/* implicit */int) (_Bool)1))));
            var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (4294967295U) : (4294967295U)));
        }
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) var_14);
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 2; i_7 < 11; i_7 += 3) 
                        {
                            var_24 = (+(1U));
                            var_25 ^= ((/* implicit */unsigned short) 4294967295U);
                            var_26 ^= ((/* implicit */unsigned char) 4294967295U);
                            var_27 = ((/* implicit */signed char) 5817778143044804265ULL);
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */unsigned long long int) var_9)))) / (((/* implicit */unsigned long long int) var_6))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) 12628965930664747350ULL)) ? (5817778143044804256ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5565)))));
                        }
                        for (long long int i_9 = 3; i_9 < 12; i_9 += 4) 
                        {
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_10 [i_9] [i_9 - 2] [(unsigned char)7])) : (((/* implicit */int) arr_10 [i_9] [i_9 - 2] [i_6]))));
                            arr_25 [i_0] [i_4] [i_5] [(unsigned short)8] [i_0] [9U] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)18)) > (((((/* implicit */_Bool) arr_19 [i_0] [i_0])) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)65507))))));
                            var_31 = ((/* implicit */unsigned int) arr_17 [i_0] [i_4] [i_0] [i_6] [i_0] [i_9]);
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((arr_16 [i_5] [i_0]) << (((((/* implicit */int) (signed char)-19)) + (36)))));
                            var_32 = ((/* implicit */long long int) var_1);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            var_33 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 262143ULL))));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0]))) : (((((/* implicit */_Bool) -1430249805032551390LL)) ? (var_0) : (((/* implicit */unsigned long long int) -1430249805032551363LL))))));
                            var_35 += ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709289482ULL)) ? ((~(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-39)) == (arr_14 [i_0] [i_0] [i_0] [i_0])))))));
                        }
                        var_36 = ((/* implicit */short) arr_18 [i_0] [i_6] [i_5] [i_0]);
                        var_37 = arr_18 [i_0] [i_0] [i_5] [(_Bool)1];
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_11 = 3; i_11 < 12; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            for (unsigned int i_13 = 1; i_13 < 12; i_13 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_14 = 1; i_14 < 10; i_14 += 4) 
                    {
                        var_38 = ((/* implicit */_Bool) (-(arr_34 [i_11] [i_12] [i_11])));
                        var_39 = ((/* implicit */unsigned int) (-(12628965930664747372ULL)));
                        var_40 = ((/* implicit */short) (signed char)19);
                        arr_39 [i_13] [i_11] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_29 [i_11])))) ? (((var_9) / (((/* implicit */long long int) 1632360475U)))) : (((/* implicit */long long int) arr_31 [i_11]))));
                    }
                    for (short i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        arr_42 [i_11] [i_13] [(short)1] [i_11] = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)255)), (9223372036854775807LL)));
                        arr_43 [i_15] [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2662606800U)) ? (8U) : (1632360475U)));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 13; i_16 += 3) 
                    {
                        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((5817778143044804272ULL), (((/* implicit */unsigned long long int) arr_0 [i_11])))) - (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_11] [i_11] [(short)7] [i_16] [i_11] [i_16]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-8275))) * (0U)))));
                        var_42 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41155))) - (((((/* implicit */_Bool) arr_5 [i_11 + 1] [i_13 - 1] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_13 - 1] [i_11 - 2] [i_11 - 1] [1ULL] [i_11] [i_11]))) : ((-(5817778143044804243ULL)))))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 13; i_17 += 1) 
                    {
                        var_43 = 1430249805032551408LL;
                        var_44 = ((/* implicit */unsigned char) -1430249805032551409LL);
                    }
                    /* LoopNest 2 */
                    for (signed char i_18 = 1; i_18 < 9; i_18 += 3) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 13; i_19 += 3) 
                        {
                            {
                                arr_54 [i_11] [i_11] [i_12] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_38 [i_18 + 1])) || (((/* implicit */_Bool) 127U)))) ? (arr_38 [i_18 + 1]) : (((/* implicit */long long int) min((4294967293U), (((/* implicit */unsigned int) (signed char)43)))))));
                                arr_55 [i_11] [i_12] [i_12] [i_11] [i_13] [i_11] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) 4294967295U)) && (var_12))) || (((arr_24 [i_19] [i_11] [8] [i_11] [i_19]) || (((/* implicit */_Bool) 4294967285U)))))))));
                            }
                        } 
                    } 
                    var_45 ^= ((0U) << (((min((((/* implicit */unsigned long long int) -1430249805032551431LL)), (max((12628965930664747372ULL), (arr_30 [i_12] [i_12]))))) - (12628965930664747341ULL))));
                    /* LoopNest 2 */
                    for (long long int i_20 = 1; i_20 < 12; i_20 += 2) 
                    {
                        for (unsigned short i_21 = 1; i_21 < 11; i_21 += 3) 
                        {
                            {
                                arr_61 [i_11] [i_11] = (i_11 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (unsigned short)41161)) : (((/* implicit */int) (signed char)-108)))) << (((((((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) arr_60 [i_11] [i_11] [i_11] [i_21 - 1] [i_21 + 1] [i_21])) : (((/* implicit */int) (unsigned short)60367)))) + (8368))) - (7)))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (unsigned short)41161)) : (((/* implicit */int) (signed char)-108)))) << (((((((((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) arr_60 [i_11] [i_11] [i_11] [i_21 - 1] [i_21 + 1] [i_21])) : (((/* implicit */int) (unsigned short)60367)))) + (8368))) - (7))) + (3059))))));
                                var_46 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_21 - 1] [10U] [i_20 + 1] [i_20 + 1] [i_21] [i_13 + 1]))) | (4294967295U))) % (((/* implicit */unsigned int) max((arr_14 [i_11] [i_21 - 1] [i_21 - 1] [i_11 - 1]), (arr_14 [i_11] [i_21 - 1] [i_13] [i_11 - 3]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_22 = 4; i_22 < 12; i_22 += 3) 
        {
            var_47 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) arr_1 [i_11 - 2] [i_11 - 3])) >= (((/* implicit */int) arr_1 [i_11 - 2] [i_11 + 1]))))), (((((((/* implicit */int) var_7)) - (-1366362282))) - (((/* implicit */int) arr_22 [i_11] [i_22] [i_11] [i_11] [i_11] [i_22]))))));
            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)36)) ? (max((((/* implicit */unsigned int) arr_6 [i_11 + 1])), (arr_29 [i_11]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-124)))))));
        }
    }
}
