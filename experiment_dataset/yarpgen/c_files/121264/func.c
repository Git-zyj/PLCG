/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121264
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
    var_13 *= ((/* implicit */short) var_4);
    var_14 = ((/* implicit */short) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_4 [(short)7] = ((/* implicit */short) (~(arr_2 [i_0 - 1])));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_1 [i_0 - 1]))));
        var_16 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 + 3]))));
    }
    for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        arr_8 [(short)1] [i_1] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) -258557673))));
        arr_9 [i_1 + 1] = ((/* implicit */short) 8355840);
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_5 [i_1 + 1]))));
    }
}
