/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176869
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)109)) ? ((+(((/* implicit */int) (unsigned char)192)))) : ((+(((((/* implicit */_Bool) (signed char)-113)) ? (-1453636286) : (((/* implicit */int) (unsigned char)147))))))));
                var_20 = ((/* implicit */unsigned char) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)38))));
                var_21 = ((/* implicit */long long int) 1453636285);
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_13))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
}
