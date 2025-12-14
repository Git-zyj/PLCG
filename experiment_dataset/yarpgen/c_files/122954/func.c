/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122954
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
    var_10 = ((/* implicit */long long int) var_8);
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)28)) / (((/* implicit */int) ((short) ((-292580420) / (var_6)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */int) max((var_12), (var_3)));
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_0))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        for (unsigned short i_4 = 3; i_4 < 10; i_4 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 1; i_7 < 13; i_7 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned short) min((((/* implicit */int) min(((short)18246), ((short)18247)))), (((((/* implicit */_Bool) ((int) arr_4 [i_4] [i_6]))) ? (((/* implicit */int) (short)-18251)) : (((/* implicit */int) (short)-32744))))));
                            var_15 = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_11 [i_3] [i_3])) : (arr_1 [i_3])))) < (((unsigned long long int) var_2)))));
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) -2060864283))));
                            arr_20 [i_4] [i_4 + 3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_11 [i_4 - 2] [i_7])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_3] [(unsigned short)6]))))), (((unsigned long long int) arr_1 [i_3])))))));
                        }
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            var_17 = ((/* implicit */short) (+(((/* implicit */int) arr_14 [i_3] [i_4]))));
                            arr_23 [i_3] [i_4] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) 1935615212)), (18209803272451471934ULL))) >> (((/* implicit */int) ((-1184727057) < ((~(((/* implicit */int) (short)18231)))))))));
                        }
                        arr_24 [i_3] [i_3] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */int) min((((short) ((((/* implicit */int) (short)-7628)) * (((/* implicit */int) (short)-18251))))), (min((((/* implicit */short) arr_14 [i_4 - 1] [i_4])), ((short)-1789)))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) 762362535);
                        arr_28 [i_4] [i_4] [i_5] [i_9] = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) arr_8 [i_3] [i_5])) ? (-2819532351684892480LL) : (((/* implicit */long long int) -2147483639)))))) | (max((((/* implicit */long long int) (unsigned char)16)), (9007130535264256LL)))));
                    }
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (short)29012))));
                }
                for (unsigned int i_10 = 2; i_10 < 10; i_10 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 3; i_11 < 13; i_11 += 1) 
                    {
                        for (int i_12 = 0; i_12 < 14; i_12 += 2) 
                        {
                            {
                                arr_36 [i_4] [i_11 - 3] [i_4] [i_4] [i_4] = ((/* implicit */short) (-2147483647 - 1));
                                var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_27 [i_3] [i_4] [i_10] [i_11])) ? (236940801258079714ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_3] [i_4 + 1] [i_10 + 1] [i_11 - 2] [i_4]))))), (((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) var_6))))));
                                var_21 = ((/* implicit */int) arr_19 [i_4] [i_3] [i_4] [(unsigned char)3] [6] [6] [i_12]);
                            }
                        } 
                    } 
                    arr_37 [i_3] [i_3] [i_4] [i_10 + 2] = max((((/* implicit */unsigned int) ((arr_4 [i_4 - 1] [i_4 + 1]) < (((/* implicit */unsigned long long int) (-(-9223372036854775790LL))))))), (((((unsigned int) var_4)) - (((/* implicit */unsigned int) max((arr_35 [i_3] [i_4 - 2] [i_10] [i_4] [i_10] [i_3]), (2147483647)))))));
                    arr_38 [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) ((short) var_1))))) < (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 236940801258079682ULL))))))));
                }
                /* LoopNest 3 */
                for (short i_13 = 0; i_13 < 14; i_13 += 1) 
                {
                    for (long long int i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        for (int i_15 = 2; i_15 < 12; i_15 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_41 [i_14])))))))));
                                arr_47 [i_4] = ((/* implicit */long long int) arr_27 [i_15] [i_13] [i_4] [(unsigned short)7]);
                                var_23 ^= (~(((/* implicit */int) (signed char)69)));
                                var_24 = ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_13]))))) < (((int) arr_19 [i_4] [(short)8] [(short)8] [(short)8] [i_3] [i_3] [(short)8])))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)35967)))))))) : ((~(arr_31 [i_4 - 1] [i_13] [i_15 + 1] [i_15] [i_15] [i_4 - 1]))));
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) arr_45 [i_3] [10ULL] [i_3] [6LL] [i_15 + 1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
