/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141752
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
    var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)32767)))) ? (((unsigned long long int) (short)(-32767 - 1))) : (((/* implicit */unsigned long long int) var_9))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [17LL] = ((/* implicit */unsigned long long int) arr_0 [i_0] [(short)3]);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0]))))), ((~(((/* implicit */int) arr_0 [i_0] [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)9] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (221497312U)))))))));
    }
    var_20 = ((/* implicit */short) (+((-(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_2)) : (var_9)))))));
}
