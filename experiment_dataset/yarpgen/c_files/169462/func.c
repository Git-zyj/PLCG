/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169462
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
    var_15 |= ((/* implicit */unsigned long long int) ((((unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) 402653184U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_13)) : (2147483647))))))));
    var_16 = max((var_0), (((/* implicit */long long int) (+(((/* implicit */int) var_1))))));
    var_17 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) arr_0 [i_0]))))) ? (arr_1 [i_0]) : (((/* implicit */int) (signed char)60)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (-1371324831219420414LL)));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_11))));
    }
}
