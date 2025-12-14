/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141678
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 9002195164013324160LL))) ? (((/* implicit */int) min((min((var_0), ((short)18123))), (((short) (unsigned short)43941))))) : (536870911)));
    var_12 = ((/* implicit */signed char) (short)16863);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        arr_4 [i_0 + 3] = ((/* implicit */signed char) var_9);
        arr_5 [16U] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (var_2))));
        arr_6 [18] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (signed char)-64)) >= (((/* implicit */int) var_0)))));
    }
    var_13 &= ((/* implicit */short) ((unsigned int) ((((var_2) >= (((/* implicit */long long int) ((/* implicit */int) (short)29608))))) ? (13008902364818329880ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32758))))));
}
