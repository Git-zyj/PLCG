/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170895
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
    var_20 = (((+(min((5302929987541924270LL), (((/* implicit */long long int) var_5)))))) > (((/* implicit */long long int) ((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = min((var_1), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-3))))));
        var_22 += ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) max(((signed char)0), ((signed char)-3)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_13)))) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) -5302929987541924271LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37644))) : (5302929987541924258LL)))));
        var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned int) -1039802265)), (0U)));
    }
}
