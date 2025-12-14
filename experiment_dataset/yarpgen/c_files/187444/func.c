/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187444
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
    var_14 *= ((/* implicit */int) ((unsigned int) (~(min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        var_15 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) arr_2 [(short)8])))));
        arr_3 [(unsigned short)0] |= ((((/* implicit */_Bool) min((((((/* implicit */int) (signed char)20)) - (((/* implicit */int) (signed char)-20)))), ((+(1147324752)))))) || (((/* implicit */_Bool) max((((/* implicit */int) arr_1 [10U] [10U])), ((-(((/* implicit */int) (_Bool)1))))))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0 + 2] [i_0]))) ? (((/* implicit */int) ((1200654032U) <= (1200654032U)))) : (((int) (signed char)96))));
    }
    var_17 = ((/* implicit */int) var_1);
}
