/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114361
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
    var_17 |= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_0)) : (var_14)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] [18U] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_0 [(_Bool)0]))) ? (min((((/* implicit */unsigned long long int) var_16)), (var_10))) : (((/* implicit */unsigned long long int) ((arr_3 [11LL]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0])))))))) ? ((+(((/* implicit */int) (signed char)-7)))) : (min((((/* implicit */int) arr_0 [10])), ((+(((/* implicit */int) var_1))))))));
                arr_6 [i_0] [9LL] = ((/* implicit */unsigned int) var_15);
            }
        } 
    } 
}
