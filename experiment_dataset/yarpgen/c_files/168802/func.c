/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168802
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_7))));
    var_13 ^= ((/* implicit */long long int) var_6);
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_8)))) << (((var_2) - (1306069674)))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_0)) : (var_1))) + (((/* implicit */unsigned long long int) var_5))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */unsigned int) min((299402299102062232LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])) && (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])))))));
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (~(arr_2 [i_0]))))));
        var_16 ^= ((/* implicit */unsigned int) ((unsigned short) arr_2 [i_0 - 1]));
        var_17 = ((/* implicit */long long int) max((var_17), ((+(((max((((/* implicit */long long int) var_11)), (var_4))) / (((-299402299102062233LL) - (-6395134333116217063LL)))))))));
    }
}
