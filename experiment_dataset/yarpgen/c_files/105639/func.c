/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105639
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
    var_17 &= ((/* implicit */short) (+(((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)102)) ? (var_14) : (((/* implicit */int) var_4))))) * (((479997674U) / (((/* implicit */unsigned int) 569223391))))))));
    var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_4)) ? (-3265514046279917834LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)87)))))))) && (((/* implicit */_Bool) max((max((2492844730U), (((/* implicit */unsigned int) (short)-1)))), (((((/* implicit */unsigned int) 1927227529)) + (1023U))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
}
