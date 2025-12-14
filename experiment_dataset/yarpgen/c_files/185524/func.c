/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185524
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
    var_19 = ((/* implicit */unsigned char) var_5);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_18) : (((/* implicit */int) (unsigned char)211))))) ? (((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) var_17))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) (short)-19058)) ? (var_18) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((unsigned long long int) (short)-3383))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_8)))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65521))))))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)116))) : (-8479607996915422801LL)))))))));
            }
        } 
    } 
    var_22 = var_4;
}
