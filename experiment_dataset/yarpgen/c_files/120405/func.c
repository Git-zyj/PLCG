/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120405
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) 31ULL);
                var_13 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 1482427461)) ? (1482427461) : (((/* implicit */int) (signed char)114)))));
                var_14 = ((/* implicit */_Bool) 455808639U);
                var_15 = ((/* implicit */long long int) arr_1 [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)11749)), (221178033914595465ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)114))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-53)))) <= (((/* implicit */int) var_10)))))) : ((~(1125899906777088ULL)))));
}
