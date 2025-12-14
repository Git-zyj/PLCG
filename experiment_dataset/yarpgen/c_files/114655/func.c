/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114655
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) 4095U);
        var_17 = ((/* implicit */int) max(((!(((/* implicit */_Bool) (short)32766)))), ((!(((/* implicit */_Bool) var_4))))));
        arr_2 [(unsigned char)16] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-2922))))), (((/* implicit */long long int) var_8))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((max((var_4), (((/* implicit */int) (short)32750)))) != (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(short)6])) ? (((/* implicit */int) (unsigned short)52266)) : (((/* implicit */int) (short)32760))));
        var_20 = ((/* implicit */unsigned short) (~(var_12)));
        var_21 += ((/* implicit */long long int) -6);
    }
    var_22 = var_5;
}
