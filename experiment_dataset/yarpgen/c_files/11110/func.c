/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11110
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
    var_11 = (signed char)8;
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) max((arr_0 [i_0]), (((/* implicit */long long int) (signed char)-24))))))));
        var_13 = ((/* implicit */int) ((unsigned short) max(((+(((/* implicit */int) var_5)))), ((~(((/* implicit */int) (_Bool)0)))))));
        arr_2 [i_0] = (signed char)-8;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = (signed char)35;
        var_14 ^= ((/* implicit */unsigned short) (short)32765);
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (max((((/* implicit */long long int) (~(((/* implicit */int) var_6))))), (min((var_8), (((/* implicit */long long int) (signed char)11)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((_Bool) arr_0 [i_1]))))))));
    }
    var_16 = var_5;
}
