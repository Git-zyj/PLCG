/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135166
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
    var_13 = ((/* implicit */unsigned long long int) -3864510385907176963LL);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) (+(arr_2 [i_0])))) : (var_1)))) ? (((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) + (arr_0 [i_0] [i_0])))) ? ((+(12253866950345005489ULL))) : (16196553787803945881ULL))) : (((/* implicit */unsigned long long int) (-(arr_1 [i_0]))))));
        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (2250190285905605751ULL) : (var_1))))));
        var_15 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_2 [i_0])))));
    }
}
