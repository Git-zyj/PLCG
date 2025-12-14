/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110064
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 496309958U)) / (-1LL)))), ((+(11649536482939928137ULL)))))));
        arr_2 [i_0] = ((/* implicit */int) ((unsigned long long int) min((-311370206601124163LL), (((/* implicit */long long int) 4294967290U)))));
    }
    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)24576)))) >> (((((long long int) var_0)) - (23899LL)))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (+(842672878U)))) ? (((/* implicit */int) (short)10922)) : (((/* implicit */int) var_0)))) : ((-(var_10)))));
}
