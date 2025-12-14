/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140606
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
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((var_9), (((/* implicit */int) (signed char)24)))), (((/* implicit */int) ((((/* implicit */unsigned int) 721469975)) < (var_1))))))) && (((/* implicit */_Bool) max((arr_0 [i_0 - 1] [i_1 + 1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))))))));
                var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [7] [i_0]))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) var_0);
}
