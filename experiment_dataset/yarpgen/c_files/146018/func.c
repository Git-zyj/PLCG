/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146018
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
    var_18 *= var_3;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))) : ((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))));
                    var_20 ^= ((/* implicit */signed char) (~(max((((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) - (((/* implicit */int) (unsigned char)154)))), (((/* implicit */int) (unsigned char)234))))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_0 [i_0]))));
                }
            } 
        } 
    } 
}
