/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106119
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
    var_11 = ((/* implicit */long long int) var_7);
    var_12 |= ((/* implicit */short) (+(max((var_4), (((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_13 = (+(((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) - (arr_0 [i_1] [i_2]))));
                    var_14 -= ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) (short)-30647);
                                arr_11 [i_0] [(unsigned short)15] [i_4] [i_4] [i_4] [0ULL] = ((/* implicit */signed char) min((((/* implicit */int) ((short) (signed char)-16))), ((~(arr_4 [i_1] [(unsigned short)7])))));
                                var_16 = ((/* implicit */_Bool) (((!(arr_10 [i_0] [i_1] [13U] [i_3] [i_4]))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_4])) : (((/* implicit */int) min((arr_10 [i_0] [i_1] [i_2] [i_0] [i_4]), (arr_10 [i_0] [(_Bool)1] [i_0] [i_0] [i_4]))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (long long int i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [12] [(_Bool)1] &= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_10 [i_7] [i_7 + 2] [i_7 + 1] [i_7] [i_5])) : ((-(((/* implicit */int) var_8))))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))) == (var_0))))));
                                var_18 *= ((unsigned int) (signed char)75);
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (~((-(((/* implicit */int) var_2)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */short) (unsigned char)21);
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [(short)7])) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) arr_6 [i_0] [i_0] [16LL])))))));
                        }
                        for (short i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (var_0)))) ? (792985585) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_21 [i_0] [6] [i_5])))))));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))));
                            arr_29 [i_10] [i_10] = ((/* implicit */_Bool) ((arr_1 [i_0]) % (arr_1 [i_5])));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) (unsigned char)254);
                            var_25 = ((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_22 [i_0] [i_0])))) + (2147483647))) << (((arr_12 [i_0] [i_1]) - (14276936266566016329ULL)))));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) var_7))))))));
                            arr_32 [i_0] [(signed char)5] [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [i_0] [19U] [i_0] [i_0] [i_0]))));
                            var_27 -= ((/* implicit */unsigned char) (+(arr_13 [i_0] [i_8] [i_11])));
                        }
                        for (unsigned long long int i_12 = 1; i_12 < 17; i_12 += 3) 
                        {
                            var_28 *= ((/* implicit */unsigned int) (-(var_6)));
                            arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (-(arr_34 [i_12 + 1] [i_12 + 3])));
                            arr_38 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2147483642)) / (2066976073757984812ULL)));
                        }
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_5])) ? (((/* implicit */long long int) arr_31 [i_0] [i_1] [i_5] [i_8])) : (((long long int) (_Bool)1))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_42 [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                        var_30 &= ((/* implicit */short) ((((/* implicit */int) ((3455804031881818447ULL) == (arr_12 [i_0] [i_0])))) << (((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_4) : (((/* implicit */int) var_2)))) - (1529637542)))));
                        var_31 |= ((/* implicit */int) ((arr_26 [i_13] [12LL] [i_1] [i_1] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    }
                    for (short i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        arr_45 [i_0] [i_0] [3U] [i_0] = ((/* implicit */unsigned long long int) ((arr_20 [i_14] [i_5] [2ULL] [i_0]) || (((/* implicit */_Bool) 1505726809367755418LL))));
                        /* LoopSeq 1 */
                        for (int i_15 = 0; i_15 < 20; i_15 += 1) 
                        {
                            arr_48 [i_15] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)13055)) == (arr_13 [i_0] [i_0] [i_0])));
                            var_32 -= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 4238291485654104999LL)) ? (var_0) : (((/* implicit */unsigned long long int) arr_31 [i_0] [i_5] [9ULL] [i_5]))))));
                            arr_49 [19LL] [i_0] [i_0] [0] [i_15] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_0] [i_1] [i_5] [i_0] [i_1]))));
                        }
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((unsigned long long int) var_10))));
                    }
                }
                var_34 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) arr_6 [i_1] [i_0] [i_0])) ? (14002888922782998786ULL) : (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0]))))))));
                arr_50 [(unsigned short)0] [i_0] [i_0] = ((/* implicit */short) ((var_4) <= (max((((/* implicit */int) (_Bool)1)), (-792985563)))));
            }
        } 
    } 
}
