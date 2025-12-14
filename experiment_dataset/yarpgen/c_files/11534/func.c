/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11534
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
    var_13 = ((/* implicit */unsigned int) min((var_13), ((~(((unsigned int) min((((/* implicit */unsigned int) (signed char)-126)), (4294967295U))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_14 ^= ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) (unsigned char)255)), (max((((/* implicit */unsigned long long int) (signed char)125)), (5889354648926094255ULL)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (!(((_Bool) arr_0 [i_0] [i_0 - 2]))));
        var_15 += ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)86))))), ((~(((/* implicit */int) arr_1 [i_0 + 1]))))));
    }
}
