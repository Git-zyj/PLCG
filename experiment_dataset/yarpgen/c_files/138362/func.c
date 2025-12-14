/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138362
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
    var_20 += ((/* implicit */unsigned short) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 6; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3111415339U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (1183551956U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) var_15)))))) : (((((/* implicit */_Bool) var_11)) ? (arr_0 [5ULL]) : (((/* implicit */long long int) -637075776))))));
        var_22 = ((/* implicit */signed char) (!((_Bool)1)));
        var_23 = (+(((/* implicit */int) ((arr_2 [i_0 + 2] [i_0 + 3]) == (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))));
        arr_3 [i_0 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 + 3] [2LL])) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
    }
}
