/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134799
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_14), (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_11))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (max((((17716378870735957065ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_5)) ? (2543735123U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)34259))))))))));
    var_19 |= var_16;
    var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-77))))) ? (((/* implicit */unsigned int) (~(var_4)))) : (var_15))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (var_14))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_3)))) ? ((~(var_4))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)12961)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (~((+(12U)))));
            }
        } 
    } 
}
