/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160794
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
    var_15 = ((/* implicit */_Bool) 2010158569U);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_16 &= ((/* implicit */unsigned int) (!((_Bool)0)));
        arr_3 [i_0] = ((/* implicit */short) ((long long int) max((((((/* implicit */_Bool) (short)-15320)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-8164661395343076037LL))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) : (arr_0 [i_0] [i_0]))))));
    }
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (var_0) : (min((((((/* implicit */long long int) ((/* implicit */int) var_8))) + (var_7))), (((var_9) & (var_2))))));
}
