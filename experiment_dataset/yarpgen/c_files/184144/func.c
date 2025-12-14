/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184144
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            {
                var_18 &= ((/* implicit */short) ((((/* implicit */int) arr_2 [(short)20] [i_1])) < (min((((/* implicit */int) arr_4 [i_1 - 4])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_11) : (((/* implicit */int) (signed char)-106))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_13 [i_1 - 1] = ((/* implicit */_Bool) (signed char)-15);
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 8562429886679695992LL))) ? ((+(2342762019U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_17)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)9394)) >> (((2342762019U) - (2342761995U)))))) : (((1952205277U) * (1952205282U)))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_0] |= ((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min(((~(((/* implicit */int) (short)32767)))), (var_5)));
}
