/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14143
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_1 - 3] = ((/* implicit */int) ((((/* implicit */int) ((((var_12) >> (((var_5) - (3829013684688302824LL))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) > (((/* implicit */long long int) var_1))))))))) > (((/* implicit */int) ((((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) < (var_8))))));
                arr_6 [i_0] [i_1 - 4] = var_2;
            }
        } 
    } 
}
