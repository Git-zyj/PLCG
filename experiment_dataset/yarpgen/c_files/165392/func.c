/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165392
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
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [i_0 - 3] = ((/* implicit */long long int) max((17648555160803656493ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
                    arr_10 [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_7 [i_0] [i_0 + 1] [i_2 - 1]), (var_10))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [9U] [i_0 - 2]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2]))))) ? (((/* implicit */long long int) ((unsigned int) (_Bool)1))) : (((arr_1 [i_2 - 2] [i_0 - 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0 - 2]))) : (var_7)))));
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */short) var_2);
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_11))));
}
