/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154759
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
    var_13 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_10)))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_2)))))) > ((+(var_10)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_2))));
                    var_15 ^= ((/* implicit */short) arr_8 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    } 
}
