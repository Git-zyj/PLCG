/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100207
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) ((((/* implicit */int) (!((_Bool)0)))) == (2147483647)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_9)) : ((-2147483647 - 1))))) || (((/* implicit */_Bool) min((arr_1 [(unsigned char)9] [i_0]), (((/* implicit */int) var_4))))))))));
        arr_2 [i_0] |= ((/* implicit */short) -2147483647);
        var_15 = ((((/* implicit */_Bool) (-(arr_1 [i_0 - 1] [i_0 + 2])))) ? (((/* implicit */int) arr_0 [i_0] [i_0 + 2])) : (arr_1 [1] [i_0 + 2]));
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) (-(var_10)))))) : (min((((/* implicit */unsigned long long int) ((2147483647) == (((/* implicit */int) (signed char)23))))), (var_6)))));
    var_17 += ((/* implicit */unsigned char) var_9);
}
