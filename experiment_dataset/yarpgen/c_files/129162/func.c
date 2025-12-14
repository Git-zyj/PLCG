/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129162
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_5)) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) 4333857829890440008LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)57)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_1 + 1] [i_0] = ((/* implicit */_Bool) var_0);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_18 [i_4] [i_4] [i_0] [i_4] [i_4] [1LL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (18446744073709551600ULL)))));
                                var_18 ^= ((/* implicit */signed char) var_12);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((3529024679118484004ULL) >> (((/* implicit */int) (_Bool)1))));
                                arr_27 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (-100549413) : (((/* implicit */int) arr_1 [i_1 + 1])))) > (((/* implicit */int) arr_1 [i_1 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_7 = 1; i_7 < 24; i_7 += 4) 
        {
            var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-84)) ? (2147483647U) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) > (-1LL))))))))));
            var_20 = ((/* implicit */long long int) (((_Bool)1) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (-1068861712) : (((/* implicit */int) arr_20 [i_7] [i_7] [i_0] [16U])))))));
            /* LoopNest 3 */
            for (signed char i_8 = 3; i_8 < 24; i_8 += 2) 
            {
                for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    for (long long int i_10 = 2; i_10 < 23; i_10 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_15))));
                            var_22 += ((/* implicit */signed char) ((var_8) - (((/* implicit */long long int) var_2))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned short) var_3);
        }
    }
    for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
    {
        arr_41 [i_11] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_11] [i_11] [i_11]))) | (18446744073709551615ULL)));
        var_24 = ((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) << (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_20 [(short)13] [(short)13] [i_11] [i_11])))) - (32753)))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) 
    {
        arr_44 [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) / ((~(((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */int) var_15))))))));
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 14; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) 18446744073709551615ULL);
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 14; i_15 += 2) 
                    {
                        for (unsigned int i_16 = 0; i_16 < 14; i_16 += 1) 
                        {
                            {
                                arr_55 [(short)3] [(short)3] [i_16] [i_15] [i_16] = ((/* implicit */signed char) (-(((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_1)) - (73)))))));
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((arr_9 [i_12] [i_15] [i_12]), (((/* implicit */unsigned int) var_9)))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_12])))))) && (((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_12] [i_15] [i_12] [(unsigned char)0] [i_12]))) == (var_8)))));
                                arr_56 [i_12] [i_12] [(signed char)7] [(unsigned short)6] [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(arr_38 [i_12] [i_13] [21U] [i_15] [i_16])))) ^ (-4333857829890439999LL)));
                            }
                        } 
                    } 
                    arr_57 [i_12] [i_12] [i_12] = ((/* implicit */short) (~(((/* implicit */int) max(((short)32756), (min((var_0), ((short)(-32767 - 1)))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned int) var_6);
        arr_58 [i_12] = (_Bool)1;
    }
}
