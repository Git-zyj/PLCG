/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135896
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
    var_10 += ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [1U] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)(-32767 - 1))), ((unsigned short)63)))) ? (((/* implicit */int) arr_4 [i_2] [i_0])) : (((/* implicit */int) arr_4 [i_2] [i_0]))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)88))) : (((arr_2 [i_2] [i_2] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_8 [i_2] [i_1] [i_0])))))));
                    var_11 ^= ((/* implicit */unsigned short) var_6);
                    var_12 = ((/* implicit */long long int) ((((arr_3 [i_0] [i_1] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_0]))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5))))));
                }
            } 
        } 
    } 
}
