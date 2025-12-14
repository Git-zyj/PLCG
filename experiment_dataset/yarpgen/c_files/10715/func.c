/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10715
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
    var_19 = ((/* implicit */int) var_6);
    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) var_18))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((signed char) arr_1 [i_0] [i_0]));
        var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])));
        arr_2 [(unsigned short)13] [(unsigned short)13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    }
    for (unsigned short i_1 = 3; i_1 < 16; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((((/* implicit */_Bool) (+(-8)))) ? (((((/* implicit */int) arr_4 [i_1])) << (((((((/* implicit */int) arr_3 [8] [i_1 + 1])) + (85))) - (18))))) : (((/* implicit */int) arr_3 [i_1] [i_1 + 1])));
        arr_6 [i_1] = max((((/* implicit */long long int) var_4)), (((max((var_16), (((/* implicit */long long int) var_4)))) << (((((unsigned int) var_3)) - (3331496115U))))));
    }
}
