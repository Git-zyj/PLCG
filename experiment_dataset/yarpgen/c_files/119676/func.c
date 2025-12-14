/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119676
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] = arr_8 [i_2 - 3];
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_2))));
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) 9177128750705632526ULL))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) ((min((var_9), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)79)) - (((/* implicit */int) (unsigned short)14))))))) << (((((/* implicit */int) var_3)) + (25039)))));
    var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) (short)63)), (17294153938118255561ULL)))));
}
