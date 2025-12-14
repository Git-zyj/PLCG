/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180931
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((unsigned short) (unsigned short)65535))));
    var_14 *= ((/* implicit */unsigned long long int) min((var_0), (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-26700))))) != (240125426U))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) (-(var_0)));
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */unsigned long long int) min(((~(var_5))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))))))));
            }
        } 
    } 
}
