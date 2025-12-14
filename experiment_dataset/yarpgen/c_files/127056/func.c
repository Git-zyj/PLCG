/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127056
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (((((/* implicit */long long int) arr_1 [i_0])) ^ (arr_2 [i_0])))));
                var_16 = ((long long int) 3391165340383991541LL);
            }
        } 
    } 
    var_17 |= ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((0ULL) & (5ULL)))))));
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
    var_19 = ((/* implicit */long long int) var_9);
}
