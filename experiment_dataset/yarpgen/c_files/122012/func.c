/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122012
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
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_1)), (((min((((/* implicit */unsigned long long int) var_7)), (var_11))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_15)))))))));
    var_17 = ((/* implicit */unsigned long long int) (((~(min((((/* implicit */unsigned long long int) var_5)), (var_14))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)93)) < (811923129)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) (+(((arr_4 [i_0] [i_1]) - (arr_4 [i_1] [i_0])))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1]))))) / (((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) * (arr_3 [i_0] [i_1] [i_1]))) + (min((-1LL), (((/* implicit */long long int) (signed char)95))))))));
                var_20 = ((/* implicit */unsigned char) (~(var_14)));
            }
        } 
    } 
}
