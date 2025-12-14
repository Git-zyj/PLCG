/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107738
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
    var_12 = ((/* implicit */short) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_13 -= ((/* implicit */_Bool) arr_1 [(short)9] [i_0]);
        var_14 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) 710784416)) : (7778977113016703387ULL))), (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) >= (arr_2 [i_0] [i_0])))), (arr_2 [i_0] [i_0])))));
    }
}
