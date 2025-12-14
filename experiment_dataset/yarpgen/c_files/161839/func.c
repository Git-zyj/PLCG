/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161839
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 ^= ((/* implicit */unsigned short) min((min((-2147483639), (2046777899))), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), (var_3)))) ? (max((2046777899), (var_0))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_11))))))));
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2046777901)) ? (-520505965) : (((/* implicit */int) (signed char)76)))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((min((((/* implicit */unsigned short) var_12)), (var_3))), (max((((/* implicit */unsigned short) var_2)), (var_10))))))));
}
