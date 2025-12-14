/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106436
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
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_0))));
    var_18 = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) max((var_16), (var_13))))), (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3)))) + ((-(((/* implicit */int) var_16))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned int) (short)20707))), (arr_6 [1U] [i_1] [i_0])));
                    var_19 = ((/* implicit */short) ((((/* implicit */int) ((short) ((8021537793635146899LL) - (var_11))))) - ((-(((/* implicit */int) arr_0 [i_0 + 1]))))));
                    var_20 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0 - 2] [7] [i_0 - 2])) >= (((/* implicit */int) var_16))))) * (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_2] [i_0 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                    var_21 = ((/* implicit */int) ((unsigned char) (short)20707));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_14);
}
