/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176721
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
    var_15 ^= ((/* implicit */unsigned long long int) var_8);
    var_16 |= ((/* implicit */unsigned short) var_10);
    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (max((997860971), (997860971)))));
                var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))), (max(((unsigned short)64830), (((/* implicit */unsigned short) var_5)))))))));
            }
        } 
    } 
}
