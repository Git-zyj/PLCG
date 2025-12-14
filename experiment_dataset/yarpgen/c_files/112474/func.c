/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112474
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
    var_19 = (unsigned char)207;
    var_20 = ((/* implicit */unsigned long long int) min((9223372036854775799LL), (((/* implicit */long long int) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) (~((+(var_6)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
}
