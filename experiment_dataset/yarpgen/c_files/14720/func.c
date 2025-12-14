/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14720
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_10 &= ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])));
        var_11 *= ((/* implicit */short) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967290U)) ? (2186994567354540839ULL) : (((/* implicit */unsigned long long int) 845433076U))));
    }
    var_12 = ((/* implicit */unsigned short) var_9);
    var_13 = ((/* implicit */unsigned int) ((unsigned long long int) var_0));
}
