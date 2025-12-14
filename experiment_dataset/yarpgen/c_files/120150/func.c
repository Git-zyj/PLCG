/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120150
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
    var_12 = ((/* implicit */unsigned char) ((((var_2) + (9223372036854775807LL))) << (((((/* implicit */int) var_1)) - (868)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_13 &= ((/* implicit */short) ((unsigned char) arr_2 [i_1 + 2]));
                var_14 += ((/* implicit */short) (!(((/* implicit */_Bool) (~(-8212693024205711207LL))))));
                var_15 &= min((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1 - 1]))))), ((+(((((/* implicit */_Bool) -1267790215)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32750))) : (9223372036854775807LL))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(var_11)))))) ? (((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((((/* implicit */_Bool) var_5)) ? (-8030815471332706101LL) : (var_6))) : (((var_3) & (((/* implicit */long long int) var_4)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) var_4)), (1363464824375849106LL))))))));
}
