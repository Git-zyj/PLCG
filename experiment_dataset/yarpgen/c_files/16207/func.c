/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16207
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) ((var_4) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-20587))))) : (min((11831972618879168299ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
        var_20 = ((/* implicit */unsigned int) (short)0);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) var_18))));
        arr_6 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) 1477262685)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) / (max((17ULL), (((/* implicit */unsigned long long int) -1477262706))))))));
    }
    var_22 = ((signed char) (short)20561);
    var_23 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_3))))) != (max((var_17), (var_17)))));
    var_24 = var_4;
}
