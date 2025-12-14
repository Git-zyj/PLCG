/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135509
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_11)) : (var_7)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (((arr_3 [i_1]) | (((/* implicit */unsigned long long int) arr_1 [22]))))))));
                var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_0 [i_0] [i_0]))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)54747)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) -14)) ? (max((arr_3 [i_0]), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)24610))))))) : (((/* implicit */unsigned long long int) (+(arr_1 [i_0]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_10);
}
