/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116284
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_20 += ((/* implicit */int) ((signed char) ((_Bool) (_Bool)1)));
        var_21 ^= ((unsigned long long int) ((((((/* implicit */int) arr_0 [(_Bool)1] [i_0 + 2])) + (2147483647))) << (((var_4) - (15720781735886772533ULL)))));
        var_22 = ((/* implicit */_Bool) (((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-59))))))) + ((~(((/* implicit */int) arr_0 [18ULL] [i_0 - 1]))))));
    }
    var_23 ^= ((/* implicit */int) ((_Bool) (((~(((/* implicit */int) var_18)))) == ((+(((/* implicit */int) (signed char)0)))))));
}
