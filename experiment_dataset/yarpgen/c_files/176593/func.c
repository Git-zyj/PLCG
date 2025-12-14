/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176593
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
    var_20 = ((/* implicit */unsigned char) min((((long long int) ((((/* implicit */int) var_15)) <= ((-2147483647 - 1))))), (((long long int) var_18))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_21 |= ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_16) : ((-2147483647 - 1)))));
        var_22 = ((/* implicit */signed char) var_14);
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (-1)));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) var_19)))))));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((-2147483647 - 1))))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (signed char)0)))))));
    }
    var_26 -= ((/* implicit */int) min((((/* implicit */long long int) var_8)), (var_10)));
}
