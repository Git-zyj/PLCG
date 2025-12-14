/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175791
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_10 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) ((((arr_1 [(_Bool)1]) << (((arr_0 [i_0]) - (3355725719207746770LL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17262))))))));
        var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_9)) : (2465230124U)))))), ((~(max((((/* implicit */long long int) (short)4456)), (9223372036854775789LL))))))))));
    }
    var_12 = ((/* implicit */signed char) var_1);
}
