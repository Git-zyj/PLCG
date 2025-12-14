/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154191
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
    var_13 = ((/* implicit */long long int) ((unsigned long long int) var_6));
    var_14 = ((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) -2857059159404375432LL)) ? (2857059159404375432LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((signed char) 2857059159404375432LL));
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((long long int) arr_0 [i_0 - 3])))));
        var_17 *= ((/* implicit */int) ((arr_0 [i_0 + 2]) >= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 2])))));
    }
}
