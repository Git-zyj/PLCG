/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117708
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */long long int) ((short) ((long long int) max((((/* implicit */int) var_11)), (arr_1 [(_Bool)1])))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (~(((int) var_10))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) ((short) (unsigned char)192));
        arr_9 [i_1] = ((/* implicit */int) arr_4 [i_1] [i_1]);
    }
    var_16 &= ((/* implicit */int) ((((((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */long long int) var_10)))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (var_7))))))) | (((/* implicit */long long int) ((/* implicit */int) var_13)))));
}
