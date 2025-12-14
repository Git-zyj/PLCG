/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163149
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
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) 6814868904546324163ULL))));
    var_20 = ((((/* implicit */int) var_7)) - (((/* implicit */int) var_2)));
    var_21 = ((/* implicit */short) (+(((/* implicit */int) (short)27239))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_22 += ((/* implicit */short) (((!(((/* implicit */_Bool) var_2)))) ? (min(((-(742112073524732548LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))))) : (((/* implicit */long long int) (-((-(((/* implicit */int) (short)5078)))))))));
        var_23 &= ((/* implicit */long long int) (~(min((((((/* implicit */_Bool) (short)-27239)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27238))) : (11631875169163227446ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (-742112073524732534LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89))))))))));
    }
    var_24 = ((/* implicit */int) 742112073524732534LL);
}
