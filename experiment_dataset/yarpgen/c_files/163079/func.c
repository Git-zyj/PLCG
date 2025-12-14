/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163079
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -3406699)), (arr_5 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) -7459913239938998468LL)) : (max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (arr_5 [i_0] [i_1]))))))));
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((_Bool) ((short) ((((/* implicit */_Bool) (short)-23155)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243))) : (3140092434U))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (var_14)))) ? (((/* implicit */int) (short)-23155)) : (((((/* implicit */_Bool) (short)-23132)) ? (((/* implicit */int) (unsigned char)194)) : (241756410)))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)23155)) ? (var_14) : (((/* implicit */int) (unsigned char)61))))) : (4294967295U)))));
    var_23 |= max((((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((var_15) >> (((((/* implicit */int) (unsigned char)133)) - (120))))))), (((((_Bool) var_9)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)66)), (var_17)))) : (((((/* implicit */_Bool) (short)23131)) ? (8079012131614672873ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
}
