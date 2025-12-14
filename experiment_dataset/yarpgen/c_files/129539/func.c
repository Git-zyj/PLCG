/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129539
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) < (3633450397941960249ULL))))))) : (var_16)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] |= ((/* implicit */int) arr_1 [(unsigned short)9]);
        var_18 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (-(8797227581944067922LL)))) ? ((-(var_12))) : (min((var_12), (((/* implicit */long long int) var_7)))))));
    }
}
