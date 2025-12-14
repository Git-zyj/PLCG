/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179438
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
    var_14 = ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) max((2147483647), (((/* implicit */int) (signed char)27))))) - (var_1))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [1] [i_1] = 1655488883;
                var_15 |= ((/* implicit */int) ((((var_1) & (((((/* implicit */long long int) ((/* implicit */int) (signed char)52))) ^ (-5445664233062067222LL))))) / (max((((/* implicit */long long int) 1069891221)), (-5300617150028052853LL)))));
            }
        } 
    } 
    var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((-5300617150028052851LL), (((/* implicit */long long int) 0U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (var_8))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_3) : (1104377035)))) ? (((((/* implicit */_Bool) -5300617150028052862LL)) ? (((/* implicit */int) (unsigned short)44909)) : (((/* implicit */int) (unsigned short)61285)))) : (((((/* implicit */int) var_10)) & (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) -5300617150028052838LL)) ? (((/* implicit */int) (unsigned short)44924)) : (((((/* implicit */_Bool) -970431347)) ? (((/* implicit */int) var_6)) : (-1928082552)))))));
}
