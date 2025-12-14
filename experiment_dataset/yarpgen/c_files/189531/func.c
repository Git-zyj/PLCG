/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189531
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_9);
        var_10 += ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_1 [i_0 + 1])))), (((/* implicit */int) arr_2 [i_0] [i_0]))));
        arr_4 [11ULL] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_0 + 1] [i_0]))));
    }
    var_11 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) >> (((max((var_5), (var_5))) - (229651318))))) ^ ((+(((/* implicit */int) (unsigned char)52))))));
    var_12 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) ((short) var_4)))))));
}
