/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121506
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
    var_13 = ((/* implicit */int) ((unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) -8488791676844615252LL))) ? ((+(-1617887573259552090LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (-(var_4))))) ? (((/* implicit */long long int) ((unsigned int) ((signed char) var_2)))) : (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-45))) : (-1617887573259552112LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_8)) : (var_2))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max(((-(((long long int) var_5)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1643157354)) ? (((/* implicit */int) (unsigned char)86)) : (-1))))));
}
