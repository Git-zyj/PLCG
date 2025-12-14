/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109446
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) max((min((arr_0 [i_0]), (arr_0 [i_0]))), (arr_0 [i_0])));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((short) arr_3 [i_0])))) && (var_9)));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) max((arr_3 [i_0]), (arr_3 [i_0])));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) var_1);
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_3))));
    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) var_10))));
}
