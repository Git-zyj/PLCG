/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162850
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_0]), (((arr_1 [i_0 - 2]) << (((/* implicit */int) (_Bool)1))))))) ? ((+((((_Bool)1) ? (((/* implicit */int) (short)-25)) : (((/* implicit */int) var_6)))))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (short)25)))))))));
        arr_3 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
    }
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)137))))) > (var_2)));
    var_12 &= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-40)) >= (((/* implicit */int) (_Bool)1))));
    var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) / (var_1))))))) != (min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) var_6))))));
}
