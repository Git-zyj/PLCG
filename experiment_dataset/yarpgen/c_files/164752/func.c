/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164752
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((unsigned long long int) 516096ULL))))) || (((/* implicit */_Bool) (-(var_8))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) 516096ULL);
        arr_2 [i_0 - 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))));
        var_13 = ((/* implicit */_Bool) (signed char)-115);
        arr_3 [i_0 - 2] [i_0] = ((/* implicit */short) (-(((9223372036854775807ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
    }
}
