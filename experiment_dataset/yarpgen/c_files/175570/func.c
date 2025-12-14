/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175570
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
    for (signed char i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0 - 1]);
        var_17 = ((/* implicit */unsigned char) ((max((423810488U), (((/* implicit */unsigned int) (unsigned char)0)))) * (((/* implicit */unsigned int) 536341251))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) && (((/* implicit */_Bool) 1616786887))))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [1] [i_0 - 1])))))));
    }
    var_19 = ((/* implicit */int) max(((!((!(((/* implicit */_Bool) var_5)))))), ((_Bool)1)));
}
