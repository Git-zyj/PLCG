/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171577
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
    var_13 = ((/* implicit */unsigned char) 4294902346U);
    var_14 = ((/* implicit */short) max((var_14), (var_12)));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (min((3211546375U), (((/* implicit */unsigned int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (3915063342U)))), (var_3))))) : (var_11)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */int) min((((/* implicit */unsigned int) var_3)), (arr_4 [i_1])));
                arr_5 [i_0] = ((/* implicit */long long int) max(((~(arr_2 [i_0 + 1]))), (((min((((/* implicit */unsigned int) (short)10845)), (2673088866U))) + (max((arr_2 [i_0]), (((/* implicit */unsigned int) (_Bool)1))))))));
            }
        } 
    } 
    var_17 -= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_2)), (max((max((var_9), (((/* implicit */unsigned long long int) var_6)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (14631676173401214693ULL)))))));
}
