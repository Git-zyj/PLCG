/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11278
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
    var_10 = ((/* implicit */unsigned short) (~(((((/* implicit */int) (signed char)31)) / (((/* implicit */int) var_0))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) ((var_5) << (((/* implicit */int) (((+(var_7))) == (((/* implicit */long long int) arr_4 [(short)4] [(unsigned char)6] [(short)4]))))))))));
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((var_1) ? (max((((/* implicit */unsigned long long int) (unsigned short)60997)), (((((/* implicit */unsigned long long int) var_4)) * (563212831599830942ULL))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4563)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))), (((var_1) ? (var_5) : (((/* implicit */unsigned long long int) var_8)))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_2);
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)60973))) + (min((((var_7) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60973))))), (((/* implicit */long long int) var_3))))));
}
