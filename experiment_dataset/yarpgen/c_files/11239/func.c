/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11239
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((short) 11114943609638630667ULL)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) 9223372036854775807LL);
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((3630632714U) >= (664334581U)))) * (((/* implicit */int) (!(arr_2 [i_0] [i_0])))))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) + ((-(3750777684U))))) - (544189586U)))));
                var_14 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)90)) ? (((((/* implicit */_Bool) 3750777673U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))) : (9223372036854775807LL))) : (((/* implicit */long long int) 3630632715U)))) << (((((/* implicit */int) var_4)) - (3707)))));
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned int) ((unsigned long long int) 16931414041497834852ULL));
    var_16 = ((/* implicit */unsigned short) var_12);
}
