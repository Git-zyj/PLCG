/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100141
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)9525))))));
        arr_2 [i_0] = ((unsigned long long int) ((arr_0 [i_0] [(unsigned short)2]) == (((/* implicit */int) (signed char)127))));
        var_14 -= ((/* implicit */int) ((((/* implicit */int) var_5)) < (arr_1 [i_0])));
    }
    var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)1)) - (((/* implicit */int) var_12))))) ? ((-(((/* implicit */int) var_8)))) : (var_4))), (((/* implicit */int) var_5))));
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) min((-1940566769), (((/* implicit */int) var_8)))))));
    var_17 = ((/* implicit */int) (unsigned short)25302);
    var_18 = ((/* implicit */unsigned short) ((-1771400506) > (((/* implicit */int) ((((/* implicit */_Bool) min((var_2), (var_3)))) || (((/* implicit */_Bool) var_6)))))));
}
