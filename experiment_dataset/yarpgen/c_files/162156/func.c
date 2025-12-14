/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162156
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
    var_17 = (unsigned char)64;
    var_18 = ((/* implicit */unsigned long long int) var_0);
    var_19 -= ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14862))) : (arr_3 [i_0]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))))))), (arr_0 [i_0])));
                var_21 = ((/* implicit */unsigned int) min((var_21), ((-(((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))) / (690831626U))) << (((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_0])))) - (102)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_3);
}
