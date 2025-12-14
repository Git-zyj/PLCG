/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12286
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((1431548972U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)26857)) == (((/* implicit */int) var_1))))) : (((/* implicit */int) arr_1 [i_0]))))) : (min((max((1431548972U), (((/* implicit */unsigned int) arr_1 [i_0])))), (((/* implicit */unsigned int) (short)-19325))))));
        arr_2 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 2863418332U)), (14951749675348278844ULL)));
    }
    var_17 = ((/* implicit */signed char) (~(var_6)));
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_10))));
}
