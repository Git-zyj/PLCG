/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15484
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
    var_20 *= ((/* implicit */_Bool) max((((var_18) / (((/* implicit */int) (short)-27705)))), (((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) -8412472479357209999LL)) & (var_12)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                arr_8 [(short)23] = ((/* implicit */signed char) ((unsigned long long int) min(((~(-3580256653665638142LL))), (((/* implicit */long long int) (!(arr_1 [i_0] [i_0])))))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? ((-(var_14))) : (((/* implicit */long long int) ((/* implicit */int) (short)2317)))))) * ((-(arr_7 [i_1 + 1] [i_1 + 1] [i_0])))));
                arr_9 [13] = -391984524;
            }
        } 
    } 
}
