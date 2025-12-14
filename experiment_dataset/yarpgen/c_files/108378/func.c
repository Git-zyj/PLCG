/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108378
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
    var_16 = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) (~(-3228443462439907378LL)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_17 -= ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (_Bool)1)))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117)))))) ? (((((/* implicit */int) arr_6 [i_0])) << (((((/* implicit */int) (unsigned char)255)) - (245))))) : ((+(((/* implicit */int) var_14)))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */short) var_0);
                        arr_12 [i_0 + 1] = ((/* implicit */int) min((((_Bool) (~(var_6)))), (((_Bool) arr_5 [i_0 + 2]))));
                        var_20 -= min(((+(547608330240LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)31070))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        var_21 -= ((/* implicit */unsigned int) (+((+(((/* implicit */int) (signed char)127))))));
                        var_22 = ((/* implicit */unsigned short) (-(var_12)));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_0 + 2] [i_1] &= ((/* implicit */unsigned int) (~(arr_15 [i_0 - 1] [i_0 - 3])));
                        arr_20 [i_5] [i_1] [i_0] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_9 [(short)7] [(short)7] [(short)7])))));
                    }
                    for (signed char i_6 = 2; i_6 < 13; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_1 [i_1] [i_0]))));
                        arr_24 [i_0] [3LL] [(unsigned char)7] [(unsigned char)7] |= ((/* implicit */_Bool) max((min((arr_15 [i_1] [i_6 - 1]), (arr_15 [i_0 + 1] [i_6 - 2]))), (((/* implicit */int) ((signed char) arr_15 [i_0] [i_6 + 1])))));
                        var_24 &= ((/* implicit */short) min((((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)3473)))) >> (((((/* implicit */int) ((unsigned char) var_4))) - (118))))), (((/* implicit */int) ((((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((/* implicit */int) (unsigned char)224)) - (224))))) == (((/* implicit */int) (_Bool)1)))))));
                        var_25 = (+(var_7));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            arr_30 [i_0] [i_0] [i_7] [i_2] [(short)6] [i_0] [i_8] = ((/* implicit */int) (unsigned char)98);
                            var_26 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)6144)) != (((/* implicit */int) var_8)))) ? (((/* implicit */unsigned int) 192)) : (4294967289U)));
                        }
                        var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */int) (unsigned short)32768)) : (arr_28 [4LL] [4LL])));
                        arr_31 [i_7] = (+(((/* implicit */int) ((_Bool) var_7))));
                        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (+(var_2))))));
                    }
                }
            } 
        } 
    } 
    var_29 -= ((/* implicit */_Bool) (-((~(((((/* implicit */_Bool) (unsigned char)24)) ? (12615554406057950117ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    var_30 = ((/* implicit */unsigned char) min((var_7), (((/* implicit */int) ((unsigned short) ((short) var_13))))));
    var_31 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_4)))));
}
