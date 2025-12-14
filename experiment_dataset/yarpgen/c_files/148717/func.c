/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148717
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((5422206905556485812ULL) >= (13024537168153065802ULL)))) + (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)229))))))) : (((/* implicit */long long int) min((((/* implicit */int) max(((unsigned char)192), (var_9)))), (((var_11) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))))))));
    var_13 = ((/* implicit */short) var_4);
    var_14 *= ((/* implicit */unsigned int) var_3);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) arr_1 [i_0])))));
        var_16 = ((/* implicit */signed char) (!(((((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9)))) < (((/* implicit */int) arr_1 [i_0]))))));
        var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((arr_1 [i_0]) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) ((_Bool) arr_1 [i_0])))))), (((var_11) ? (0LL) : (min((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0])))))));
    }
}
