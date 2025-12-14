/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142658
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
    var_18 += ((/* implicit */long long int) (((-(min((var_1), (((/* implicit */unsigned int) var_8)))))) != (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))));
    var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned int) var_10))))) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))) : (0U)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_17) ? (var_0) : (((/* implicit */long long int) 4294967295U))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)15032)) && (((/* implicit */_Bool) 0U))));
                var_20 = ((/* implicit */_Bool) ((((var_0) + (9223372036854775807LL))) >> (((min((((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */int) var_2)))), (((/* implicit */int) (unsigned short)33708)))) - (33708)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((4294967290U) > (((/* implicit */unsigned int) ((/* implicit */int) ((10U) == (0U))))))))));
}
