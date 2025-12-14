/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105949
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26225))) : (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))) : (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(var_5))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(4202324642U)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)-104);
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        var_14 ^= ((18446735277616529408ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
        arr_9 [9U] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) var_8))));
    }
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1762)) + (((/* implicit */int) var_11)))))));
}
