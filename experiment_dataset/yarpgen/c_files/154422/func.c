/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154422
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
    var_12 *= ((/* implicit */short) (-(((unsigned int) ((signed char) 0U)))));
    var_13 = (-(((int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_9))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) max((max((((/* implicit */long long int) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)125)))))), (max((((/* implicit */long long int) 4294967295U)), (920137011395081696LL))))), (((/* implicit */long long int) (signed char)(-127 - 1)))));
            var_14 = ((/* implicit */short) (+(920137011395081696LL)));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
            arr_7 [i_1] = ((/* implicit */signed char) 0U);
        }
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)29935))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
                    {
                        var_16 += ((/* implicit */unsigned short) ((var_1) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_9 [i_2]) : (var_5))))));
                        var_17 = ((/* implicit */unsigned char) -920137011395081696LL);
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            arr_18 [i_0] [i_3] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_3] [i_4 + 1] [i_4 + 1] [i_4])) ? (arr_16 [i_3] [i_4 + 4] [i_4] [i_4] [i_4]) : (arr_14 [i_2] [i_4 + 3] [i_4] [i_5])));
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */int) var_3);
                        }
                        for (short i_6 = 1; i_6 < 21; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_6))));
                        }
                    }
                    var_20 *= ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) var_0)))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_2] [i_0] [i_0]))))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) var_3);
                        arr_28 [i_0] [i_0] [i_7] [i_8] [i_9] [i_9] = var_0;
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            arr_33 [i_0] [i_0] [i_8] [i_9] [i_10] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((9223372036854775807LL) / (9223372036854775782LL)))), (max((((11265328809595693630ULL) / (((/* implicit */unsigned long long int) arr_9 [i_7])))), (((/* implicit */unsigned long long int) ((unsigned int) arr_21 [i_0] [i_7] [i_0] [i_0] [i_10] [i_8])))))));
                            var_22 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) (!((!(((/* implicit */_Bool) 9223372036854775808ULL))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_10] [i_7] [i_8] [i_8] [i_10])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))) ? (arr_29 [i_10] [i_9] [i_9] [i_8] [i_7] [i_7] [i_0]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)9)), (3601244109U))))))));
                        }
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 920137011395081696LL)), (arr_14 [i_0] [i_7] [i_7] [i_7])))))))));
        }
        for (long long int i_11 = 1; i_11 < 21; i_11 += 1) 
        {
            var_24 &= (~(((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))) >= (arr_24 [i_11] [i_11] [i_11 + 3])))));
            var_25 = ((/* implicit */short) var_4);
        }
        arr_36 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)7)), (var_1)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            for (long long int i_13 = 2; i_13 < 23; i_13 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 12572086362536369682ULL)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_35 [i_13]))))) : ((-(16140901064495857664ULL)))));
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (signed char)-125))));
                    var_28 = ((/* implicit */unsigned short) var_8);
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        for (unsigned long long int i_15 = 1; i_15 < 24; i_15 += 4) 
                        {
                            {
                                arr_48 [i_0] [i_12] [i_0] [i_14] [i_13] [i_12] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_13] [i_14] [i_13] [i_12] [i_13])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                                arr_49 [i_13] = ((/* implicit */_Bool) max((var_0), (((/* implicit */int) ((signed char) 18014398505287680ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
