/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13744
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
    var_14 = ((/* implicit */_Bool) 17489922976611420579ULL);
    var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)58)) + (var_1))), (((((/* implicit */_Bool) (unsigned short)19892)) ? (var_9) : (((/* implicit */int) (unsigned char)41))))))) : (6784002423680681570ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [2LL] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_16 ^= ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (3603572732U) : (arr_0 [i_0]));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [(_Bool)1] [i_0]))))) % (((/* implicit */int) arr_1 [15ULL] [(short)16]))));
    }
}
