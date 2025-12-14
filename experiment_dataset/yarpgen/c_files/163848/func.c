/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163848
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
    var_13 = ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) ^ (var_12))), (((/* implicit */unsigned int) min((arr_2 [i_2]), (arr_2 [i_0])))))))));
                    var_15 *= ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_2])) >= (((/* implicit */int) arr_1 [(unsigned short)2])))))) >= (var_4))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) 16382U);
    var_17 = ((/* implicit */int) min((((long long int) (~(var_0)))), (((/* implicit */long long int) var_2))));
}
