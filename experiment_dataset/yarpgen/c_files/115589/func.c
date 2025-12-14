/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115589
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
    var_10 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_4), (((((/* implicit */_Bool) 4294967295U)) ? (var_4) : (((/* implicit */int) var_7))))))) ? (max((var_0), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((((var_0) ^ (max((arr_0 [i_0]), (arr_0 [9U]))))) - (((/* implicit */unsigned long long int) var_3)));
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_3 [i_0 - 2])), (arr_1 [19ULL]))) > (((/* implicit */unsigned long long int) -1762218617)))))) / ((+(((arr_1 [i_1]) - (((/* implicit */unsigned long long int) var_1))))))));
                var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))))), ((((-(arr_0 [i_0]))) * (arr_1 [17ULL])))));
            }
        } 
    } 
}
