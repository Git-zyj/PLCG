/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182402
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))) * (18LL))) >= (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)85))) * (-34LL)))))))))));
        var_12 ^= ((/* implicit */short) ((((/* implicit */_Bool) 58LL)) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) (signed char)-100))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (-34LL)))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((short) ((short) 13LL))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_7))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    var_15 += ((unsigned char) ((unsigned long long int) var_2));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 4; i_5 < 12; i_5 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min((((((((/* implicit */int) (unsigned char)129)) >> (((-4273250281763668764LL) + (4273250281763668791LL))))) << (((((/* implicit */int) var_9)) - (202))))), (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)170))) == (0U)))), (min(((unsigned char)6), ((unsigned char)125)))))))))));
                                var_17 ^= ((/* implicit */signed char) (+(((/* implicit */int) (((+(((/* implicit */int) var_7)))) > (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (_Bool)0))))))))));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_10))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (short)-20567)) ? (((((/* implicit */_Bool) 8120121641352338978LL)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (_Bool)1)))) : ((+(((/* implicit */int) (unsigned char)126)))))), (((/* implicit */int) (unsigned char)13))));
    }
    var_20 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 3710970561U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32767))) : (-4273250281763668775LL))));
}
