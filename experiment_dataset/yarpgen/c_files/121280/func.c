/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121280
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0] [0U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) -1202250242)) : (var_10)))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -1282067971)) : (arr_3 [i_0] [i_0])))))) ? (min((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_0]))) : (((((/* implicit */_Bool) (short)-4300)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4199))))));
                var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) var_18)))))) >= (((((/* implicit */_Bool) -1282067965)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4310))) : (6815051639349575330ULL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_16);
}
