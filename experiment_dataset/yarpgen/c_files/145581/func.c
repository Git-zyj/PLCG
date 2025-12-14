/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145581
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
    var_18 = ((/* implicit */long long int) min(((short)-29083), (((/* implicit */short) (signed char)115))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */int) min((arr_1 [i_0]), (min((arr_1 [i_0]), (arr_1 [i_0])))));
        var_20 &= ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) (signed char)114)))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)118)) >> (((/* implicit */int) ((arr_1 [i_0]) && (arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))))) : (var_16))))));
    }
    var_22 -= ((/* implicit */short) 1301799674622005181ULL);
}
