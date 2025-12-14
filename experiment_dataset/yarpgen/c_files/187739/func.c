/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187739
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (min((((/* implicit */int) (unsigned char)31)), ((~(((/* implicit */int) (signed char)22)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)14)), (576460752303423487LL)))), (8924440558173868184ULL))), (((/* implicit */unsigned long long int) var_6))));
                var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8503))) : (((long long int) var_0)))))));
            }
        } 
    } 
}
