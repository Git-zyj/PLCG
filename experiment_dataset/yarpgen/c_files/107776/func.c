/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107776
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_20 *= ((/* implicit */short) var_8);
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_21 |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_2])) > (((/* implicit */int) var_13)))))) > (((((/* implicit */_Bool) var_13)) ? (3514673870U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) == ((((!(((/* implicit */_Bool) arr_5 [i_3])))) ? (((((/* implicit */_Bool) 780293428U)) ? (((/* implicit */int) (short)2090)) : (((/* implicit */int) arr_4 [i_2])))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_0] [(short)2] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [(unsigned char)1]))))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                        {
                            var_22 = ((((/* implicit */int) (unsigned short)42734)) & (((/* implicit */int) (unsigned short)6)));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)2078))))) : ((~(var_3))))) & (((((/* implicit */_Bool) 6LL)) ? (((/* implicit */long long int) 8U)) : (-4022718190635899725LL))))))));
                        }
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                        {
                            var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1 - 2] [i_1] [i_1 - 1] [i_1 + 2] [(unsigned short)21]))) : (3928977608U)));
                            var_25 -= ((/* implicit */unsigned short) arr_8 [i_0] [i_2] [i_3] [i_0]);
                        }
                        arr_17 [i_0] [i_1] [13U] [i_3] [(signed char)4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2972648770U)) ? (((/* implicit */int) (short)-2079)) : (2147483647)))) ? (-4022718190635899706LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)37)))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? ((~(arr_8 [(unsigned short)1] [i_1 + 1] [i_2] [i_6]))) : (((var_6) ^ (arr_8 [i_0] [i_1 - 2] [(signed char)9] [i_0])))));
                        arr_20 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) -4022718190635899717LL)) ? (0) : (((/* implicit */int) (short)-2113)))) + (((((/* implicit */_Bool) 10100306386673731364ULL)) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) (short)2092))))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_1)))) ? ((~(((/* implicit */int) var_10)))) : ((~(((/* implicit */int) (signed char)58)))))))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) arr_0 [i_2] [i_1])) == (-1160085641699665879LL))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)37852))))) : (((((/* implicit */_Bool) var_17)) ? (arr_8 [i_0] [i_1 - 1] [i_2] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [(unsigned char)9])))))))) ? ((~((~(((/* implicit */int) arr_18 [12] [i_1] [i_2] [i_7])))))) : (((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (unsigned short)37851)) : (((/* implicit */int) (unsigned char)204)))))))));
                        arr_24 [i_0] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)44815))))) ? (min(((~(4294967287U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)22792)) : (((/* implicit */int) (unsigned char)1))))))) : (((((/* implicit */_Bool) (unsigned short)22804)) ? (17U) : (((/* implicit */unsigned int) -1879500645)))));
                        var_29 = ((/* implicit */signed char) ((((((((/* implicit */unsigned int) ((/* implicit */int) (short)32402))) & (var_6))) & (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255)))))));
                        arr_25 [i_0] [(signed char)16] [i_7] [(signed char)8] [i_7] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_1 - 3] [i_1 - 3] [(unsigned short)17])) ? (((/* implicit */int) arr_18 [i_1] [i_1 + 1] [i_1 - 1] [i_7])) : (((/* implicit */int) arr_18 [i_0] [i_1 - 2] [i_1 - 1] [6]))))) & (min((arr_16 [i_7]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_18)))))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 1; i_9 < 21; i_9 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned short)45348))))))) & ((~(min((9U), (((/* implicit */unsigned int) (unsigned short)13)))))))))));
                                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_9])) & (((/* implicit */int) (unsigned short)14398))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) (unsigned short)28459))))) : (((/* implicit */int) arr_13 [i_0] [i_1 - 2] [i_2] [i_0]))))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 2] [i_2] [i_9 - 1])) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) arr_28 [i_0] [17LL] [(_Bool)0] [i_8] [i_9] [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4294967295U)) & (var_5)))))))));
                                arr_32 [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 - 1] [i_1 - 3] [i_1 - 1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_1 - 3] [i_2] [(unsigned short)8] [i_9]))))) ? (arr_12 [i_2]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)134))))))) : ((((!(((/* implicit */_Bool) arr_28 [i_0] [i_1 + 1] [(unsigned char)2] [i_8] [i_8] [i_9])))) ? (max((((/* implicit */unsigned int) arr_7 [i_9] [i_8] [i_2] [i_0])), (arr_8 [i_0] [i_8] [i_9] [i_9 + 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_9] [i_8])))))));
                                arr_33 [18LL] [i_1] [i_2] [i_2] [i_8] [i_0] = ((/* implicit */signed char) (short)32764);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)-6)))) ? (((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [i_2] [i_10] [i_11])) == (((/* implicit */int) var_8))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_38 [i_2] [i_1 - 3] [i_2] [i_11] [i_2])))) > (((/* implicit */int) min((arr_5 [i_11]), ((signed char)9))))))))))));
                                arr_39 [i_0] [i_1] [3LL] [i_0] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1 + 2] [i_2] [i_2] [i_11])) ? (((/* implicit */int) arr_18 [i_1 + 2] [i_11] [i_11] [i_11])) : (((/* implicit */int) (unsigned short)11803)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_40 [16ULL] |= min((((/* implicit */unsigned short) (signed char)71)), ((unsigned short)42744));
    }
    var_33 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65502)) ? (((/* implicit */int) (unsigned short)20732)) : (((/* implicit */int) (unsigned short)37054))))))) ? ((-(var_6))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)65513)))), (((/* implicit */int) (unsigned char)177)))))));
}
