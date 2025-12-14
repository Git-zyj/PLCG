/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146551
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
    var_14 |= ((/* implicit */int) ((var_9) & (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_4)) : (var_5))), (((/* implicit */long long int) (-(var_0)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) (+(max((((((/* implicit */unsigned long long int) arr_5 [i_2])) & (arr_2 [3ULL] [3ULL]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (9223372036854775799LL) : (((/* implicit */long long int) arr_4 [i_2] [(unsigned short)13])))))))));
                    var_16 = ((/* implicit */int) max((var_16), (arr_5 [4LL])));
                }
            } 
        } 
    } 
}
