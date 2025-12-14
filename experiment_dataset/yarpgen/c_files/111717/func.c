/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111717
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
    var_11 = ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)14589)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((-2805339511108886931LL) + (9223372036854775807LL))) << (((((-2805339511108886931LL) + (2805339511108886974LL))) - (43LL)))));
                arr_7 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)75)), ((short)16376)))) ? (((int) (_Bool)1)) : (((/* implicit */int) (short)-32741))));
                var_13 |= ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-58))))));
                var_14 = ((/* implicit */short) (~(max((((/* implicit */unsigned int) arr_5 [i_0] [i_0 - 1])), (2164198070U)))));
            }
        } 
    } 
}
