/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133213
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
    var_16 = ((/* implicit */unsigned short) (+(17LL)));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_3))));
    var_18 &= ((/* implicit */unsigned int) var_11);
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_4)))) ? (var_8) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))))) : (1437062781U)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (-(arr_4 [i_0] [i_1])));
                arr_6 [i_1] = ((/* implicit */unsigned short) var_4);
            }
        } 
    } 
}
