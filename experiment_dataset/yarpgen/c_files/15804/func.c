/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15804
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
    var_11 -= ((/* implicit */int) min((var_3), (((/* implicit */unsigned int) ((unsigned short) -13LL)))));
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (~(1233089061)))) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)24517)) ? (-318252944) : (1260806879)))))) : (((unsigned int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((unsigned long long int) -616846804));
                var_14 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) 318252943)) || (((/* implicit */_Bool) 2147483647)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1233089061))))) : (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) (unsigned short)0))));
            }
        } 
    } 
}
