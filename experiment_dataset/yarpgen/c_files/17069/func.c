/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17069
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
    var_12 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 339722215)) ? (((/* implicit */int) (unsigned char)252)) : (var_5)))) ^ (var_11))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)28979)) << (((((/* implicit */int) var_9)) - (49367))))) | (((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_8))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_1 [i_0]))))));
    }
    for (signed char i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) arr_4 [i_1]);
        arr_6 [i_1] = ((/* implicit */long long int) (((!((!(((/* implicit */_Bool) (signed char)118)))))) ? (5855045072194180590ULL) : (((unsigned long long int) ((((/* implicit */_Bool) arr_3 [13])) ? (arr_4 [i_1]) : (arr_4 [3]))))));
        arr_7 [i_1] = ((/* implicit */signed char) arr_3 [i_1]);
    }
}
