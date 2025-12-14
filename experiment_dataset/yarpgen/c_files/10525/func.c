/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10525
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (18446744073709551615ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11))) : (7235835430192581576LL)));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) min((max((arr_3 [i_0]), (arr_3 [i_0]))), (arr_3 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */int) arr_3 [i_0]);
        arr_6 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
    }
    var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
    var_16 = ((/* implicit */unsigned long long int) var_2);
}
