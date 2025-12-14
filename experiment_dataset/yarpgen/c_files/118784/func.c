/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118784
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
    var_15 = ((/* implicit */unsigned short) var_5);
    var_16 = ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        var_17 |= ((/* implicit */short) var_12);
        arr_3 [i_0] = ((/* implicit */unsigned char) var_7);
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = min((((/* implicit */unsigned long long int) min((min((var_0), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8)))))))), (min((var_1), (((/* implicit */unsigned long long int) var_13)))));
        var_18 += ((/* implicit */signed char) var_10);
        arr_8 [i_1] = ((/* implicit */signed char) max((var_10), ((+(((unsigned int) var_9))))));
    }
}
