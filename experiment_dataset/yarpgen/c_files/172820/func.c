/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172820
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
    var_20 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 1495462372)) ? (((((/* implicit */_Bool) 16264161316678031631ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_14))) : (((/* implicit */long long int) var_19)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) ((4271901885U) == (var_11)))) >= (((/* implicit */int) ((unsigned char) (unsigned short)39988))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((signed char) (_Bool)1);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-40)) ^ (((/* implicit */int) ((short) (unsigned short)0)))));
                }
            } 
        } 
    } 
}
