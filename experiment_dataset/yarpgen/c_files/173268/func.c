/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173268
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
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1])))) + (2147483647))) << (((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))) - (1)))));
        var_11 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (arr_0 [(signed char)7] [i_0 + 1]) : (arr_0 [i_0] [i_0 + 2]))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-22921)))))));
    }
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)22921)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) max((-970743565), (((/* implicit */int) (short)-22922))))) >= ((~(3208113360U))))))) : (var_3)));
    var_13 = ((/* implicit */unsigned long long int) (_Bool)1);
}
