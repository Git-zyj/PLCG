/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163476
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
    var_16 = ((/* implicit */int) var_2);
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (short)18766)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(signed char)10]))) : (19ULL))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)65532)) && (((/* implicit */_Bool) 1ULL)))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) arr_2 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((max((18446744073709551614ULL), (5ULL))) & (((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) + (min(((~(5ULL))), (2305843009213693952ULL)))));
    }
}
