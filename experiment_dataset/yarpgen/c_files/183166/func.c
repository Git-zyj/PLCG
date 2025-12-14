/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183166
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
    var_17 = ((/* implicit */int) var_9);
    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */int) (signed char)19))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (437452059)))) : (var_0)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (4194303ULL))) <= (((((/* implicit */_Bool) (unsigned short)31739)) ? (4194303ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19762)))))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_1 [i_0]))));
    }
}
