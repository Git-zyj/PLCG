/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120004
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
    var_19 |= ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((min((((/* implicit */unsigned long long int) var_16)), (var_17))) >> (((((((/* implicit */_Bool) var_0)) ? (2254441697811918223ULL) : (var_18))) - (2254441697811918175ULL))))) * (((/* implicit */unsigned long long int) ((2092800221) >> (((17464517865940269163ULL) - (17464517865940269132ULL)))))))))));
                arr_7 [i_0] = (unsigned short)62563;
            }
        } 
    } 
}
