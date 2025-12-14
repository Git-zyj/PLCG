/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175969
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (var_15)));
    var_21 |= ((/* implicit */unsigned int) var_12);
    var_22 = ((/* implicit */long long int) var_14);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_17))));
                    arr_7 [i_1] [i_1] [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_1]);
                }
            } 
        } 
    } 
    var_24 |= ((/* implicit */signed char) var_13);
}
