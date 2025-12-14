/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150591
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
    var_10 = ((/* implicit */unsigned char) var_3);
    var_11 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_8)) : (var_5)))) ? (((var_3) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_2)))) * (((/* implicit */int) (short)16551))));
    var_12 = ((/* implicit */_Bool) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */long long int) (+(max((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)210)) != (((/* implicit */int) (short)16551)))))))));
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_2))));
                }
            } 
        } 
    } 
}
