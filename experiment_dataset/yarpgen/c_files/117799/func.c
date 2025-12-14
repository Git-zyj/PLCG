/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117799
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
    var_17 += ((/* implicit */_Bool) ((max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112))) | (var_9))), (((((/* implicit */_Bool) 440038142)) ? (var_4) : (var_5))))) << ((((+(((/* implicit */int) var_6)))) - (51788)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (+((+(((/* implicit */int) var_2)))))))));
                    var_19 += ((/* implicit */long long int) var_14);
                    var_20 += ((/* implicit */unsigned short) 5ULL);
                    var_21 += ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
    } 
}
