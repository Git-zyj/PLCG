/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136576
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
    var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)24199))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (max((((/* implicit */unsigned int) var_5)), (var_8))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_4), (var_4)))) ? ((+(((/* implicit */int) (short)-9886)))) : (((/* implicit */int) var_10))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_2 [i_0] [i_1 + 1])))) ? (((/* implicit */unsigned long long int) (+(2147483619)))) : (max((((/* implicit */unsigned long long int) (signed char)-41)), (((arr_4 [i_0] [i_0] [i_1 + 1]) ^ (arr_4 [i_0] [3ULL] [i_0])))))));
                var_15 = ((/* implicit */int) (unsigned short)41345);
            }
        } 
    } 
}
