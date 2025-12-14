/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127201
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) max((var_17), (((/* implicit */unsigned short) (signed char)15)))))));
                arr_7 [i_1] = ((/* implicit */unsigned short) max((((max((arr_6 [i_0] [i_1]), (var_9))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))), ((+(((var_14) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (+(((var_11) ^ (var_11)))));
    var_20 = ((/* implicit */unsigned char) ((4762469974451227294LL) >> ((((~(var_13))) + (1018156290)))));
}
