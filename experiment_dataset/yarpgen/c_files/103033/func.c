/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103033
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
    var_15 = ((((/* implicit */_Bool) 9255617916152831312ULL)) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) var_11))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_17 += ((/* implicit */int) (unsigned char)255);
        arr_3 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) ? (arr_1 [i_0] [i_0]) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))) : (arr_1 [i_0] [i_0])))));
    }
}
