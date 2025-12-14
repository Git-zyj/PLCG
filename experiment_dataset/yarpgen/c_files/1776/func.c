/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1776
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
    var_14 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = min(((-(max((var_2), (15942205258827159512ULL))))), ((~(8611719932008101896ULL))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17ULL)) ? (((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_4)) - (101))))) : (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_5 [i_0 - 1] [i_1 - 1] [i_1]))))));
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (signed char)(-127 - 1))))))));
            }
        } 
    } 
}
