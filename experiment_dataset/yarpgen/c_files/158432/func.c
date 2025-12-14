/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158432
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned char)103)) ? (1316353665487649616ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_17) < (((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_0)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned char) max((var_19), (((unsigned char) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) var_1)))))))));
                arr_6 [i_1] = ((/* implicit */_Bool) arr_0 [i_0] [i_1]);
            }
        } 
    } 
}
