/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136908
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)116)))))));
    var_15 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (var_3))))) - (((var_8) * (4040049651736542955ULL))))), (((/* implicit */unsigned long long int) max((max((var_3), (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_5))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */unsigned char) ((unsigned long long int) var_1));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_0]) ? (((/* implicit */int) arr_2 [i_1])) : ((+(((/* implicit */int) arr_0 [i_0]))))))) ? (max((((((((/* implicit */int) (short)-21833)) + (2147483647))) << (((((((/* implicit */int) (short)-21833)) + (21847))) - (14))))), ((+(((/* implicit */int) (short)-21844)))))) : ((-(((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))))))));
            }
        } 
    } 
    var_17 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)48735)) ? (((/* implicit */int) (short)21850)) : (((/* implicit */int) (unsigned short)16793))));
    var_18 = ((/* implicit */long long int) var_2);
}
