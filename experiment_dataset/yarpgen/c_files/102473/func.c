/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102473
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)39844)) - (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) - (((/* implicit */int) (signed char)-52))))) ? (((/* implicit */int) (unsigned short)25688)) : (((/* implicit */int) arr_1 [i_0]))))));
        var_15 ^= ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned short)39848)) * (((/* implicit */int) (short)-8693))))));
    }
    var_16 = ((/* implicit */int) var_13);
}
