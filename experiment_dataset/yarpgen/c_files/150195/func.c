/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150195
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
    var_16 |= ((/* implicit */long long int) var_1);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_17 = min((max((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (((unsigned short) (unsigned char)139)))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) (unsigned char)125))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((long long int) ((unsigned char) arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) var_4))))))));
    }
}
