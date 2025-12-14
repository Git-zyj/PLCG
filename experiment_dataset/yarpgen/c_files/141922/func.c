/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141922
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_3 [i_0])))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)15498)))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned long long int) var_13)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_10))))) < (((/* implicit */unsigned long long int) var_3))));
    var_20 &= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((unsigned long long int) var_13)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))));
}
