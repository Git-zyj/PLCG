/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161291
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
    var_17 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_13))))));
    var_18 = ((/* implicit */signed char) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_19 -= ((/* implicit */unsigned char) arr_2 [i_0] [i_1] [i_0 - 3]);
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (2012371270U)));
                var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_0 - 2])) || (((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned char) var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) || (((/* implicit */_Bool) arr_1 [i_0 - 2])))))) : (((((/* implicit */_Bool) max((arr_3 [i_0 - 1] [i_0]), (((/* implicit */unsigned short) var_3))))) ? (max((((/* implicit */unsigned int) (unsigned char)250)), (560590554U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_3 [i_1] [i_0]))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) << (((((/* implicit */int) max((((/* implicit */short) var_6)), (var_11)))) - (9045)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))))));
}
