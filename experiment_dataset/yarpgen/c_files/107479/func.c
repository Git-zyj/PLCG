/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107479
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
    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 13279352514367869814ULL)) ? (var_12) : (((/* implicit */long long int) min((-89668369), (((/* implicit */int) (short)7455))))))) == (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) -1531149487)) ? (((/* implicit */int) (short)-7455)) : (((/* implicit */int) var_2)))) + (((/* implicit */int) (_Bool)1)))))));
    var_15 = ((/* implicit */unsigned short) max((var_15), (var_11)));
    var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-22823))) : (8454909850415847976LL))))))), ((unsigned char)159)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */int) ((unsigned int) (signed char)20));
                var_17 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)19186)))) & (0ULL)))));
            }
        } 
    } 
}
