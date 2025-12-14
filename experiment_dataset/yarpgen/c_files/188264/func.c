/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188264
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
    var_17 = ((/* implicit */int) var_15);
    var_18 ^= ((max((((/* implicit */unsigned int) var_0)), ((-(1433129894U))))) ^ (((/* implicit */unsigned int) var_13)));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((((unsigned long long int) ((long long int) (_Bool)1))) != (((/* implicit */unsigned long long int) var_6))));
                    arr_7 [i_0] [i_1] [10ULL] = ((/* implicit */unsigned short) arr_3 [i_0 - 1] [i_0]);
                }
            } 
        } 
    } 
}
