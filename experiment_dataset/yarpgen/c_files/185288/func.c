/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185288
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [13U] = ((/* implicit */_Bool) max((2180157998U), (433025187U)));
        arr_3 [i_0] = arr_1 [i_0] [i_0];
        var_17 = ((/* implicit */unsigned long long int) ((_Bool) (+(((/* implicit */int) var_5)))));
    }
    var_18 -= var_7;
    var_19 *= var_11;
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((2546083984U) < (1716026779U))))) < (var_15))))) < (var_3))))));
    var_21 = ((((/* implicit */unsigned long long int) 2288718490U)) <= (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (2493397388542142292ULL))) << (((((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_6))) - (3245613702U))))));
}
