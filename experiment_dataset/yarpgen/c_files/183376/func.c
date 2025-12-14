/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183376
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
    var_20 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))))) ^ (min((var_3), (((/* implicit */unsigned long long int) var_15)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) > (max((((/* implicit */unsigned long long int) var_18)), (var_5)))))))));
    var_21 = ((/* implicit */int) (~(((unsigned long long int) max((((/* implicit */long long int) 1325590677)), (var_15))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_22 = ((short) var_7);
                var_23 -= ((/* implicit */int) (((((+(((/* implicit */int) var_9)))) & (((/* implicit */int) var_1)))) > (((/* implicit */int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_18)))))))));
                arr_4 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8046)) ? (-1278213098) : (1866581791)));
            }
        } 
    } 
}
