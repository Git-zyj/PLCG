/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11013
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
    var_17 += ((/* implicit */signed char) min((((/* implicit */long long int) var_16)), (min((-9223372036854775800LL), (((/* implicit */long long int) -1413962263))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((arr_0 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (short)-32742))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0] [9])) : (((/* implicit */int) var_16)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) 4294967268U)) || (((/* implicit */_Bool) -8103324556835689855LL)))) && (((((/* implicit */_Bool) (unsigned char)4)) || (((/* implicit */_Bool) (signed char)-111))))))) : (((/* implicit */int) arr_3 [(unsigned short)12] [i_1]))));
                var_18 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) ^ (22U)));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((min((((/* implicit */int) (signed char)-62)), (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (short)-5054)) : (((/* implicit */int) arr_3 [i_1] [i_1])))))) - ((((_Bool)1) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (signed char)-66)))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    arr_9 [i_0] = ((/* implicit */_Bool) ((max((((/* implicit */int) ((((/* implicit */_Bool) (short)32754)) && (((/* implicit */_Bool) arr_1 [(_Bool)1]))))), (((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_0])) * (((/* implicit */int) arr_1 [i_0])))))) << (((min((((/* implicit */int) min((((/* implicit */short) arr_4 [i_1])), (arr_2 [i_2])))), (((-414559952) + (((/* implicit */int) (signed char)109)))))) + (414559851)))));
                    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)33)) || (((/* implicit */_Bool) arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2]))) : (((((/* implicit */long long int) 4294967287U)) / (arr_0 [i_0])))))) ? (((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)45))) : (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) (signed char)28)))))));
                }
                for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        var_21 = ((((/* implicit */int) ((min((((/* implicit */long long int) (short)32735)), (var_10))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)61)) != (((/* implicit */int) var_12))))))))) * (((((/* implicit */int) var_14)) >> (((max((((/* implicit */unsigned int) (signed char)-27)), (arr_11 [i_0] [i_3] [i_4]))) - (4294967260U))))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) min((((((long long int) arr_2 [i_0])) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68))) : (arr_11 [i_0] [(signed char)2] [i_0])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [(unsigned char)12] [i_4])) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_7 [i_4] [i_3] [i_0] [i_0])), ((signed char)-107)))) : (((/* implicit */int) (_Bool)1))))))))));
                        var_23 = (_Bool)1;
                    }
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_5 [i_0]))));
                        var_25 = ((/* implicit */unsigned short) arr_12 [7LL] [i_0]);
                        var_26 = ((/* implicit */int) arr_16 [i_0] [i_3] [i_3] [i_3] [i_0] [i_3]);
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] = ((/* implicit */signed char) ((arr_15 [i_0] [i_0] [i_3] [i_6]) ? (4294967281U) : (((2123000355U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)32756))))) || (((/* implicit */_Bool) arr_10 [i_0] [i_3] [i_3] [i_0]))));
                            arr_23 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_5 [i_7]);
                            arr_24 [i_0] [i_0] [i_0] [i_6] [i_7] = ((/* implicit */short) arr_1 [i_7]);
                        }
                        for (long long int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_0] [i_1] [i_3] [i_6] [6LL] [i_0] = ((((/* implicit */_Bool) (signed char)39)) || (((/* implicit */_Bool) 9223372036854775789LL)));
                            arr_28 [i_8] [i_6] [i_0] [(signed char)23] [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_17 [i_0] [i_0] [i_0] [(unsigned short)24]);
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) (signed char)10))) || (((/* implicit */_Bool) (signed char)33)))))));
                            arr_29 [i_8] [i_0] [i_3] [i_0] [i_0] = ((long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) (unsigned short)65527))));
                            arr_30 [i_0] [i_0] [i_3] [(signed char)13] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-25))) / (8301487132942080808LL)))) ? (8301487132942080827LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 0ULL))))));
                        }
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((1876829484) >> (((/* implicit */int) (_Bool)1)))))));
                    }
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_14), (((/* implicit */unsigned short) var_5))))) / (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)65535))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) max(((_Bool)1), (arr_7 [i_0] [i_1] [i_3] [i_3]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_1] [i_1] [i_1])) ? (arr_17 [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_3])))))) ? (((arr_17 [i_3] [(unsigned short)7] [i_3] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [20ULL] [i_3] [i_3] [i_3] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23877)))))));
                }
            }
        } 
    } 
    var_31 += ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((1876829493), (((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) (signed char)-64)) ? (7269979764139139233LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-122))))) : (((((/* implicit */_Bool) var_10)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_9))))))), (((min((((/* implicit */unsigned long long int) var_0)), (var_1))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */int) (short)5)))))))));
    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((long long int) var_3))), (((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)19856)), (var_13)))) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -4985623189131234142LL)) : (11273278025997850743ULL))))))))));
}
