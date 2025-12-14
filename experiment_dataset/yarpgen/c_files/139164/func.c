/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139164
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
    var_18 = var_6;
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_2))));
    var_20 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (short)-30108))))));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        var_21 *= ((/* implicit */long long int) ((((((/* implicit */int) (signed char)125)) + (((/* implicit */int) (_Bool)0)))) >= (((/* implicit */int) arr_0 [i_0 + 1]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_1 [i_0 - 3] [i_0 - 2]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            var_22 |= ((/* implicit */signed char) ((arr_3 [i_2]) ^ (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (arr_3 [i_1]) : (arr_3 [i_1 + 2])))));
            arr_8 [i_2] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)248)) >= (((int) var_10))));
            var_23 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (short)17767)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))))))));
            arr_9 [i_1] [i_1 + 1] [i_1 + 1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) (short)3840)) : (((/* implicit */int) var_11))))));
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) min(((!(((/* implicit */_Bool) arr_6 [i_1 + 3] [i_2] [i_2])))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 - 1] [i_2] [i_2]))) >= (4294967295U))))))));
        }
        /* LoopSeq 4 */
        for (short i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            arr_13 [i_1] [i_1 + 3] [i_1 - 2] = ((/* implicit */short) (((+(((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 3] [i_1 + 2])))) >> (((((/* implicit */int) arr_10 [i_1] [i_1 - 2] [i_3])) - (43)))));
            arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (short)11415)))), (((/* implicit */int) ((arr_4 [i_1]) >= (((/* implicit */int) arr_7 [i_1] [i_3] [i_1 - 2])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)40)), (663051625)))))))) : (((16303081U) >> (31)))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 19; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    var_25 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) ^ ((((_Bool)1) ? (((/* implicit */int) (unsigned char)49)) : (((/* implicit */int) (unsigned char)43))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    var_26 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) min((-663051611), (((/* implicit */int) (short)-12100))))))));
                    var_27 = ((/* implicit */unsigned long long int) var_10);
                }
                arr_22 [i_1] [i_4] [i_5] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) >> (((max((arr_18 [i_1 - 1] [i_1 + 2]), (arr_18 [i_1 + 3] [i_1 + 1]))) - (5999888662060585133ULL))));
            }
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_11))));
        }
        /* vectorizable */
        for (unsigned char i_7 = 1; i_7 < 15; i_7 += 2) /* same iter space */
        {
            arr_27 [i_7] = ((/* implicit */unsigned int) (!((_Bool)1)));
            var_29 &= ((/* implicit */unsigned short) (unsigned char)234);
        }
        for (unsigned char i_8 = 1; i_8 < 15; i_8 += 2) /* same iter space */
        {
            arr_31 [i_1] = ((unsigned char) min((((/* implicit */int) arr_23 [i_8 + 1] [i_1 + 1])), (arr_4 [i_8 + 1])));
            var_30 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)11415)) ? ((~(663051618))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)208))))))), (((/* implicit */int) arr_10 [i_1 - 1] [i_1] [i_1 - 1]))));
            var_31 ^= ((/* implicit */int) var_16);
            arr_32 [i_1 + 2] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)77))));
        }
        var_32 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 13242878731861875805ULL)) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) (unsigned char)0))));
    }
    for (int i_9 = 0; i_9 < 12; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            for (short i_11 = 1; i_11 < 11; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 3; i_12 < 10; i_12 += 2) 
                    {
                        for (unsigned int i_13 = 3; i_13 < 10; i_13 += 2) 
                        {
                            {
                                arr_45 [i_9] [i_10] [i_10] [i_10] [i_9] [i_10] [i_10] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_10 [i_13 + 1] [i_13 + 1] [i_13 - 2])) + (((/* implicit */int) arr_10 [i_13 + 2] [i_13 + 2] [i_13 + 2]))))));
                                arr_46 [i_13] [i_12] [i_9] [i_10] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)159)), (-5270923685958724100LL)))) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-62)))) : (((/* implicit */long long int) ((/* implicit */int) (short)16383)))));
                                var_33 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)239))));
                                arr_47 [0U] |= ((/* implicit */unsigned long long int) (unsigned char)31);
                                arr_48 [i_9] [i_9] [i_9] [i_9] [i_12] [i_12] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_12] [i_13 - 2] [i_13 - 2] [i_13 - 1] [i_13]))))), (((((-1254946387) + (2147483647))) >> (((arr_41 [i_13] [i_13] [i_13] [i_13 - 3] [i_13] [i_13 + 2]) - (2529475132U)))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) (~(arr_28 [i_9]))))), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_9] [i_10] [i_11]))))) ^ ((+(((/* implicit */int) var_6))))))));
                    var_35 = ((/* implicit */int) max((var_35), (max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_9)) >= (-95016752021980493LL))))) >= (min((((/* implicit */unsigned int) arr_24 [i_9] [i_10])), (arr_17 [i_11] [i_10] [i_9])))))), (((((/* implicit */int) (unsigned char)87)) >> (((((int) arr_36 [i_11 - 1] [i_10] [i_9])) + (6544)))))))));
                    var_36 = ((/* implicit */int) arr_7 [i_10] [i_10] [i_9]);
                    var_37 |= ((/* implicit */short) min((((/* implicit */unsigned char) (signed char)-100)), ((unsigned char)0)));
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_12))) >= (((int) ((((/* implicit */int) (short)-31)) + (((/* implicit */int) (unsigned short)59394))))))))));
    }
    var_39 = ((/* implicit */int) ((max((min((2788752985U), (((/* implicit */unsigned int) 316830835)))), (((/* implicit */unsigned int) var_3)))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
}
