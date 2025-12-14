/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151328
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15415)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197))) : ((+(0LL)))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)118)) / (((((/* implicit */int) (unsigned short)47010)) << (((1127113491101278445LL) - (1127113491101278435LL)))))));
    }
    for (int i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) 3217292454924021068ULL)) ? (((/* implicit */int) (unsigned short)61049)) : (-242713644))), ((-(arr_6 [i_1] [i_1 - 1])))));
        arr_8 [i_1] [i_1 + 1] = ((/* implicit */unsigned int) 5740429329438660331LL);
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(arr_6 [i_1 + 3] [i_1 + 2])))) + (((unsigned long long int) arr_6 [i_1 + 2] [i_1 - 1])))))));
    }
    var_22 = var_16;
    var_23 = var_19;
}
