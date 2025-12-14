/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157938
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
    var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1358087694)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_14)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0))))) : (((unsigned int) (unsigned short)8769)))), (var_10)));
    var_18 = ((/* implicit */signed char) var_0);
    var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 1358087677)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (min((((/* implicit */unsigned int) var_9)), (var_3)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((((/* implicit */int) var_8)) + (-1358087688))) - (((/* implicit */int) ((arr_0 [i_0 + 1]) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 0))))))))))));
                var_21 = ((/* implicit */unsigned int) arr_1 [i_0 + 1] [i_1 - 1]);
                arr_4 [i_1] = ((/* implicit */unsigned short) min(((~(arr_1 [i_1 + 1] [i_0 + 2]))), (var_7)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (((((/* implicit */_Bool) -1881993742)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_11))))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6942928231749295711ULL))))))));
}
