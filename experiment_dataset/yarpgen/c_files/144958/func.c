/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144958
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
    var_18 = min((-1989436415808281591LL), (((/* implicit */long long int) (signed char)9)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_4 [10LL] |= max((((signed char) min((1989436415808281591LL), (((/* implicit */long long int) var_6))))), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (-1989436415808281591LL)))));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(min((arr_2 [i_0]), (-1989436415808281591LL)))))))))));
    }
    var_20 = ((/* implicit */short) (~(((/* implicit */int) ((short) 1989436415808281591LL)))));
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4756802987758262931ULL))));
}
