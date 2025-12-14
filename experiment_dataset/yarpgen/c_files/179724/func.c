/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179724
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
    var_17 = ((/* implicit */long long int) (unsigned char)11);
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_9))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_19 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0])) : (784962544)))) ? (arr_5 [i_0] [i_0]) : ((-(((/* implicit */int) var_13)))))))));
                var_20 = ((/* implicit */long long int) 503279217U);
                var_21 = ((/* implicit */signed char) max((var_21), (arr_2 [i_0] [i_1] [i_0])));
            }
        } 
    } 
    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ^ (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_0))) : (((/* implicit */long long int) min((((/* implicit */int) var_7)), (-784962544))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) >= (min((((/* implicit */unsigned int) (signed char)127)), (var_4))))))) : (((((/* implicit */_Bool) ((((var_6) + (2147483647))) << (((((/* implicit */int) var_15)) - (65)))))) ? (((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) var_6)))));
}
