/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17464
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
    var_10 = ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) 7738002065057695777LL)), (var_3))), (((/* implicit */unsigned long long int) ((unsigned short) min((((/* implicit */unsigned int) -866028919)), (2090386138U)))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) max((min((9408019820545551785ULL), (((/* implicit */unsigned long long int) (short)-20628)))), (((/* implicit */unsigned long long int) var_8))));
        var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 + 2]))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (3738469214U) : (var_0))) : (((/* implicit */unsigned int) ((arr_0 [i_0 - 1]) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (2147483647))))));
    }
}
