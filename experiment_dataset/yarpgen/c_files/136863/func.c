/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136863
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned char)96)))), (((((/* implicit */int) (unsigned char)159)) + (((/* implicit */int) (_Bool)0))))));
                var_18 += ((/* implicit */unsigned int) ((arr_1 [i_0] [i_0]) % (max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)159))))));
                var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_1]))))), (max((((/* implicit */unsigned long long int) (unsigned char)96)), (arr_2 [i_0])))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (arr_7 [i_1] [i_2 + 2] [i_2 + 3] [i_1])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (+(var_15)));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
                        {
                            var_21 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_6 [i_1] [i_2 - 3] [i_1] [(_Bool)1]))))) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned char)159)) == (arr_1 [i_0] [i_1]))))));
                            var_22 = ((/* implicit */unsigned int) var_17);
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1334723941U)) ? (((unsigned int) 305076868)) : ((+(1334723939U))))))));
                            var_24 -= ((/* implicit */short) (-(2714438317U)));
                        }
                        for (int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) ((unsigned int) arr_4 [i_2 - 3] [i_2 - 3]));
                            arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_14 [i_2] [i_2] [i_2] [i_2 - 3] [i_2]);
                        }
                    }
                    var_26 ^= ((/* implicit */unsigned short) ((unsigned int) (~(arr_15 [(_Bool)1] [i_0] [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_2] [i_6] [i_7 - 1] = 496290075U;
                                arr_24 [i_2] [i_1] [i_2 - 1] [i_2] [i_6] [i_7 - 1] [(_Bool)1] = ((/* implicit */unsigned short) max(((-2147483647 - 1)), (((/* implicit */int) var_7))));
                                var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_7 - 1] [i_7 - 1] [i_2 + 2])))))));
                                arr_25 [i_0] [i_0] [i_2] [i_6] [i_7] = ((/* implicit */_Bool) var_11);
                            }
                        } 
                    } 
                }
                for (short i_8 = 0; i_8 < 17; i_8 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        arr_30 [i_0] [i_8] [(unsigned char)9] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65519)) ? (arr_29 [i_9] [i_8] [i_1] [i_0]) : (arr_29 [i_0] [16ULL] [i_0] [i_9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_8] [i_9])))))) : (max((((/* implicit */unsigned int) var_2)), (arr_29 [i_0] [i_1] [i_8] [i_9]))));
                        arr_31 [(unsigned short)4] [i_1] [i_1] [i_8] = ((/* implicit */unsigned int) (_Bool)0);
                        arr_32 [i_8] = min((min((var_10), (arr_15 [i_0] [i_1] [i_8] [i_8] [i_9]))), (max((arr_11 [i_9] [i_8] [i_1] [(unsigned char)11] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned char)160)))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_0 [i_8]))));
                        var_29 = ((/* implicit */short) 2960243355U);
                    }
                    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        var_30 -= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
                        arr_37 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (min((4400967774283636629ULL), (((/* implicit */unsigned long long int) (unsigned short)2040))))));
                    }
                    for (unsigned short i_11 = 1; i_11 < 15; i_11 += 2) 
                    {
                        var_31 -= ((/* implicit */_Bool) (unsigned short)46005);
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 2; i_12 < 15; i_12 += 2) 
                        {
                            arr_43 [i_1] [i_1] [i_1] [i_8] [0U] = ((/* implicit */unsigned long long int) ((unsigned int) max((var_14), (arr_14 [i_8] [i_11] [i_8] [i_1] [i_8]))));
                            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_16))) ? ((+(((((/* implicit */_Bool) (unsigned short)57753)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0]))) : (var_5))))) : (((arr_42 [i_0] [i_1] [i_8] [i_11] [i_12 + 1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))))));
                            var_33 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2090700375U)) ? (((/* implicit */int) (unsigned short)57751)) : (((/* implicit */int) (short)21669))))), ((~(4209367045U)))))), ((-(18153094002405676902ULL)))));
                        }
                        var_34 = min((((/* implicit */unsigned int) (unsigned short)7785)), (((unsigned int) ((((/* implicit */_Bool) (unsigned char)54)) ? (((/* implicit */int) (_Bool)1)) : (-420276078)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_13 = 2; i_13 < 16; i_13 += 3) 
                        {
                            arr_46 [i_0] [i_8] [i_8] [i_11] [i_13 + 1] = ((/* implicit */unsigned long long int) arr_41 [i_0] [i_8]);
                            var_35 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2714438317U)))));
                            var_36 = ((((/* implicit */_Bool) arr_6 [i_11 + 2] [i_11 + 2] [i_13] [i_13 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13421))) : (arr_29 [i_11 + 2] [i_13 - 2] [i_13] [i_13 - 2]));
                        }
                        /* vectorizable */
                        for (unsigned int i_14 = 0; i_14 < 17; i_14 += 1) 
                        {
                            arr_49 [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_35 [i_0] [i_1] [i_8] [i_1] [i_11 - 1] [i_1]))));
                            var_37 += ((/* implicit */unsigned int) var_6);
                        }
                        for (unsigned int i_15 = 4; i_15 < 14; i_15 += 2) 
                        {
                            arr_53 [i_15] [i_8] [i_0] [i_8] [i_0] = ((/* implicit */unsigned int) max((var_17), (((/* implicit */int) (!((_Bool)0))))));
                            arr_54 [i_0] [i_0] [i_1] [i_8] [i_8] [i_0] [i_8] = ((/* implicit */unsigned char) (unsigned short)7784);
                        }
                        arr_55 [i_8] [i_1] [i_8] [i_8] = ((/* implicit */int) ((unsigned int) (short)13866));
                    }
                    var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) + (var_10))))))));
                    var_39 += ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)212))))) ? (((arr_34 [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) max((arr_39 [i_0]), (((/* implicit */unsigned int) arr_17 [i_0] [i_0] [i_0] [i_0]))))))));
                    /* LoopSeq 1 */
                    for (short i_16 = 3; i_16 < 15; i_16 += 3) 
                    {
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3792252002691820382ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7784))) : (0ULL)));
                        arr_58 [i_8] = ((/* implicit */short) var_1);
                        var_41 += max((((/* implicit */unsigned int) max((arr_36 [i_16 + 2]), (((/* implicit */unsigned char) (_Bool)1))))), (((((/* implicit */_Bool) arr_42 [i_8] [i_1] [16U] [i_16] [i_1])) ? (3557621632U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2928407878365136404ULL)))))))));
                    }
                }
                for (unsigned int i_17 = 2; i_17 < 16; i_17 += 2) 
                {
                    var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65525)))) ? (((/* implicit */int) arr_41 [i_1] [i_1])) : (((((/* implicit */int) (_Bool)1)) * (var_15)))));
                    var_43 = min((((/* implicit */unsigned int) (_Bool)0)), (3082885623U));
                    arr_61 [i_0] [i_1] [7] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)-8498)))))));
                }
                var_44 ^= ((/* implicit */short) arr_60 [i_0]);
            }
        } 
    } 
    var_45 = max(((~(((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_5) : (var_5))))), (((/* implicit */unsigned int) (unsigned short)65535)));
    var_46 = ((/* implicit */short) (unsigned short)53126);
}
