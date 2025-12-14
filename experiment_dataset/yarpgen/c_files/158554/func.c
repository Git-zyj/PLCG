/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158554
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
    var_16 *= ((/* implicit */signed char) var_8);
    var_17 -= ((/* implicit */unsigned long long int) (~(min((((unsigned int) 1407639611U)), (((((/* implicit */_Bool) var_5)) ? (var_13) : (var_13)))))));
    var_18 = ((/* implicit */int) min((var_18), (((int) max((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_2)))), (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_5)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_0 [i_0]) ^ (arr_0 [i_0]))) | (max((arr_0 [i_0]), (arr_0 [8ULL])))))) ? (min((arr_1 [i_0] [i_0 - 1]), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)86)))))));
        var_19 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) (unsigned short)54642))))), (min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)41384))))))));
    }
}
