/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163597
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
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((arr_2 [i_0 + 1] [i_0 + 2]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 1]))))));
                var_12 -= ((/* implicit */signed char) (-((-(arr_3 [i_0 + 2] [i_1])))));
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_11)))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7608))) : (arr_1 [i_0])))))));
                var_14 = ((/* implicit */int) var_5);
            }
        } 
    } 
    var_15 = ((/* implicit */short) (+(var_8)));
    var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) -2890121636843318775LL)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (unsigned char)127))));
}
