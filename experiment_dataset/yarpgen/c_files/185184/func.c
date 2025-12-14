/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185184
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
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) (-(5505299993682806186LL)));
        var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) -5505299993682806158LL)) ? (((/* implicit */int) var_15)) : ((((~(((/* implicit */int) var_14)))) ^ (((/* implicit */int) var_13))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((5505299993682806187LL) >> (((((/* implicit */int) var_14)) - (2432)))))))) ? (min((((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((short) 5505299993682806178LL))) <= (((/* implicit */int) var_5))))))));
        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max(((-(var_10))), (((/* implicit */int) ((((/* implicit */int) var_13)) <= (var_6)))))))));
    }
    for (int i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        var_20 -= ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 2]))))));
        arr_5 [i_1] = ((/* implicit */short) ((_Bool) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) 5505299993682806180LL)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) var_9)))))));
        var_21 = ((/* implicit */unsigned short) min((((/* implicit */int) min((var_4), (var_4)))), (((int) var_0))));
    }
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) -5505299993682806183LL))), (((int) -5505299993682806158LL))))) ? (((/* implicit */int) ((((((/* implicit */int) var_12)) << (((5505299993682806183LL) - (5505299993682806167LL))))) == ((~(var_6)))))) : (((/* implicit */int) ((signed char) ((short) var_0))))));
    var_23 = var_14;
}
