/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187708
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (signed char)116))));
    var_12 = ((/* implicit */unsigned long long int) var_7);
    var_13 = ((/* implicit */int) ((long long int) max((((/* implicit */unsigned int) var_1)), (((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */short) arr_0 [i_0] [i_0]);
        var_15 = ((/* implicit */unsigned short) ((signed char) min((((((/* implicit */int) var_2)) / (((/* implicit */int) (short)-3123)))), (((/* implicit */int) min(((signed char)82), ((signed char)82)))))));
    }
}
