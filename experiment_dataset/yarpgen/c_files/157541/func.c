/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157541
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_15 *= ((/* implicit */unsigned int) (-(max((((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_2 [i_0] [i_0]))))), (max((((/* implicit */int) (unsigned char)253)), (var_4)))))));
        arr_3 [i_0] [(signed char)19] = arr_2 [(_Bool)1] [i_0];
        var_16 = ((/* implicit */signed char) arr_1 [(unsigned char)19] [i_0]);
    }
    var_17 = ((/* implicit */long long int) var_4);
}
