/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146024
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
    var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */int) (_Bool)1)))))) ? (var_0) : (min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3072))) - (2841858735U))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = (!(((/* implicit */_Bool) max((((/* implicit */int) max((arr_3 [i_0]), (var_12)))), (((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (short)-31548))))))));
                var_17 *= ((/* implicit */short) arr_5 [i_1]);
            }
        } 
    } 
    var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */int) var_15)))))))) ? (min(((-(2154358985U))), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((var_4) < (((/* implicit */unsigned long long int) 1453108561U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) var_3)))))))))));
}
