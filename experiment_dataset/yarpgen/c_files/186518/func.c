/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186518
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) 4294967294U);
        var_11 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~((~(var_5)))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) & (16783045363884346249ULL)))));
        var_12 = ((/* implicit */int) var_9);
        var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_4))) || (arr_1 [i_0] [i_0])));
    }
    var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) <= (max((((/* implicit */unsigned long long int) (+(var_4)))), (var_10)))));
}
