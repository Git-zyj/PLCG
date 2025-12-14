/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127014
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) max((var_17), (((-3396864729550048413LL) - (-3396864729550048413LL)))));
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((long long int) ((((/* implicit */_Bool) arr_2 [18LL] [i_1] [18LL])) ? (3107084626885290059LL) : (arr_2 [2LL] [i_0] [2LL])))) >= (max((var_15), (((/* implicit */long long int) (((-9223372036854775807LL - 1LL)) != (3107084626885290049LL)))))))))));
            }
        } 
    } 
    var_19 = var_2;
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((3107084626885290059LL) <= (var_0))))));
}
