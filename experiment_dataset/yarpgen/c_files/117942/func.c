/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117942
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) max((((((/* implicit */_Bool) ((long long int) var_12))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)63)), (var_7))))) : (min((((/* implicit */long long int) var_12)), (8589934591LL))))), (((/* implicit */long long int) ((_Bool) var_13))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((max((arr_1 [i_0]), (-8589934592LL))) & ((-(arr_1 [i_0]))))))));
        var_22 = ((/* implicit */int) max((70368744177663ULL), (18446744073709551615ULL)));
        var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))));
    }
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) min(((unsigned char)255), ((unsigned char)12)))) ? (((/* implicit */int) (unsigned char)255)) : (var_2)))))));
}
