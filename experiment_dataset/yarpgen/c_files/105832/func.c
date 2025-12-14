/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105832
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_5))));
                var_18 = ((/* implicit */signed char) (+((-(arr_1 [i_0])))));
                arr_6 [i_0] [i_1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */unsigned long long int) var_14)) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (6950448745242491564ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((18446744073709551607ULL) << (((12420005183276359849ULL) - (12420005183276359806ULL)))))) && (((((/* implicit */_Bool) arr_2 [16LL])) && (var_0)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_6);
}
