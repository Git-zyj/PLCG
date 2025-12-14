/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167503
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
    var_15 = (~(((((/* implicit */_Bool) (unsigned short)16267)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (unsigned char)233)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (var_13)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_0] [i_0] [16]), (arr_7 [i_0] [i_1] [i_2 + 1]))))) : (((((/* implicit */_Bool) (unsigned short)49259)) ? (2698928502U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49259)))))));
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(((/* implicit */int) ((-7026722238422200167LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)112)))))))))));
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (short)8315))));
}
