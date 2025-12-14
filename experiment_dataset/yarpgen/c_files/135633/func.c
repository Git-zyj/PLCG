/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135633
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((min((var_7), (((/* implicit */unsigned long long int) var_3)))), (max((var_7), (((/* implicit */unsigned long long int) var_0))))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) (~((~(-6835194244647352233LL)))));
        var_22 = (+(((int) arr_2 [i_0])));
        var_23 = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) >> ((+(((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */unsigned short) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) >> ((((+(((/* implicit */int) arr_0 [i_0])))) + (55))))));
        var_24 *= max((((/* implicit */unsigned int) var_6)), (min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_0 [20ULL])))));
    }
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? ((~(((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */int) var_6)))))) : (((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) (unsigned short)15468)))) : ((~(((/* implicit */int) (_Bool)0))))))));
    var_26 = ((/* implicit */unsigned short) max((var_17), (var_4)));
}
