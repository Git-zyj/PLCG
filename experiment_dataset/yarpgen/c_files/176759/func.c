/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176759
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
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_2)))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_5) : (var_5)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_1)) : (var_9))) : (min((var_9), (((/* implicit */unsigned long long int) var_8)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) var_1))))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))));
                    arr_8 [i_2] &= ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_7)) : (var_6)))) ? (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_9))) : (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) var_11)))))));
                }
            } 
        } 
    } 
}
