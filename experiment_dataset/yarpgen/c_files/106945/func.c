/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106945
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
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
    var_14 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2462893656528891829ULL))))), (536866816U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))))));
    var_15 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_16 -= min(((-(((/* implicit */int) arr_0 [i_1 + 1])))), ((~(((/* implicit */int) arr_1 [i_1 - 1])))));
                var_17 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_2 [10LL])))), (((((/* implicit */_Bool) (unsigned short)65528)) ? (((((/* implicit */_Bool) (short)18935)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) (signed char)43)))) : (((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */int) (signed char)-44)) : (-372938956)))))));
            }
        } 
    } 
}
