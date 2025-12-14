/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165276
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
    var_12 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (unsigned short)65524)) * (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_4)), (var_11))))))) ? (((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) var_2))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) <= (var_9)))) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)3193)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) ((var_9) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))))))));
                var_13 = ((/* implicit */unsigned short) var_3);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) min((var_6), ((unsigned char)76)));
    var_15 += ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)76))) : (var_3)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))) : (min((((/* implicit */unsigned int) var_5)), (2435288732U))))));
}
