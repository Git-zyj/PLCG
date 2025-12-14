/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15900
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
    var_12 = ((/* implicit */int) ((unsigned int) (-(max((((/* implicit */unsigned int) (unsigned short)28672)), (4267836061U))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_13 += ((/* implicit */signed char) (unsigned short)65535);
        arr_2 [i_0] &= ((/* implicit */int) ((unsigned short) (unsigned short)28676));
    }
    var_14 = ((/* implicit */unsigned int) var_1);
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)28686)) ? (((var_2) ? (1920068622U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) max(((unsigned short)13), (((/* implicit */unsigned short) var_7))))))))));
}
