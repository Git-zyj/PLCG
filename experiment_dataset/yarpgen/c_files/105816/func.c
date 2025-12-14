/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105816
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
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */int) (unsigned short)61446)), (arr_4 [i_0] [i_2]))) + (((/* implicit */int) ((_Bool) -810159261761704879LL)))));
                    arr_12 [i_0] = ((/* implicit */unsigned short) (unsigned char)76);
                    arr_13 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */long long int) -787760639)) : (-810159261761704897LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_2])) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) var_7))))))), (((/* implicit */long long int) arr_2 [i_0] [i_0]))));
                    arr_14 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)127)) / (((/* implicit */int) (unsigned char)124)))) - (((/* implicit */int) arr_8 [i_0])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))));
    var_21 = ((/* implicit */unsigned int) var_8);
    var_22 = var_6;
}
