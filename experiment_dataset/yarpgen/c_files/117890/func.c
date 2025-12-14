/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117890
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) var_6);
        var_12 = ((/* implicit */signed char) arr_1 [i_0]);
    }
    var_13 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) var_4)), (min((((/* implicit */unsigned long long int) (-2147483647 - 1))), (var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3410487227U)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (unsigned short)0))))) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 49156902583449463LL)) ? (var_0) : (((/* implicit */int) var_6))))))))));
}
