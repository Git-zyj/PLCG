/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172051
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
    var_14 = ((/* implicit */_Bool) var_10);
    var_15 = ((/* implicit */unsigned short) var_0);
    var_16 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) var_11);
                var_18 = ((/* implicit */short) (((((-(((/* implicit */int) var_8)))) > (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)13)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (1207760481126286217LL))), (((/* implicit */long long int) (_Bool)0))))) : (((unsigned long long int) arr_2 [i_0 + 1] [i_0]))));
                var_19 = ((/* implicit */int) (-(532676608U)));
            }
        } 
    } 
}
