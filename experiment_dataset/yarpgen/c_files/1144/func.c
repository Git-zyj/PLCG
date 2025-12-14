/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1144
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
    var_16 = ((/* implicit */int) var_11);
    var_17 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)35977)), (1723949265428348590LL)))) ? (var_6) : (((/* implicit */unsigned long long int) -1LL)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
        var_18 = ((/* implicit */unsigned long long int) ((int) arr_0 [i_0 - 1] [i_0]));
        arr_3 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2]))));
    }
}
