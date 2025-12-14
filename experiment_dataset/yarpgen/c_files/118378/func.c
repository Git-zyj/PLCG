/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118378
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
    var_16 = var_14;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_2] = ((/* implicit */short) ((max((((/* implicit */long long int) var_4)), (arr_6 [i_0] [i_1] [i_2]))) * (((/* implicit */long long int) var_2))));
                    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) 17440211096318734453ULL))));
                    arr_8 [i_0] [17ULL] [17ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)82)) ? (273304950374026546LL) : (-273304950374026536LL)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_1))));
}
