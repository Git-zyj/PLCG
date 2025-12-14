/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143361
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_13))));
    var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_10), (((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_5))))))))));
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)9264)) < (((/* implicit */int) (unsigned char)6)))))) & ((+(1992898532U)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) var_7)), ((((!(((/* implicit */_Bool) var_15)))) ? ((-(((/* implicit */int) (unsigned short)46136)))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_1 - 1])) : (((/* implicit */int) var_8))))))));
                var_21 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (unsigned short)9268))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1])))))));
            }
        } 
    } 
}
