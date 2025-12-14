/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174102
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
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0 - 1] [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) (_Bool)0);
                    arr_10 [i_0] [i_1 - 1] [i_0] = ((/* implicit */signed char) max((((unsigned long long int) ((arr_8 [i_0 + 1] [i_0 + 1] [i_0 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (((/* implicit */unsigned long long int) -2985779394616282139LL))));
                    arr_11 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (arr_5 [i_0 - 1] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((int) 2518318484U))) : (arr_7 [i_0 - 1] [i_0 - 1])));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((long long int) ((((var_5) + (2147483647))) >> (0))));
}
