/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127951
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_4 [i_0] [4ULL] &= ((/* implicit */signed char) arr_0 [(unsigned char)6]);
        arr_5 [i_0] [i_0] = ((unsigned char) var_10);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        var_18 &= ((/* implicit */unsigned short) var_6);
        var_19 ^= ((/* implicit */short) 974614809);
    }
    for (signed char i_2 = 1; i_2 < 22; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) var_12);
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) ((unsigned short) ((10491610756745864518ULL) >> (((((/* implicit */int) (signed char)-93)) + (142))))));
        arr_13 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (max((2137545743U), (((/* implicit */unsigned int) arr_3 [i_2]))))))) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) max((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_1 [(unsigned char)18] [i_2])))), (var_1))))));
    }
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_17)) / (((/* implicit */int) var_12)))) * (((/* implicit */int) min((((/* implicit */short) var_6)), (var_2)))))))));
    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) ((unsigned short) (signed char)48))))));
    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (short)22293))));
}
