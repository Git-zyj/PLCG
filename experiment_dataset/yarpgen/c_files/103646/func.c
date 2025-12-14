/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103646
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
    var_13 = ((/* implicit */int) min((var_13), (var_7)));
    var_14 = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) -241179856)) || (((/* implicit */_Bool) -185649652)))) ? (((/* implicit */long long int) 2796744004U)) : (-2042437600315880379LL)))));
    var_15 = ((/* implicit */short) max((((/* implicit */long long int) 1073741824)), (1637060760686136331LL)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))))) / ((+(((/* implicit */int) arr_4 [i_1] [i_2]))))));
                    var_16 ^= ((/* implicit */long long int) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 7075774981686564173LL)) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_2])) : (var_8))) : (((/* implicit */int) var_9))))));
                }
            } 
        } 
    } 
}
