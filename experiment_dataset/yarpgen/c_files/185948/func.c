/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185948
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
    var_19 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? ((-(((/* implicit */int) var_5)))) : (((2147483647) << (((7507470687763657764LL) - (7507470687763657764LL)))))))) ^ (((((((/* implicit */int) (unsigned short)64721)) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-25631)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32003))) : (var_9)))) : (min((var_18), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (_Bool)1))));
        var_21 = ((/* implicit */signed char) (-(arr_0 [i_0])));
        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
}
