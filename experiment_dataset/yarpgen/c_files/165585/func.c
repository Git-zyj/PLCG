/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165585
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
    var_11 = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned char)122)), ((-(((((/* implicit */_Bool) 1871648163)) ? (-3949219932999549704LL) : (((/* implicit */long long int) 887646343U))))))));
    var_12 |= ((((/* implicit */_Bool) 534243451U)) ? (262143U) : (((/* implicit */unsigned int) 721441239)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */int) min((min((((/* implicit */long long int) ((53894895U) * (((/* implicit */unsigned int) 721441248))))), (min((var_9), (((/* implicit */long long int) var_2)))))), (((/* implicit */long long int) var_5))));
        var_14 = ((/* implicit */int) ((max((((/* implicit */int) (short)(-32767 - 1))), (721441239))) <= (721441239)));
        arr_2 [i_0] = ((/* implicit */_Bool) (signed char)-66);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_15 ^= ((/* implicit */unsigned long long int) -1739577453);
        var_16 = (!(((/* implicit */_Bool) (short)(-32767 - 1))));
    }
}
