/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138498
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_3 [(unsigned short)10] [(unsigned short)10] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)5]))) != (5968117826003366472ULL))))));
        var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))));
        var_21 = ((/* implicit */long long int) (~((~(0ULL)))));
    }
    var_22 = ((/* implicit */long long int) ((((((/* implicit */int) var_15)) > (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)13873)) : (((/* implicit */int) var_17)))))) ? (((((/* implicit */_Bool) -1163479534)) ? (1593466118881097200ULL) : (36028797018955776ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) var_8)) : (max((((/* implicit */long long int) (short)-13715)), (-5247075901624701045LL))))))));
}
