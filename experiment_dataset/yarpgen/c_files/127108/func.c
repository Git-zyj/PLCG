/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127108
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_10 [(short)1] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (_Bool)1))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_8))));
                    var_18 = ((/* implicit */long long int) var_13);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -3986679822473619808LL)) ? (((/* implicit */int) (short)-3376)) : (((/* implicit */int) (unsigned short)35671)))))) ? ((~(((((/* implicit */int) (unsigned short)9296)) - (((/* implicit */int) (unsigned char)39)))))) : (((/* implicit */int) (unsigned char)127))));
    /* LoopSeq 2 */
    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        var_20 = ((unsigned short) max((max((((/* implicit */unsigned int) (unsigned char)217)), (2556733921U))), (((/* implicit */unsigned int) 0))));
        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)3620)))) % (((/* implicit */int) max(((unsigned char)241), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))))))))));
        arr_14 [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max(((unsigned short)10462), (((/* implicit */unsigned short) (unsigned char)39))))) ? (((unsigned int) (unsigned char)235)) : (var_10))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138)))));
    }
    for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) (unsigned char)233))))), (((long long int) ((var_10) >> (((var_7) + (7357099687409231406LL)))))))))));
        arr_19 [i_4] [i_4] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) -750756384)), (max((((/* implicit */unsigned int) 750756383)), (4294967288U))))) == (((arr_6 [i_4] [i_4] [i_4] [i_4]) / (var_10)))));
    }
}
