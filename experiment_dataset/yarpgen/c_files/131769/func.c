/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131769
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
    var_16 ^= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((var_6) >> (((((/* implicit */int) var_2)) - (118))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(short)15] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) var_14)))))));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) < (var_0))) || (((/* implicit */_Bool) var_3)))))) == (var_13)));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) min((var_0), ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (var_13)))))));
}
