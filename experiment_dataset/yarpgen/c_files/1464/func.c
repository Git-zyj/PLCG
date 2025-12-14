/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1464
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (+((+(((/* implicit */int) (short)16384))))));
        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)16388))))) ? (((/* implicit */long long int) min((1851112839U), (2443854457U)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((/* implicit */long long int) (short)16388)), (arr_0 [i_0]))) : (arr_0 [i_0])))));
        arr_3 [i_0] [(unsigned short)19] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (max((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    var_20 |= ((/* implicit */long long int) var_2);
}
