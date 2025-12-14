/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107837
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
    for (long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15032597557130626317ULL)) ? (((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))) ? (15032597557130626309ULL) : (((15032597557130626309ULL) * (3414146516578925327ULL)))));
                var_16 = ((/* implicit */unsigned char) arr_0 [i_1]);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (+((+(min((var_4), (((/* implicit */unsigned int) var_12))))))));
}
