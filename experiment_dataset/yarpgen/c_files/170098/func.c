/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170098
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
    var_19 = ((/* implicit */unsigned long long int) var_0);
    var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((var_15) * (((/* implicit */unsigned long long int) var_5)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255)))))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned int) 1542399173))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) : (var_5)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_4)) : (var_10))) : (((/* implicit */unsigned long long int) var_0))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_22 *= ((/* implicit */signed char) arr_0 [6LL] [i_1]);
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_8))));
                }
            } 
        } 
    } 
}
