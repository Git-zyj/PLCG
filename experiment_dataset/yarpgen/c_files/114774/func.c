/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114774
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
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(1931425143)))) ? (((/* implicit */int) max(((signed char)106), ((signed char)-116)))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)106))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)101))))));
                    var_10 = ((/* implicit */short) (signed char)-102);
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)101)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) 12683472508574069179ULL)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))), (max((((/* implicit */unsigned long long int) var_3)), ((-(var_1)))))));
}
