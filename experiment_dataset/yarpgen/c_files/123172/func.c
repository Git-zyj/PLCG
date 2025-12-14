/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123172
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
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) arr_2 [i_0]);
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_17))) >> (((arr_1 [i_0]) - (17890651786119676542ULL)))));
        var_21 = ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) arr_3 [i_0])) : (var_3));
    }
    /* LoopSeq 2 */
    for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        var_22 += ((/* implicit */long long int) ((_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (10433598745247124130ULL))) ^ ((~(arr_4 [3]))))));
        var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) var_10)))))) ? (((((/* implicit */_Bool) ((int) arr_5 [(_Bool)1]))) ? (8013145328462427503ULL) : (((/* implicit */unsigned long long int) arr_5 [i_1])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))) * (arr_4 [i_1])))));
    }
    for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
    {
        var_24 = ((/* implicit */signed char) var_1);
        var_25 = ((/* implicit */int) (unsigned short)61448);
    }
}
