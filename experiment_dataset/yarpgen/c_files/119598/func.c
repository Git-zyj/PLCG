/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119598
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-1)), ((unsigned short)4626))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) (short)-1)))))))) | (((((/* implicit */_Bool) ((signed char) var_6))) ? ((+(var_3))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_4 [(unsigned char)2] [i_0] |= ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_16 ^= ((/* implicit */short) ((var_12) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0] [i_0]) >= (arr_2 [(unsigned char)11])))))));
        arr_5 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned short) ((long long int) (+(((/* implicit */int) (short)1)))));
    }
}
