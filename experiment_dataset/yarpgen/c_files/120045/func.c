/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120045
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
    var_20 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) + ((-2147483647 - 1))))) | (max((var_16), (2884904375U)))));
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_0))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)14)) | (((/* implicit */int) (unsigned char)241))))) || (((/* implicit */_Bool) -8111811691653199615LL))))) % (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    var_23 *= ((/* implicit */_Bool) var_9);
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_2 + 1]))));
                    var_25 = ((/* implicit */unsigned char) -8111811691653199604LL);
                    var_26 = ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)75)) || (((/* implicit */_Bool) 3108058289U))))) << (max((-8111811691653199599LL), (((/* implicit */long long int) (signed char)21)))));
                }
            } 
        } 
    } 
}
