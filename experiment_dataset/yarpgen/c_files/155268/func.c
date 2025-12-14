/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155268
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
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) -9156837970463752279LL)) & (var_15))) | (((/* implicit */unsigned long long int) (~(var_11))))));
                    arr_9 [i_0] [i_1 - 1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((var_12), ((unsigned short)63513))), (var_12)))) ? (((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */int) (unsigned short)4095)) : (((/* implicit */int) (_Bool)1)))) : (max((((((/* implicit */_Bool) 2223384574722214790LL)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) (signed char)16)))), ((+(((/* implicit */int) var_17))))))));
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_17)))))))) ? (((((/* implicit */_Bool) (unsigned short)14117)) ? (((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */long long int) var_3)) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (-7656698614637987043LL)));
}
