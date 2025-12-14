/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112992
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
    var_12 += ((/* implicit */int) ((unsigned short) (((~(((/* implicit */int) var_8)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_13 -= ((/* implicit */unsigned long long int) 2022696309U);
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_2 [i_0])))) + (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2022696309U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 - 1])))))))));
    }
}
