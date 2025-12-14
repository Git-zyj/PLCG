/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156021
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
    var_15 *= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 3008249979U)) : (-6322914534014795338LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : ((+(var_14))))));
    var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-63))));
    var_17 -= ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */int) (short)-15324)), ((-(((/* implicit */int) (signed char)-63)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-63))) : (var_11)))) ? (((((/* implicit */_Bool) (short)-29859)) ? (((/* implicit */int) (signed char)-89)) : (1157727629))) : (((((/* implicit */_Bool) (unsigned short)33344)) ? (((/* implicit */int) (signed char)36)) : (var_8))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */short) min((((((arr_0 [i_0] [i_0]) ? (((/* implicit */long long int) 2632080181U)) : (arr_4 [i_1]))) - (((2038108603537743293LL) + (((/* implicit */long long int) ((/* implicit */int) (short)15337))))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0 - 3])))))));
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (+((~(arr_2 [i_0 - 3] [i_0 - 3]))))))));
            }
        } 
    } 
}
