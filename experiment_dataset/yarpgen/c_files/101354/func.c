/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101354
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = arr_0 [i_0];
        var_17 = arr_1 [i_0];
    }
    var_18 = ((/* implicit */unsigned char) var_16);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) < (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))))), ((unsigned short)65535))))));
    var_20 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2112241407683691273ULL)) ? (((/* implicit */int) (unsigned short)10262)) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_6)))));
}
