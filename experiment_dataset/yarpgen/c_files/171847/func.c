/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171847
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)15872)) % (((/* implicit */int) (short)15872))))) | (var_5)))) ? (-227813260) : (((/* implicit */int) (short)-8557))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-20432))));
                var_11 += ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-81))));
            }
        } 
    } 
}
