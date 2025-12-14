/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138919
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
    var_15 = ((/* implicit */unsigned short) min((var_3), (var_4)));
    var_16 = ((/* implicit */unsigned char) 13594758269641118053ULL);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((max((min((((/* implicit */unsigned long long int) (short)-23502)), (13594758269641118053ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) arr_0 [i_1]))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23502)))))))));
                arr_6 [i_0] [2] [i_1] = ((/* implicit */unsigned int) ((long long int) var_14));
            }
        } 
    } 
}
