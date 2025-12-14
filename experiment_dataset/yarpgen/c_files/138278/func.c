/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138278
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
    var_18 = ((/* implicit */short) var_15);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_8))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1 + 2])) - (((/* implicit */int) arr_5 [i_1] [i_0] [i_0]))))) : (((9ULL) * (13189731354084277503ULL)))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) >> (((var_5) + (1089092407))))))))))));
            }
        } 
    } 
}
