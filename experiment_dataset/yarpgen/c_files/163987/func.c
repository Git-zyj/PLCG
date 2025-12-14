/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163987
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [18LL] = ((/* implicit */unsigned int) var_4);
        var_20 += ((/* implicit */signed char) (-(((/* implicit */int) min((min(((short)-1), (((/* implicit */short) (signed char)-66)))), (var_11))))));
    }
    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(max((((/* implicit */int) var_8)), (var_6))))))));
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) min(((signed char)-77), ((signed char)-66))))));
}
