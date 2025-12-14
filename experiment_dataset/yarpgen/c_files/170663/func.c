/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170663
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((-(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99)))));
    var_19 = ((/* implicit */short) var_1);
    var_20 = ((/* implicit */signed char) (-(3764503188U)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((int) (-(((/* implicit */int) arr_0 [i_0])))));
        var_21 |= ((/* implicit */unsigned char) arr_1 [i_0] [(unsigned char)17]);
        var_22 *= ((((/* implicit */_Bool) 1400494536256695275ULL)) && (((/* implicit */_Bool) (unsigned char)63)));
        var_23 = var_4;
    }
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) arr_3 [i_1]);
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (unsigned short)7799)) - (((/* implicit */int) (_Bool)1))))));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))) | (549755813887LL))) : (max((-4611686018427387904LL), (((/* implicit */long long int) (_Bool)0))))));
    }
}
