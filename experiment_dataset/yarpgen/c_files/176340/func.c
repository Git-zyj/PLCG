/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176340
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
    var_12 = ((/* implicit */short) (!((!(((((/* implicit */unsigned long long int) var_2)) <= (var_11)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) max((((/* implicit */unsigned long long int) 1777766068193696587LL)), ((-(15666794572944334914ULL)))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(var_4)))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) / (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1 - 1] [i_1 - 1]))) : (var_2)))))) : (var_6)));
            }
        } 
    } 
}
