/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167563
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_3))));
        arr_2 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((7210272544746967386ULL) << (((arr_1 [i_0]) + (6601740630272386864LL)))))) : (((/* implicit */long long int) ((7210272544746967386ULL) << (((((arr_1 [i_0]) - (6601740630272386864LL))) + (147695192911560379LL))))));
    }
    var_15 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(var_9)))), (var_4))))));
}
