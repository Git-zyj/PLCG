/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167742
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
    var_10 = ((/* implicit */unsigned int) max(((+(((((/* implicit */_Bool) var_7)) ? (-7445756771804265086LL) : (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) var_9))));
    var_11 = ((/* implicit */unsigned char) min(((_Bool)1), ((!(((/* implicit */_Bool) 1588295623))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) -7445756771804265086LL)) ? (1017322996703596616ULL) : (((/* implicit */unsigned long long int) 1588295623)))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
    }
}
