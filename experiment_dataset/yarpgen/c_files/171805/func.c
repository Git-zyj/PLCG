/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171805
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
    var_18 = ((/* implicit */long long int) var_9);
    var_19 += var_13;
    var_20 = var_6;
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_14) : (max((var_17), (((/* implicit */unsigned int) var_4))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (var_1)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))) : (min((((/* implicit */unsigned int) var_7)), (var_17)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)55508)) ? (((/* implicit */int) (unsigned short)59524)) : (((/* implicit */int) (signed char)-53))));
                var_23 = ((/* implicit */unsigned char) var_15);
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) var_10))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_17)))) : (var_3)));
            }
        } 
    } 
}
