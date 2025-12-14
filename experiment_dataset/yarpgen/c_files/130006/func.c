/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130006
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
    var_18 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned long long int) var_15))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65))) + (var_7))), (((/* implicit */unsigned int) (signed char)69))))) ? (((((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (11LL))) / (((/* implicit */long long int) ((((/* implicit */_Bool) -4081536279742836830LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)2240)))) == (((/* implicit */int) ((_Bool) (unsigned char)239)))))))));
                    arr_9 [2ULL] [i_1] [2ULL] &= ((/* implicit */unsigned char) ((_Bool) var_13));
                    var_19 = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4081536279742836830LL)) ? (((/* implicit */int) max((var_0), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) (+(4294967295U)))) : (max((var_16), (((var_5) | (var_5))))));
}
