/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112736
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_0])) >> (((var_1) - (3573819805U))))) >> (((((long long int) 313967842)) - (313967821LL)))));
        arr_3 [i_0] = arr_1 [i_0];
    }
    var_17 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((var_4) | (((/* implicit */int) (signed char)-81))))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) min((var_10), ((signed char)70))))))));
    var_18 = -36709736;
    var_19 = ((/* implicit */_Bool) var_3);
}
