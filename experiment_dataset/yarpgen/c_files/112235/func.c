/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112235
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
    var_18 = ((/* implicit */long long int) var_5);
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_12)) : (min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) var_12)))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [(unsigned char)11]) / (arr_6 [i_2 - 1] [i_2 - 1] [i_2] [i_2]))) << (((min((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]), (((/* implicit */long long int) var_15)))) - (23805LL))));
                    var_21 = ((/* implicit */_Bool) ((unsigned int) (+(arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                }
            } 
        } 
    } 
}
