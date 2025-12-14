/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176713
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) ((-906258599) / (((/* implicit */int) arr_2 [i_0] [i_0] [i_2 - 1]))))) ? ((-(((/* implicit */int) (unsigned short)24814)))) : ((+(906258598))));
                    var_19 |= ((/* implicit */int) ((unsigned int) 906258598));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (-((-(min((-906258582), (((/* implicit */int) var_0)))))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)139)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((((/* implicit */short) var_9)), (var_10))))))) ? ((+(((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (short)24953)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_14)))) == (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_11))))))))));
}
