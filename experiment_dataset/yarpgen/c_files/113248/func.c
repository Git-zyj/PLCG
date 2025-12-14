/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113248
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
    var_10 -= ((/* implicit */long long int) (-(var_2)));
    var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)127))))), (((((/* implicit */_Bool) (short)-17105)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)110)))))), (((((((/* implicit */_Bool) (short)5396)) || (((/* implicit */_Bool) (unsigned short)17328)))) ? (((((/* implicit */_Bool) (unsigned short)48199)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47713))))) : (140720308486144ULL)))));
                    arr_6 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)17829))));
                }
            } 
        } 
    } 
}
