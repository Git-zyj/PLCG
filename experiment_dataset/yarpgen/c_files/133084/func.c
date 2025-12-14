/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133084
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
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 15; i_2 += 4) 
            {
                {
                    var_18 = max((((((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 3]))) : (((unsigned int) (short)-18909)))), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) var_6))))))));
                    var_19 = (i_0 % 2 == zero) ? (((/* implicit */signed char) (+((((+(((/* implicit */int) var_4)))) << (((((/* implicit */int) max((arr_6 [i_0] [i_0]), (((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0]))))) - (81)))))))) : (((/* implicit */signed char) (+((((+(((/* implicit */int) var_4)))) << (((((((/* implicit */int) max((arr_6 [i_0] [i_0]), (((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0]))))) - (81))) + (102))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_15))));
    var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20959))) : (-4483589273086478361LL)))))));
    var_22 |= min((max((((((/* implicit */unsigned int) var_8)) * (var_10))), (((/* implicit */unsigned int) ((unsigned short) var_7))))), (((/* implicit */unsigned int) (signed char)-112)));
}
