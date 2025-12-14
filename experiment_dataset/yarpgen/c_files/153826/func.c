/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153826
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
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_18 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_19 = min((((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_17))) == (arr_1 [i_0] [i_0])))), (arr_0 [i_0]));
    }
    var_20 = ((/* implicit */unsigned char) var_5);
    var_21 = ((/* implicit */int) var_15);
}
