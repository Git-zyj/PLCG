/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174002
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */signed char) max((((/* implicit */long long int) (unsigned char)232)), (((max((((/* implicit */long long int) arr_0 [i_1] [i_0 + 4])), (var_10))) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                    arr_11 [i_0] [i_2] = ((/* implicit */int) arr_5 [i_1 + 1]);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((min((((/* implicit */long long int) var_7)), (var_10))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
}
