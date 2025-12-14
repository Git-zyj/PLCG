/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123291
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 ^= ((/* implicit */signed char) (+(max((min((((/* implicit */long long int) arr_1 [i_0])), (arr_5 [i_0] [i_0] [24LL]))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) 1266142530U)) >= (var_4))))))));
                var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1152921504590069760LL)))) ? ((~(var_5))) : (max((((/* implicit */unsigned long long int) 3623916389U)), (4666987892378828656ULL))))))));
            }
        } 
    } 
}
