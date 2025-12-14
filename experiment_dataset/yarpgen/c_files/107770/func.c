/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107770
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
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_9)), (8362433542240465217LL))) >= (var_17)));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (-(arr_2 [i_0 - 1] [i_0 - 1] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8362433542240465205LL)) ? (arr_0 [1] [1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) var_12)) : (((int) var_3))))) : (arr_3 [i_0] [i_1 - 2] [i_0])));
            }
        } 
    } 
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((var_5), (var_17)))), ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_11)))))));
}
