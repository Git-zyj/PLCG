/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116144
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
    var_14 = ((/* implicit */long long int) max((((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-84)) && (((/* implicit */_Bool) 4294967295U)))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)-84)), (-1048576)))))))));
    var_15 = ((/* implicit */unsigned int) var_1);
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (signed char)83))));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 4])) && (((/* implicit */_Bool) arr_1 [i_0 + 3]))))), (((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)6))))));
        arr_4 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (signed char)-7)))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_2 [i_0] [i_0]))));
        var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (max((134217664), (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    var_20 = var_3;
}
