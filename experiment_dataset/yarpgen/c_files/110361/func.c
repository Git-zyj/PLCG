/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110361
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_13 -= ((/* implicit */unsigned short) min((((unsigned int) min((-5806014282532410645LL), (((/* implicit */long long int) var_6))))), (((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) var_0))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
    }
    var_14 = ((/* implicit */int) -6335519453554002534LL);
}
