/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181477
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [(unsigned char)14] = ((/* implicit */long long int) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) var_6))));
        arr_3 [9LL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 12539092235898160667ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)248))));
    }
    var_16 = ((/* implicit */long long int) 16382U);
}
