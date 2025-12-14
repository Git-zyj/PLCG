/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13608
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
    var_18 = ((/* implicit */unsigned int) -3939876290438245233LL);
    var_19 = ((/* implicit */signed char) var_12);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_20 += ((/* implicit */unsigned int) 1837699337);
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) 3311107077544214497LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))) + (max((max((((/* implicit */long long int) arr_1 [1LL] [i_0])), (var_5))), (((/* implicit */long long int) (_Bool)1))))));
    }
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))));
}
