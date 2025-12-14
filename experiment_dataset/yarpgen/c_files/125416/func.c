/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125416
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
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (+(arr_0 [i_0 + 1] [i_0 + 2])));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((signed char) ((short) 15246290225384545190ULL))))));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_15))) >= (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 0U))))), (var_8)))));
}
