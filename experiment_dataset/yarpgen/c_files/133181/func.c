/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133181
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
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((8384612077955132433ULL), (8384612077955132451ULL)))) ? (8384612077955132452ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (var_1))))) ^ ((-(10062131995754419183ULL)))));
        var_14 = ((/* implicit */signed char) ((int) ((((/* implicit */int) arr_2 [i_0 + 1])) != (((/* implicit */int) arr_3 [i_0])))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2]))) : (((((/* implicit */_Bool) 63)) ? (((/* implicit */unsigned long long int) 9126708400595236079LL)) : (10062131995754419142ULL)))));
    }
}
