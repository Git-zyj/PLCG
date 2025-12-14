/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108174
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
    var_10 = ((/* implicit */unsigned long long int) (+(var_3)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (2031132957896613002LL)))) ? ((+(3014485333879580972ULL))) : (((/* implicit */unsigned long long int) var_5)))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_5)) > (((((/* implicit */_Bool) (+(1016503967)))) ? (max((10531008489187808413ULL), (((/* implicit */unsigned long long int) 1716708768U)))) : (((/* implicit */unsigned long long int) var_7))))));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_12 &= ((unsigned int) max((((/* implicit */long long int) arr_0 [i_1])), (arr_1 [i_1])));
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) (signed char)-104)), (var_6)))))));
    }
}
