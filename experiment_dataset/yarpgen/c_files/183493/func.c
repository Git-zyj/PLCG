/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183493
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
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_19 *= ((/* implicit */unsigned int) max((max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) + (arr_1 [i_0]))), (((/* implicit */long long int) arr_6 [i_0 - 2] [i_0 - 2] [i_0 + 1])))), (((/* implicit */long long int) ((short) arr_5 [i_0 + 1])))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) -1)))))) ? (((/* implicit */int) max((arr_3 [i_0 - 1] [i_0 - 2] [i_0 + 2]), (arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 2])))) : (((((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) arr_2 [i_0] [(unsigned short)4])) : (((/* implicit */int) (unsigned short)57344)))) + ((+(-1))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)66)) * (((/* implicit */int) var_17))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8192)) - (((/* implicit */int) var_11))))) : (min((((/* implicit */long long int) var_11)), (var_9))))), (((/* implicit */long long int) var_15))));
}
