/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10462
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
    var_19 = ((/* implicit */unsigned int) var_10);
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) 664534162U)) : (-5LL))))))) << ((((-((-(var_1))))) - (8935251680827310239LL)))));
    var_21 = ((/* implicit */long long int) var_6);
    var_22 = var_1;
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */long long int) arr_1 [i_0]);
                    var_23 = (-(arr_1 [i_1]));
                    arr_10 [i_0] [9LL] [i_2] [i_2] = ((((19LL) ^ (arr_0 [i_0 + 4]))) + (((/* implicit */long long int) ((/* implicit */int) ((var_16) > (11U))))));
                    arr_11 [9LL] [9LL] [i_1] [i_2] = max((((((/* implicit */_Bool) arr_4 [i_2 - 2] [i_2 - 3] [i_2])) ? (19LL) : (arr_4 [i_2 - 1] [i_1] [i_0]))), ((-(var_17))));
                }
            } 
        } 
    } 
}
