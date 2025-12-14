/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173143
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */short) var_13)), (var_9))))));
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : ((+(var_2)))))))));
                    arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) ((_Bool) (-(((/* implicit */int) (short)-15867)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) (signed char)43);
    var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((((/* implicit */int) var_3)) * (((/* implicit */int) var_8)))), ((+(((/* implicit */int) (short)4095))))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) (short)-1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))));
}
