/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121886
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
    var_15 = ((/* implicit */unsigned short) (+(((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) (unsigned short)1)) - (1)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned short)65527)) : (max((((/* implicit */int) arr_1 [i_0] [i_0])), (1085191498))))))))));
        var_17 = ((/* implicit */int) var_11);
        arr_3 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned char) ((int) arr_2 [i_0] [i_0])))), (((long long int) arr_2 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [(signed char)6] [i_1] [(signed char)6] = ((unsigned char) ((signed char) arr_6 [i_1] [i_0 - 1] [i_1 + 2]));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_7))))));
                                arr_15 [(unsigned char)5] [(unsigned char)5] [(unsigned char)5] [i_3] [i_4] [(unsigned char)5] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned char) arr_9 [i_0] [(signed char)2] [i_0] [i_0])), ((unsigned char)16)));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_11 [i_1]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */int) arr_2 [i_0] [i_0])), (var_6)))), (var_3)))) || (((/* implicit */_Bool) ((signed char) max((var_3), (((/* implicit */long long int) 1940828857))))))));
                    var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0 + 1] [i_1 + 3]))) ? ((+(((/* implicit */int) arr_2 [i_0 + 1] [i_1 + 1])))) : (((((/* implicit */_Bool) (unsigned char)16)) ? (-1085191498) : (((/* implicit */int) arr_2 [i_0 + 1] [i_1 + 1]))))));
                }
            } 
        } 
        var_22 *= ((/* implicit */unsigned short) ((int) arr_14 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]));
    }
    for (long long int i_5 = 1; i_5 < 11; i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] [i_5] = max((((long long int) min((((/* implicit */unsigned short) arr_5 [11] [i_5])), (var_12)))), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_5])) | (((/* implicit */int) ((((/* implicit */int) arr_10 [i_5] [i_5] [i_5])) > (-399751356))))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1713500380)))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)53)))));
        arr_19 [i_5] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (signed char)42)) ^ (((/* implicit */int) max((var_7), (arr_17 [i_5] [i_5])))))));
        arr_20 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((signed char) var_4)))) ? (((/* implicit */int) arr_1 [i_5] [i_5])) : (((-1836454925) + (((int) 1085191497))))));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((unsigned char) max((((/* implicit */int) (unsigned char)168)), (-1713500381)))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) arr_22 [i_6] [i_6])) : (((/* implicit */int) arr_22 [i_6] [i_6]))));
        var_26 = ((/* implicit */signed char) arr_21 [i_6]);
        var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_6])) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_21 [i_6]))))));
    }
    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (!((((~(((/* implicit */int) (unsigned char)35)))) < (((/* implicit */int) ((unsigned char) 0LL))))))))));
}
