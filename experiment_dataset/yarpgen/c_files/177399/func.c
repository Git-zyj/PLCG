/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177399
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) min(((~(var_1))), ((-(var_2))))))));
    var_14 = 11047973094681641293ULL;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((((/* implicit */_Bool) 2002787428U)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) (short)-6589)))) > (((/* implicit */int) (_Bool)1)))))));
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))) / (min((((/* implicit */unsigned int) var_12)), (var_4)))))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_5 [i_1] = arr_0 [i_1] [i_1];
        var_16 ^= ((/* implicit */_Bool) arr_1 [i_1] [(_Bool)1]);
        var_17 = ((/* implicit */unsigned int) min((var_17), (var_1)));
    }
}
