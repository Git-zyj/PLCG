/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102614
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
    var_17 -= ((/* implicit */unsigned short) max(((unsigned char)9), ((unsigned char)252)));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_3))));
    var_19 = ((/* implicit */short) var_13);
    var_20 = ((unsigned char) ((unsigned long long int) (~(((/* implicit */int) (unsigned char)241)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_21 += ((/* implicit */unsigned char) (+((+(((/* implicit */int) (short)1))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) var_14))))) ? (((((/* implicit */int) (unsigned char)246)) % (((/* implicit */int) (unsigned char)246)))) : (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_1 [i_0])))))));
    }
}
