/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157694
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 = max((((/* implicit */unsigned long long int) (+(arr_5 [i_0] [i_0])))), (var_4));
                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned char)145)))) ? (((/* implicit */unsigned int) ((int) var_3))) : (var_13))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (var_4)))))) ? (((var_13) - (var_5))) : (var_13)));
    var_20 = max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((var_13) << (((((/* implicit */int) var_10)) - (210)))))) : (var_16))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) var_9))))) - (((var_0) + (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    var_21 ^= ((((/* implicit */int) var_7)) | ((~(((/* implicit */int) ((_Bool) var_15))))));
    var_22 = ((/* implicit */unsigned int) (+(((int) var_7))));
}
