/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172152
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned int) 2147483647)), (((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 1])) ? (max((658225028U), (((/* implicit */unsigned int) -2147483647)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                arr_5 [i_1] = ((/* implicit */_Bool) max((min((-2147483647), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_3 [i_1 + 3] [i_1 + 4])) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_10);
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_0))));
    var_16 &= ((/* implicit */int) (!((!((!(((/* implicit */_Bool) -1459299865112527188LL))))))));
    var_17 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2147483642))));
}
