/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15068
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
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) (!(var_6))))))))));
    var_17 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) var_0);
                var_19 = ((/* implicit */short) ((((((/* implicit */int) ((_Bool) 0LL))) <= (((((/* implicit */_Bool) arr_5 [i_1] [i_1] [9])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_0 [(_Bool)1] [i_1])))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) (signed char)-61))))) : (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_4 [i_1])))), (((/* implicit */int) (unsigned short)43185)))))));
            }
        } 
    } 
}
