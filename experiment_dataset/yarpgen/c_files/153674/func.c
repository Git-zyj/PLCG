/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153674
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
    var_14 = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_7)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                var_15 *= ((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */_Bool) (short)-12393)) ? (((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) (short)12393))))) / (15873258337923346350ULL)));
                arr_5 [i_0 + 3] [i_0] [i_1 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? (min((max((15873258337923346350ULL), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0]) && (((((/* implicit */_Bool) var_1)) || (arr_1 [i_0] [i_1])))))))));
                var_16 = arr_0 [i_1] [i_0 - 1];
            }
        } 
    } 
    var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((((unsigned long long int) (short)12392)) * (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), ((~(var_13))))))));
}
