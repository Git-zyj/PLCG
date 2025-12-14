/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100971
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 -= arr_2 [i_0] [i_1] [i_2];
                    arr_6 [i_0 - 1] [i_1] [i_0 - 1] &= ((/* implicit */long long int) ((unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 - 1] [i_1] [i_2])) >> (((arr_5 [i_1] [i_1] [i_1]) - (17284647594974511693ULL)))))), (((var_5) ? (var_11) : (((/* implicit */long long int) -21)))))));
                    var_13 = ((/* implicit */int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((-6922149867905503608LL) * (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) + (((/* implicit */int) var_2))))))) + (6922149867905503645LL)))));
                    arr_7 [i_0] [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) ((unsigned long long int) ((((unsigned long long int) 17ULL)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [(_Bool)1] [i_2]))))));
                }
            } 
        } 
    } 
    var_14 = ((((/* implicit */int) var_4)) << (((/* implicit */int) var_3)));
}
