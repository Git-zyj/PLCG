/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112268
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                    var_12 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) (unsigned char)13)), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)9)))))), (((/* implicit */int) var_4))));
                    arr_8 [i_1] [i_1] [i_0] &= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -5928588685033286293LL)) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) (unsigned char)242))))) ? (max((((/* implicit */unsigned long long int) (short)-23046)), (14312229892688060293ULL))) : (((/* implicit */unsigned long long int) var_8)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                }
            } 
        } 
    } 
    var_13 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) / (var_0));
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)4006)), (var_1)))) ? (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */int) (_Bool)1))))) : (var_0)))) ? (var_9) : (1085752817)));
}
