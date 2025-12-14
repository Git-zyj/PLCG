/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14459
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
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-87)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26320))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (~(min((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) (signed char)-89))))), ((~(((/* implicit */int) arr_2 [(short)4]))))))));
        var_18 = ((/* implicit */signed char) max((min((((/* implicit */int) arr_0 [i_0] [i_0])), (((((/* implicit */int) (short)-835)) - (((/* implicit */int) var_8)))))), (((/* implicit */int) ((short) arr_3 [i_0 + 1] [i_0 - 1])))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (short)12765)) : (((/* implicit */int) (short)-32402))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-53)) & (((/* implicit */int) (short)32402)))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) var_8);
        var_21 *= ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) arr_5 [(unsigned short)4]));
    }
}
