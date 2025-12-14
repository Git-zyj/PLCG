/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150349
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
    var_10 -= ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0]))));
        var_12 = ((/* implicit */long long int) ((unsigned short) -9104380965262614329LL));
    }
}
