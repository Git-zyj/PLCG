/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139839
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_16 ^= ((/* implicit */short) ((((/* implicit */int) min(((unsigned char)92), ((unsigned char)92)))) & (1432307288)));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) arr_1 [i_0])))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : ((-(((/* implicit */int) (unsigned char)151))))));
    }
    var_17 &= ((/* implicit */int) min((((/* implicit */unsigned int) var_11)), (var_9)));
    var_18 = ((/* implicit */short) max((((/* implicit */unsigned int) var_0)), (var_9)));
}
