/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112046
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) ((980603023U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) -2102428082);
                var_21 = max((((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)28091)) >> (((((/* implicit */int) (unsigned short)37445)) - (37431))))) >> (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))), (max((((long long int) (unsigned short)47146)), (((/* implicit */long long int) (unsigned short)18380)))));
            }
        } 
    } 
}
