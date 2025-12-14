/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105910
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (signed char)21))));
                arr_4 [i_0] &= (((!(((/* implicit */_Bool) (signed char)75)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 700408638U)) || (((/* implicit */_Bool) (signed char)-69))))) : (arr_2 [i_0] [i_0]));
            }
        } 
    } 
    var_13 &= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_7))))))) ? (((/* implicit */unsigned long long int) var_2)) : (var_9)));
    var_14 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)70)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) (signed char)-70)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (var_5))));
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_3))));
}
