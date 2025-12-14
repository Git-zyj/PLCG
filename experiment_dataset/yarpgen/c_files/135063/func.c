/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135063
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [14ULL] [i_1]))) : (((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                var_17 |= ((/* implicit */unsigned long long int) (((!(((((/* implicit */_Bool) -6569250866334540014LL)) || (((/* implicit */_Bool) 686056250)))))) ? (((((/* implicit */int) (unsigned char)10)) * (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
                var_18 = ((/* implicit */_Bool) var_10);
            }
        } 
    } 
    var_19 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) ^ (((/* implicit */int) var_13)));
}
