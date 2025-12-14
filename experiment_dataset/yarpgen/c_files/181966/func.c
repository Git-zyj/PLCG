/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181966
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
    var_13 = (+((-(min((((/* implicit */long long int) var_8)), (var_2))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
                var_14 = ((/* implicit */signed char) arr_5 [i_0]);
                var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 1])) ? (arr_4 [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1 + 1] [i_1 - 1]))) : (min((arr_4 [i_1 - 1] [i_1 - 1]), (((/* implicit */long long int) arr_2 [(unsigned short)0]))))));
            }
        } 
    } 
}
