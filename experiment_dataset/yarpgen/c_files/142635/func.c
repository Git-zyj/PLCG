/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142635
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [(short)9] = ((/* implicit */int) ((short) (-(((/* implicit */int) ((_Bool) var_12))))));
                var_14 &= ((/* implicit */short) var_2);
                var_15 *= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 1] [i_1 + 1])) < (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 1] [i_1 + 1]))))) & (((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_13)))) << (((((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1 - 1])) + (13543)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        for (unsigned int i_3 = 1; i_3 < 22; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [16] [16])) ? (((/* implicit */int) ((_Bool) arr_9 [(signed char)8] [(signed char)8]))) : (((/* implicit */int) ((_Bool) var_5))))))));
                var_17 = ((/* implicit */short) max((var_1), (((/* implicit */int) (short)-6454))));
            }
        } 
    } 
    var_18 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_12)))))))) * (((((/* implicit */_Bool) ((int) var_0))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)6446))) & (var_7)))))));
}
