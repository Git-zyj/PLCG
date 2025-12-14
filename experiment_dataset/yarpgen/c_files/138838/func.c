/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138838
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
    var_14 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)32759)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))))))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)19675))))), (((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned long long int) 6735542391039129933LL))))))));
    var_15 = ((var_4) ^ (var_8));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (1134254429U))))))))));
                var_17 ^= ((/* implicit */long long int) max(((-(((var_4) ^ (var_8))))), (((/* implicit */unsigned long long int) (+(arr_1 [i_1 - 1] [i_1 + 1]))))));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (signed char)127))));
            }
        } 
    } 
}
