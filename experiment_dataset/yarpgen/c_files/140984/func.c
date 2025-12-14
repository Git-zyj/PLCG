/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140984
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
    for (signed char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 1])) ? (arr_0 [i_0 - 3] [i_0 - 3]) : (arr_0 [i_0 - 1] [i_0 - 3]))), ((+(4294967273U)))));
        var_18 = ((/* implicit */signed char) ((((unsigned int) (signed char)-61)) / (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-69)))))));
    }
    for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_19 = ((/* implicit */signed char) ((arr_0 [i_1 + 1] [6U]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-34)))));
        arr_5 [i_1] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((var_12), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])))) & (var_16)))) ? (var_13) : (((/* implicit */long long int) var_14))));
        var_20 = ((signed char) ((arr_0 [i_1 - 1] [i_1 + 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)23), ((signed char)72)))))));
    }
    var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)6)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39)))));
    var_22 &= var_17;
}
