/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168115
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
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_7))));
    var_18 = ((/* implicit */int) var_14);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (var_12)));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) (signed char)127)))))) ? (((((/* implicit */_Bool) (short)32060)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((short) ((int) var_2)))));
        arr_3 [i_0 + 1] = ((/* implicit */int) var_4);
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) var_11);
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_2))))))));
        arr_7 [i_1] = ((unsigned long long int) (unsigned char)71);
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) + (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)184)) ^ (((/* implicit */int) arr_4 [i_1]))))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)71)) < (var_13))))) & ((((~(((/* implicit */int) (unsigned char)192)))) & (((/* implicit */int) ((unsigned char) arr_5 [i_1])))))));
    }
}
