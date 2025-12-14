/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182190
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
    var_16 = ((/* implicit */unsigned long long int) ((unsigned char) max((-1200521336533496262LL), (7370557485880590905LL))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [8ULL]))))))))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1))))) < ((((~(637715694U))) ^ (arr_1 [i_0 + 1])))));
        var_19 ^= ((/* implicit */signed char) (+(((((/* implicit */long long int) (~(var_13)))) ^ (((((/* implicit */_Bool) 0U)) ? (arr_2 [i_0] [12U]) : (((/* implicit */long long int) var_13))))))));
    }
}
