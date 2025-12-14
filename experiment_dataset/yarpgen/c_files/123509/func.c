/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123509
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
    var_12 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = (+(((((/* implicit */int) min(((short)24678), ((short)-28905)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (short)-28893))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned char) var_6))), (3733510294U)));
        var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0 - 2])))) - (((/* implicit */int) arr_1 [i_0 + 1]))));
    }
}
