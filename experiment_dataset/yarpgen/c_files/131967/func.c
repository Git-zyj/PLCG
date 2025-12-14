/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131967
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((((long long int) arr_5 [i_1] [i_1] [i_1] [i_1])), (((/* implicit */long long int) (signed char)47))));
                    arr_7 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((int) arr_6 [9ULL] [i_2] [i_2] [i_0]));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) - (((/* implicit */int) var_12))))))), (((/* implicit */unsigned long long int) var_10))));
    var_22 |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */unsigned long long int) var_11)), (var_18))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))))));
}
