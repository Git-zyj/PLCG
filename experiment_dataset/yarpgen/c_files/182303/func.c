/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182303
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
    var_10 -= (~(var_0));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_5 [i_0] [i_1]);
                arr_7 [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */int) (((_Bool)1) ? (9636093818619420916ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                var_11 |= ((/* implicit */_Bool) 737281901845786518ULL);
                var_12 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((unsigned long long int) 9223372036854775792LL))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) var_6))))) | (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))) : (((/* implicit */unsigned long long int) var_8))));
            }
        } 
    } 
}
