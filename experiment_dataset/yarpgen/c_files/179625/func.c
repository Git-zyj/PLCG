/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179625
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((-5794592065360674174LL) + (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))))), (var_8)));
        arr_3 [i_0] [(unsigned short)9] = ((/* implicit */short) 4294967291U);
    }
    for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        arr_6 [(unsigned char)5] = ((/* implicit */unsigned char) arr_4 [i_1 + 1]);
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) max((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) (short)19838)) ? (((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1]))) : (0U))) : (((/* implicit */unsigned int) max((2147418112), (((/* implicit */int) (unsigned char)110))))))))))));
    }
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) 876374319)) > (9223372036854775807LL)))) * (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_10)))))))) ? (((((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_3)))) - (((/* implicit */int) (unsigned short)10617)))) : ((-(((/* implicit */int) ((-876374319) >= (((/* implicit */int) var_0))))))));
}
