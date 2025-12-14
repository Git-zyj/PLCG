/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180669
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((arr_0 [i_0] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) (short)12553)))))))), (((((/* implicit */_Bool) (short)-12571)) ? (-2900381520410775126LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-12534)))))));
        var_11 = ((/* implicit */long long int) ((min((((unsigned int) var_10)), (((unsigned int) arr_2 [i_0])))) ^ (((((/* implicit */unsigned int) (-(((/* implicit */int) (short)12553))))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [(unsigned short)12]))) ^ (arr_0 [0ULL] [0ULL])))))));
    }
    var_12 = ((/* implicit */_Bool) var_6);
}
