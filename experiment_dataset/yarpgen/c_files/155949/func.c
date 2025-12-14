/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155949
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_1] = (!(((/* implicit */_Bool) var_8)));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (var_10))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)17743)))))))) - (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_1)) : (var_15))), (1626908672167344543ULL)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_10);
}
