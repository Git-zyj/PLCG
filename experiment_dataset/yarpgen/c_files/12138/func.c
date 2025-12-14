/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12138
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) (((+(var_5))) != (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_11)) : ((~(((/* implicit */int) var_4))))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */unsigned int) -655350866)) + (((898514142U) | (((/* implicit */unsigned int) 1528672066)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    var_22 = ((/* implicit */unsigned int) var_10);
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) - (((((var_6) * (var_6))) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))))));
}
