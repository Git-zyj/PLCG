/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135384
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 20; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) (~((-(arr_8 [i_0] [i_0] [i_0 + 4] [i_0])))));
                    var_18 = ((/* implicit */int) ((((/* implicit */int) ((signed char) arr_1 [i_2 - 4]))) < (((/* implicit */int) (signed char)75))));
                    var_19 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) var_10))) % (arr_1 [i_0])))) : (((((/* implicit */long long int) ((var_15) ? (-1475567426) : (505060204)))) % (var_7))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) max((var_20), (var_9)));
}
