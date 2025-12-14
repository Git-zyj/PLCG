/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121460
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)18135))))) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) var_8))));
    var_18 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned int) var_1))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) max(((short)-18136), ((short)-18113)))), (var_5)));
        arr_2 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned short) arr_1 [i_0]))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-10)) <= (((/* implicit */int) var_15)))))) - (((long long int) arr_0 [i_0]))))));
    }
}
