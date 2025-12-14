/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17520
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
    for (long long int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_1] [i_1]);
                    var_20 -= ((/* implicit */long long int) max((((/* implicit */signed char) var_5)), ((signed char)7)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_8)) == (var_13))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((var_12) | (((/* implicit */long long int) var_8))))))) ? (((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) var_8))))) ? (((long long int) var_13)) : (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-8)))))));
}
