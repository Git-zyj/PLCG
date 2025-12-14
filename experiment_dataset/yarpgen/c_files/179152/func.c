/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179152
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(unsigned short)0] = ((/* implicit */signed char) var_9);
        var_16 = (~(var_9));
    }
    var_17 &= ((/* implicit */unsigned long long int) (((!(((((/* implicit */int) var_2)) >= (((/* implicit */int) var_13)))))) || (((/* implicit */_Bool) var_3))));
    var_18 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_4))))) ? (min((((/* implicit */unsigned long long int) var_4)), (8256073117261889732ULL))) : (((/* implicit */unsigned long long int) ((14U) - (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((unsigned short) 27U))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) var_5)))), (((((/* implicit */_Bool) max((4294967266U), (((/* implicit */unsigned int) var_3))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (17624267452851593802ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
}
