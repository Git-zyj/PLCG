/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181329
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-30484)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_11) : (var_11))))))))))));
    var_13 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))) ? (((unsigned long long int) var_0)) : (var_8))), (var_0)));
    var_14 &= ((short) 30791081U);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_15 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0 - 3]))) >= (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (3134597482044462620ULL)))));
        var_16 = ((/* implicit */unsigned int) (-(arr_1 [i_0 - 3])));
    }
}
