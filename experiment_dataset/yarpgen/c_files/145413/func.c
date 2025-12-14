/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145413
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((930187886), (((/* implicit */int) (unsigned char)53)))))));
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(8371753329468946784ULL)))) ? ((+(((/* implicit */int) (short)15758)))) : (((((/* implicit */_Bool) 576459652791795712LL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)43))))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned short)65535))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))) : (((6845980369346138567ULL) ^ (((17801430405417459974ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
                            }
                        } 
                    } 
                    arr_13 [6] |= ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) 2851330218203113257ULL)) ? (1125865547104256ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25615))))) - (((((/* implicit */_Bool) 22584151U)) ? (((/* implicit */unsigned long long int) 524272U)) : (0ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0)))))));
                }
            } 
        } 
        arr_14 [(short)2] &= ((/* implicit */short) (~((-(((/* implicit */int) (signed char)67))))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((~(-260994334))) : (((/* implicit */int) var_9))));
    var_22 = ((/* implicit */long long int) var_1);
}
