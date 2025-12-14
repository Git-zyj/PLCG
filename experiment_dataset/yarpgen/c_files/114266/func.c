/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114266
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
    var_12 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) 1994699808U);
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [(short)9] [i_0])), (arr_1 [i_0] [12LL])))) ^ (((/* implicit */int) var_9))))))))));
    }
}
