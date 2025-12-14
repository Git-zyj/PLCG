/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124770
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
    var_16 = ((/* implicit */unsigned int) (unsigned char)184);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_1]);
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) var_15))) + (var_8))), (((long long int) arr_2 [i_0])))))));
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8))))))))));
                var_20 -= ((/* implicit */unsigned short) -18516259736534352LL);
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_4);
}
