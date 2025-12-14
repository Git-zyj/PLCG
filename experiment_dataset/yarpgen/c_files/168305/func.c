/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168305
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) var_0))));
    var_20 = ((/* implicit */short) var_14);
    var_21 = ((/* implicit */signed char) var_4);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_22 -= (~(((/* implicit */int) (!(arr_0 [i_0] [i_0])))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) ((arr_1 [14U]) <= (((/* implicit */int) var_10))))))) * ((~(((/* implicit */int) arr_0 [i_0] [i_0])))))))));
    }
}
