/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16387
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */signed char) max(((-(5268656256618728108ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (var_7))))));
                    var_17 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_7))));
}
