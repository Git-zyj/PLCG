/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137430
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */signed char) ((short) (-(((/* implicit */int) ((unsigned short) arr_1 [i_0]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (arr_1 [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8469)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-10731))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-5960)), ((unsigned short)57064)))) : (((/* implicit */int) (_Bool)1))))));
    }
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (short)1038))));
}
