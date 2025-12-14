/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162117
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
    for (long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_4 [i_0] [i_1 - 1]))) % (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned char) arr_0 [(unsigned short)18] [(signed char)8])))))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)9] [i_1]))) : (arr_4 [i_0] [(signed char)16])))))));
                var_14 = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-1LL)))))));
                arr_6 [i_0] [16LL] = ((/* implicit */long long int) ((int) max((((/* implicit */long long int) arr_0 [i_0 - 3] [i_1 + 1])), (-5152233198651086218LL))));
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)65535)))), (var_11)))), (((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)237))))) : (var_6)))));
}
