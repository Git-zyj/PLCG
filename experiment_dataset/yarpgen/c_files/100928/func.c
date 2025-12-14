/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100928
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((min((var_9), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_6))))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)3211)))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_21 &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned long long int) arr_8 [i_0])) : (var_12))), (((/* implicit */unsigned long long int) ((_Bool) arr_8 [i_2])))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) * (var_0))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
}
