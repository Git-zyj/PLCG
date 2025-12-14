/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113966
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned int) 14038356566264795ULL);
        arr_3 [i_0] = ((/* implicit */unsigned char) (unsigned short)32612);
    }
    var_11 = ((/* implicit */unsigned int) min((((unsigned long long int) var_0)), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3337092154U)) * (18446744073709551592ULL)))) ? (var_2) : ((~(var_2)))))));
    var_12 = ((/* implicit */short) 1564212997U);
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) var_0)))))));
}
