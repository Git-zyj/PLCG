/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106598
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
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((((/* implicit */int) (unsigned short)26)) & (((/* implicit */int) var_17))))));
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (unsigned short)6))));
    }
    var_23 ^= ((/* implicit */long long int) ((((/* implicit */int) var_13)) << (((((/* implicit */int) ((unsigned short) var_2))) - (37004)))));
    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) var_16)) > (((/* implicit */int) (unsigned short)28915)))))));
}
