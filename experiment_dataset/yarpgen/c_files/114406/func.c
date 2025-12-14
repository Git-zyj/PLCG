/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114406
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] |= ((/* implicit */unsigned int) ((unsigned char) ((int) max((var_2), (((/* implicit */int) var_1))))));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((unsigned int) var_12)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((short) var_11))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)2040)) : (((/* implicit */int) var_12))))))));
}
