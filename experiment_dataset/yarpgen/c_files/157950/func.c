/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157950
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (unsigned char)15))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)0)), (3060127925U)))) ? (((((/* implicit */_Bool) 4186222700U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)234)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)235)) || (arr_6 [i_0] [i_0] [i_0] [i_2]))))))) ? (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))) : (var_0))), (((/* implicit */unsigned int) ((var_3) && ((_Bool)0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((var_3) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)86)))), (((/* implicit */int) ((unsigned char) (unsigned char)118)))))) ? (((((var_10) ? (14U) : (3994507050U))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_2 - 1])) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) arr_1 [i_2]))))))) : (((unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) var_7))))))))));
                    var_14 = 33538048U;
                    var_15 = var_0;
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((2225995772U), (var_9))), (((/* implicit */unsigned int) var_1))))) ? (var_9) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_4)))))))));
}
