/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112396
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
    var_10 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_8) & (((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_2)))))))) ? (var_8) : (((((/* implicit */_Bool) ((unsigned short) 905376819))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)175)), ((unsigned short)16440))))) : (((long long int) var_3))))));
    var_11 = ((/* implicit */long long int) var_7);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) 9223372036854775807LL);
        arr_2 [i_0] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (signed char)8)))) || (((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) (unsigned char)68))))));
    }
}
