/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13909
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((/* implicit */long long int) (_Bool)1)), (((((_Bool) (_Bool)1)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))) : (var_14))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] = ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)));
                    arr_11 [i_0 - 2] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 + 4] [i_0 + 4]))) - (((unsigned int) (short)24272))))));
                    arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133))) + (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) + (1942691344U)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) var_15)) ? ((~(var_15))) : ((-(((/* implicit */int) (unsigned char)246)))))) * (((/* implicit */int) (_Bool)1))));
}
