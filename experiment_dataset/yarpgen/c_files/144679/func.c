/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144679
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
    var_16 = ((/* implicit */short) (((((~(((/* implicit */int) var_7)))) + (2147483647))) >> (((/* implicit */int) (!(((var_1) == (((/* implicit */int) (short)22765)))))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_9))))))) % ((~((+(((/* implicit */int) var_7))))))));
    var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_12)))) != (var_3)))) >> (((((/* implicit */int) var_11)) + (7849)))));
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((var_9) & (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_0))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = (~(((4233067140U) + (((/* implicit */unsigned int) arr_0 [i_0 - 3])))));
        arr_3 [i_0] = (((-((~(((/* implicit */int) arr_1 [(short)14])))))) - ((+(((/* implicit */int) (short)-903)))));
    }
}
