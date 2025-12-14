/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174728
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [4ULL] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ? ((+(4104583652U))) : (((/* implicit */unsigned int) -174672387)))))));
        var_18 = ((/* implicit */unsigned long long int) (+((~(arr_1 [i_0] [i_0])))));
    }
    var_19 = ((/* implicit */long long int) min(((_Bool)1), ((((-(var_15))) >= (((/* implicit */long long int) var_14))))));
}
