/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160919
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((7696581394432ULL), (((/* implicit */unsigned long long int) var_2))))) ? (((((/* implicit */_Bool) var_6)) ? (7696581394440ULL) : (7696581394410ULL))) : (((/* implicit */unsigned long long int) var_0))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) | (7696581394440ULL)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((var_8) ? (var_3) : (((/* implicit */unsigned long long int) var_2)))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((int) var_6));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) 18446736377128157186ULL);
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7696581394429ULL)) && (((/* implicit */_Bool) (unsigned char)20))));
    }
}
