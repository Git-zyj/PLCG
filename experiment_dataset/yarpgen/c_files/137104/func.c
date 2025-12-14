/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137104
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
    var_18 = ((/* implicit */int) ((_Bool) var_8));
    var_19 = ((/* implicit */long long int) 1971409862);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) arr_0 [i_0]);
                var_21 ^= ((/* implicit */unsigned short) (+(((long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_1)))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) var_2)))));
                arr_7 [(short)1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 62914560)) ? (arr_3 [i_1] [i_0]) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) var_4)) : (arr_3 [i_0] [i_1])))));
            }
        } 
    } 
}
