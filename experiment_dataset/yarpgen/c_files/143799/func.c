/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143799
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) (-(min((arr_1 [16LL] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) >> (((22144141082256245LL) - (22144141082256231LL))))))))));
                var_12 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (arr_3 [i_1 - 3] [i_0 + 1] [i_1]))), (((/* implicit */unsigned long long int) ((var_3) - (((/* implicit */long long int) var_2)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) min((88487397), (88487397)));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) var_10))), (var_0)))) * (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((((/* implicit */int) var_10)) - (27382)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))) : (((-88487397) / (((/* implicit */int) var_4))))))));
    var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) -88487397)) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)2044))))), (((/* implicit */unsigned int) -88487397))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))), (var_3)))));
}
