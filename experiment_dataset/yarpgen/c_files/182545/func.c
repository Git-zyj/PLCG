/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182545
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_0 + 1])) ? (var_7) : (3259805474U)))) ? (((/* implicit */unsigned long long int) (~(var_19)))) : ((+(16102241448424742617ULL)))));
                var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (var_3)))) ? (1035161808U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95))))) != (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)52412)) >> (((1035161828U) - (1035161822U))))))));
            }
        } 
    } 
    var_22 = min((min((((((/* implicit */_Bool) (signed char)-90)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4095))))), (((/* implicit */long long int) (+(var_0)))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)7228)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)43895))))), (var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (1035161810U)))) ? ((+(-5753915176648794085LL))) : (((/* implicit */long long int) ((-46283727) & (((/* implicit */int) var_6)))))))));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3071286688U)) ? (((/* implicit */int) (unsigned short)24601)) : (((/* implicit */int) (signed char)54)))))))) : (554084179)));
}
