/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155006
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) 2147483647)))))));
        var_19 = ((/* implicit */signed char) ((short) ((arr_1 [i_0]) ? (2804075616U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))));
        var_20 = ((/* implicit */long long int) arr_1 [i_0]);
    }
    var_21 = ((/* implicit */short) max((((var_2) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) : (15922071739204904686ULL))) : (((/* implicit */unsigned long long int) 1490891679U)))), (((/* implicit */unsigned long long int) 4294967295U))));
}
