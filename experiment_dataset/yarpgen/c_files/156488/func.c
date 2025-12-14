/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156488
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) var_12);
                    arr_10 [i_0] [11] [(short)17] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (3903813828277037818LL) : (((/* implicit */long long int) var_8)))) != (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [2U] [i_2]))))))) * (((unsigned long long int) ((((/* implicit */int) var_5)) ^ (-712172688))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((3937217602U) >> (((/* implicit */int) var_3))));
}
