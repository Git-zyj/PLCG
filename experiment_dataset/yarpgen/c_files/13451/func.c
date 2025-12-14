/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13451
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
    var_12 = ((/* implicit */long long int) var_5);
    var_13 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])) ? (((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 - 2])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)4)) < (((/* implicit */int) arr_1 [i_0 - 1])))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [i_0])))))) : (((int) arr_1 [i_0 + 1]))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) == (((/* implicit */int) ((unsigned short) arr_1 [i_0 - 1])))));
        var_17 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (unsigned char)241))));
    }
    var_19 = ((/* implicit */int) var_7);
}
