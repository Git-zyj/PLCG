/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187053
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
    var_20 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_21 &= ((/* implicit */signed char) -4774234877195660840LL);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (960) : (((/* implicit */int) (unsigned char)128))))) : (max((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_0])))));
    }
}
