/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151587
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((signed char) arr_2 [i_0] [i_0]);
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (-(((long long int) (unsigned short)53200)))))));
    }
    var_14 &= ((/* implicit */_Bool) -2088736691599317465LL);
    var_15 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) 3542371056U)));
    var_16 = ((/* implicit */long long int) min((((/* implicit */signed char) var_5)), (var_10)));
}
