/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123528
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_10 *= ((/* implicit */short) 0U);
        arr_4 [i_0] = ((/* implicit */long long int) ((((_Bool) (_Bool)0)) && (((/* implicit */_Bool) arr_3 [i_0]))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)(-32767 - 1)))));
    }
    var_11 ^= ((((/* implicit */int) var_2)) & (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_3))))))));
    var_12 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (((((/* implicit */_Bool) var_4)) ? (min((4454104831389344514ULL), (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
}
