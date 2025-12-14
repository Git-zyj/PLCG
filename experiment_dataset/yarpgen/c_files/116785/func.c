/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116785
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) (+(((/* implicit */int) ((short) arr_3 [i_0] [i_0])))));
                arr_4 [i_0] [i_0] = ((/* implicit */signed char) (~((+(var_9)))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_6))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
    var_22 &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_18)), (var_16)));
}
