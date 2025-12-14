/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174085
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_12 -= ((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (var_6))));
                var_13 ^= ((/* implicit */signed char) ((long long int) ((((((/* implicit */_Bool) (unsigned short)29650)) ? (((/* implicit */long long int) var_3)) : (arr_3 [19]))) | (((/* implicit */long long int) (~(((/* implicit */int) var_0))))))));
                var_14 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)167))))) : (((((/* implicit */_Bool) (short)-1)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)48)))))))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) 16705792442919173903ULL)) ? (6213585742684844748LL) : (((/* implicit */long long int) 8U))))));
            }
        } 
    } 
    var_15 += ((/* implicit */unsigned int) var_2);
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_8))));
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
}
