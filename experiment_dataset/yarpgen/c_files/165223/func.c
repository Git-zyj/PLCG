/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165223
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (18446744073709551615ULL)));
                arr_6 [i_0] = arr_1 [i_0] [i_0 + 1];
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                {
                    arr_13 [i_3] [12LL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2592823665597717056LL)) ? (((/* implicit */unsigned long long int) max((-2592823665597717057LL), (-2592823665597717059LL)))) : (min((23ULL), (var_6)))))) ? (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -2135636399843335318LL)) : (18446744073709551592ULL))), (((unsigned long long int) 9821627121030595431ULL)))) : (673544016154841819ULL)));
                    var_14 *= ((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2 + 4] [i_2 + 2] [i_2])) ? (((/* implicit */unsigned long long int) (~(-2135636399843335318LL)))) : (((arr_10 [i_3] [i_3]) & (8625116952678956190ULL))));
                }
            } 
        } 
    } 
}
