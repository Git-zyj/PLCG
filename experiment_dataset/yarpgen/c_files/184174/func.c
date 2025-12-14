/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184174
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((80308627U), (((/* implicit */unsigned int) (+(((/* implicit */int) ((var_11) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0 + 1]) << (((((unsigned int) arr_1 [i_0 - 1])) - (233U))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_12 += ((/* implicit */long long int) 1791424694U);
        var_13 = ((/* implicit */signed char) arr_0 [i_1]);
    }
    var_14 = max((min((((var_4) + (((/* implicit */unsigned long long int) -4899379690241577642LL)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) var_11)));
}
