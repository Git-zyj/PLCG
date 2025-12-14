/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17052
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) min(((-(18446744073709551615ULL))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) 16ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (18446744073709551599ULL)))))));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((((18446744073709551615ULL) != (8905453602722426850ULL))) ? (16ULL) : (((/* implicit */unsigned long long int) 3866860430849295591LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18359)))));
                var_16 = ((/* implicit */short) (-(18446744073709551599ULL)));
            }
        } 
    } 
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1)))))) ^ (min((((/* implicit */unsigned long long int) var_5)), (17ULL)))))))));
    var_18 = (~((((!(((/* implicit */_Bool) (short)-26931)))) ? (((/* implicit */unsigned long long int) var_0)) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)0)))))));
}
