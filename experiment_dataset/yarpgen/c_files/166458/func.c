/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166458
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((-(2173882866U))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-102))) : (var_13)))))) ? (((((var_4) > (((/* implicit */long long int) ((/* implicit */int) var_9))))) ? (((/* implicit */long long int) var_13)) : (min((var_4), (var_8))))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))))));
    var_18 = ((/* implicit */int) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] = ((signed char) (-(((/* implicit */int) arr_5 [i_1]))));
                    arr_9 [i_0 + 3] [i_1] [i_0 - 1] = ((/* implicit */signed char) var_15);
                    var_19 = ((/* implicit */long long int) (~(((/* implicit */int) (short)-29669))));
                }
            } 
        } 
    } 
}
