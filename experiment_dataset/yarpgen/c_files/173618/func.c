/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173618
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
    var_12 = ((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned char) var_3))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    var_13 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0 + 4] [i_1 + 2] [i_2 + 1])) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 + 2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 11414487761096639080ULL)))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 3) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_2 + 2] [i_3] [i_2])) * (((/* implicit */int) arr_6 [0U] [0U] [i_2]))));
                        var_15 = ((/* implicit */_Bool) ((arr_4 [i_2 + 2] [i_2 + 1] [i_2 + 2]) % (((/* implicit */unsigned int) 1285794063))));
                        /* LoopSeq 3 */
                        for (int i_4 = 2; i_4 < 14; i_4 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */int) (signed char)-113)) * (((/* implicit */int) (unsigned char)235))))));
                            arr_12 [i_0] [i_1 - 2] [i_2] [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 3748869926U)) ? (520093696U) : (3774873599U)));
                            arr_13 [i_4] [i_2] [i_2] [i_2] [i_0 + 2] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (unsigned short)24497)) - (24468)))))) ? (487606932U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_2] [i_1 - 1]))));
                            arr_14 [i_0] [i_1] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_5))) << (((((((((/* implicit */int) (_Bool)1)) + (-1267913590))) + (1267913617))) - (16)))));
                            arr_15 [i_3 + 1] [i_2] [i_1] [i_3 + 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((4129999848U) - (4129999840U)))));
                        }
                        for (int i_5 = 2; i_5 < 14; i_5 += 4) /* same iter space */
                        {
                            arr_19 [i_2] [i_1 - 2] [i_2] [i_2] [i_5] = ((4294967295U) | (var_10));
                            arr_20 [i_0] [i_2] [i_3 + 2] [i_1] [i_2] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_5])) - (((((/* implicit */_Bool) arr_5 [i_0 + 4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))));
                            arr_21 [i_0] [i_1] [(signed char)2] [i_2] [i_3] [i_3] [i_5] = ((/* implicit */unsigned int) ((arr_1 [i_2 - 1]) / (((/* implicit */long long int) (~(arr_18 [i_2 - 1] [i_1 + 1] [i_0] [i_2 - 1] [(unsigned short)0] [i_2]))))));
                        }
                        for (long long int i_6 = 2; i_6 < 14; i_6 += 2) 
                        {
                            arr_24 [i_2] [i_0 - 2] [i_2] [i_1] [i_2] [i_3] [i_6 - 2] = ((/* implicit */unsigned int) ((arr_10 [i_0] [i_2] [i_2 - 1]) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-27))) : (-5245372761644304506LL))) : (((/* implicit */long long int) 896644915U))));
                            arr_25 [i_2] = ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) (unsigned short)29825)))) : (((/* implicit */int) arr_5 [i_2 + 2])));
                            arr_26 [i_2] [i_3] [(signed char)4] [i_2] [i_1 + 2] [i_2] = ((/* implicit */unsigned char) arr_22 [i_0] [i_1] [i_2] [i_2] [i_0] [i_6] [i_6 - 1]);
                            var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) & (((/* implicit */int) var_4))))));
                        }
                    }
                    for (signed char i_7 = 1; i_7 < 12; i_7 += 3) /* same iter space */
                    {
                        arr_29 [i_7 + 1] [i_2] [i_2] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) - (10054229U));
                        arr_30 [i_2] [i_2] [i_1] [i_2] = max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)20))))), (((((/* implicit */_Bool) -283332270)) ? ((~(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8)))))));
                        var_18 = ((/* implicit */unsigned int) ((_Bool) 2779050166U));
                    }
                    for (signed char i_8 = 1; i_8 < 12; i_8 += 3) /* same iter space */
                    {
                        var_19 *= ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) (signed char)47))))))));
                        var_20 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_10 [i_0] [i_2] [i_0]))))));
                        arr_33 [i_2] [i_2] [i_8] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(arr_22 [i_1 + 3] [i_1] [i_0] [(unsigned short)14] [i_2] [i_1] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))))))), (((/* implicit */long long int) (signed char)13))));
                    }
                    for (unsigned int i_9 = 1; i_9 < 12; i_9 += 4) 
                    {
                        var_21 = ((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_9 - 1]);
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_2] [i_2] [i_1 + 3] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : ((-9223372036854775807LL - 1LL))))) ? (max((15762598695796736ULL), (((/* implicit */unsigned long long int) (unsigned char)29)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))))) ? (max((((/* implicit */long long int) (-(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) 520093699U)) ? (((/* implicit */long long int) 0U)) : (var_1))))) : (((/* implicit */long long int) (((-(((/* implicit */int) (unsigned char)242)))) + (((/* implicit */int) (unsigned short)2047)))))));
                    }
                    var_23 = ((/* implicit */unsigned int) (~(15948160804753575771ULL)));
                }
            } 
        } 
    } 
    var_24 = ((((((/* implicit */int) var_7)) > (((/* implicit */int) ((unsigned char) (unsigned short)65535))))) ? (((/* implicit */unsigned int) (~(((((/* implicit */int) var_4)) | (((/* implicit */int) (signed char)0))))))) : (max((((((/* implicit */_Bool) 3774873599U)) ? (2025549083U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), ((+(var_10))))));
    /* LoopSeq 1 */
    for (signed char i_10 = 1; i_10 < 17; i_10 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_11 = 3; i_11 < 20; i_11 += 4) 
        {
            for (unsigned char i_12 = 1; i_12 < 20; i_12 += 4) 
            {
                {
                    arr_45 [i_11] [i_11] [i_12] [i_11 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_41 [i_11] [i_11] [i_12])))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) -3633544675710264417LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_10] [i_11]))) : (520093684U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_12] [i_11 - 2])) * (((/* implicit */int) (unsigned char)255))))))))));
                    var_25 *= ((/* implicit */_Bool) max((arr_40 [i_10 + 3] [i_10 + 3]), (((/* implicit */unsigned int) arr_37 [(unsigned short)20] [i_11]))));
                    arr_46 [i_11] [i_11] [i_12] [i_11] = ((/* implicit */unsigned short) ((unsigned int) arr_37 [i_10 + 1] [i_11 - 2]));
                }
            } 
        } 
        arr_47 [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(1478827183471873788LL)))) || (((/* implicit */_Bool) 1069547520U)))) ? (max((((/* implicit */long long int) arr_38 [i_10 - 1])), (((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_10] [i_10]))) & (21012086190437187LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)15)) && (((/* implicit */_Bool) var_0)))) || (((/* implicit */_Bool) arr_37 [i_10] [(unsigned short)15]))))))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_37 [i_10 + 4] [i_10 + 4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_10] [i_10 + 1]))) : (((((/* implicit */_Bool) 22ULL)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_10] [i_10] [i_10] [i_10]))) / (var_1))) : (((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_10])) / (((/* implicit */int) arr_38 [20U])))))))));
    }
    var_27 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (-3633544675710264417LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned short) var_9))))), (((/* implicit */int) var_7))));
}
