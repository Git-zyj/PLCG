/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131815
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
    var_17 = ((/* implicit */unsigned int) 9223372036854775803LL);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_2 - 1] = ((/* implicit */signed char) ((max((var_9), (((/* implicit */unsigned long long int) 9223372036854775807LL)))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0] [i_0] [i_2 - 1])) ? (arr_0 [i_0 - 1]) : (((/* implicit */long long int) -491262784)))))));
                    var_18 = ((/* implicit */_Bool) ((signed char) (short)-24876));
                }
            } 
        } 
    } 
}
