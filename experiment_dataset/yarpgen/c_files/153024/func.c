/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153024
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)0))));
                    arr_10 [i_0] = arr_7 [i_0];
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (((~(var_3))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 7946891311743483891ULL)) ? (1499098059U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (2795869234U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)24))))) - (2795869227U))))))));
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) ((-5127491947035810733LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)40)))))) != (((/* implicit */int) ((var_5) && (((/* implicit */_Bool) var_7)))))))), (min((var_6), (((/* implicit */unsigned int) var_0))))));
}
