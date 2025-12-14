/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151617
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 = arr_3 [i_1];
                    var_19 = (-((~(((/* implicit */int) var_2)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) var_2);
    var_21 += ((/* implicit */unsigned long long int) var_1);
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((int) var_5))));
    var_23 = ((/* implicit */int) var_15);
}
