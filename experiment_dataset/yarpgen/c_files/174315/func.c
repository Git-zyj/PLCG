/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174315
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
    for (signed char i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0 - 4] [i_0 - 4] [i_0 - 4]))))) ? (((((/* implicit */int) arr_5 [i_1] [i_0 - 4] [i_0 - 4])) ^ (((/* implicit */int) arr_5 [i_1] [i_0 - 4] [i_0 - 4])))) : ((~(((/* implicit */int) arr_5 [i_0 - 4] [i_0 - 4] [i_0 - 4])))));
                var_21 = ((/* implicit */unsigned short) ((short) (+(((((/* implicit */_Bool) -973757541)) ? (((/* implicit */int) (signed char)32)) : (arr_0 [12] [12]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))) % (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_8))))) << (((((/* implicit */int) var_10)) + (18149))))))));
    var_23 = ((/* implicit */unsigned char) var_8);
    var_24 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)60)) * (((/* implicit */int) (signed char)87))));
}
