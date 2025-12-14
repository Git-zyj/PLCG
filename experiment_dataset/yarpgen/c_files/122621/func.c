/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122621
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)96)) >> (((arr_1 [i_0]) + (827222559))))))) + (((/* implicit */int) (short)26256)));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) >> (((arr_1 [i_0]) + (827222555)))));
        arr_2 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        var_18 = ((/* implicit */_Bool) ((arr_1 [i_0]) ^ (((/* implicit */int) ((short) arr_0 [i_0] [i_0])))));
    }
    var_19 |= ((/* implicit */int) var_7);
}
