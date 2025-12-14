/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142737
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
    var_15 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_16 = ((9001160373494839898ULL) >> (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [12U]))))) == (((/* implicit */long long int) ((2092838936) + (-2092838936))))))));
        var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */long long int) 2092838936)) : (-986255489343548535LL)));
    }
    for (short i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_4 [i_1 + 1]))));
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 2]))) * (747256770929567226ULL)))) ? (((/* implicit */int) arr_0 [i_1 - 2])) : ((-(((/* implicit */int) arr_0 [i_1 + 1]))))));
    }
    var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((var_12) < (((/* implicit */int) var_4)))))));
}
