/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10787
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) ((long long int) (_Bool)1));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((4194303) | (((((-4194317) + (2147483647))) << (((((var_14) + (8818487718695428138LL))) - (10LL)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))))) : (((var_9) ? (((/* implicit */long long int) var_5)) : (arr_6 [i_1] [i_0] [i_0])))));
                var_20 = (+(((33550336) | (((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_4);
    var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_15)) : ((~(((/* implicit */int) var_7)))));
}
