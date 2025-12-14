/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11144
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
    var_16 &= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)128))))) || (((/* implicit */_Bool) (unsigned char)127))))) / (((/* implicit */int) (short)-18460))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0] [i_1 - 1])) ? (min((((/* implicit */unsigned int) arr_4 [i_0 - 3] [i_0 - 3] [i_1 + 1])), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_0 - 2] [(short)6] [i_1 + 1]), (arr_4 [i_0 + 2] [i_0 + 2] [i_1 + 1])))))));
                var_17 = ((/* implicit */unsigned long long int) ((short) arr_0 [i_0 + 2] [(short)12]));
            }
        } 
    } 
    var_18 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
}
