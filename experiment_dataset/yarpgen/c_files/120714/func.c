/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120714
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) (_Bool)1))));
        arr_3 [i_0] [i_0] = arr_1 [i_0];
    }
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) -7006193408978587340LL)), (((unsigned long long int) (unsigned short)65519))));
    var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -7006193408978587339LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-7006193408978587352LL))), (((/* implicit */long long int) var_16))));
}
