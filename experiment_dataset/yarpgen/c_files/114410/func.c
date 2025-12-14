/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114410
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
    var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-11162))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0] [12U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)11191)) : (((/* implicit */int) (signed char)6))))) && (((/* implicit */_Bool) ((3280937303U) << (((((/* implicit */int) (short)-11184)) + (11213))))))));
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) max(((short)-11192), (((/* implicit */short) (unsigned char)140)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [15LL])) ? (30ULL) : (((/* implicit */unsigned long long int) -3503816254015188472LL))))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (4294967292U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) (signed char)-120)))))))) : ((-(-3503816254015188472LL)))));
                arr_5 [(signed char)16] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_1] [21ULL])) >> (max((((((/* implicit */_Bool) (unsigned short)2326)) ? (((/* implicit */long long int) -2147483645)) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2334)) || (((/* implicit */_Bool) (unsigned char)255)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(3813604251U)))) ? (((((/* implicit */_Bool) ((unsigned char) 4LL))) ? (min((var_13), (((/* implicit */long long int) (short)-11187)))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_12))))))))));
}
