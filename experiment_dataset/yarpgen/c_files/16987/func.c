/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16987
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (27U) : (((/* implicit */unsigned int) var_1))));
        arr_4 [4LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1292018875976822767LL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_2 [i_0]))));
    }
    var_19 = ((/* implicit */unsigned char) var_16);
    var_20 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */long long int) ((var_13) && (max((var_6), (var_13))))))));
    var_21 = ((/* implicit */int) 4294967268U);
    var_22 = ((/* implicit */unsigned long long int) (!(((_Bool) 18446744073709551615ULL))));
}
