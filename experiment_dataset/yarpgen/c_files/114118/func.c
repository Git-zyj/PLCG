/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114118
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
    var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (var_3))))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65514))) ^ ((-(var_6)))))) : (((((/* implicit */_Bool) var_1)) ? ((~(140737488355327LL))) : (((/* implicit */long long int) var_6))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */short) ((signed char) ((unsigned long long int) (short)2047)));
        arr_4 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((short) arr_0 [i_0]))), (4294967295U)));
    }
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(3709625660745296296ULL)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
}
