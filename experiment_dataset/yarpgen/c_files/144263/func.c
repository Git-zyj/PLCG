/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144263
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_1 [i_0] [i_0]))) != (arr_1 [i_0] [6]))))));
        var_16 += ((/* implicit */signed char) (~(((/* implicit */int) ((4294967292U) != (4294967292U))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */unsigned long long int) 8U)) : (12393631600915335519ULL)));
    }
    var_17 = ((/* implicit */unsigned short) (~(var_6)));
}
