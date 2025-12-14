/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129752
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] |= ((_Bool) 2880455809U);
                var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_1])), ((unsigned short)46020)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))) : (((/* implicit */int) ((short) arr_3 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)249)) ? (((((/* implicit */_Bool) var_6)) ? (912894044U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (unsigned short)17827)) : (((/* implicit */int) var_7))));
}
