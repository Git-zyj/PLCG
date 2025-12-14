/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112644
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (signed char)38)))))));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((int) min(((unsigned short)52408), (((/* implicit */unsigned short) (short)32489))))) > (((/* implicit */int) min(((unsigned short)13127), ((unsigned short)13127)))))))));
                arr_4 [i_0] [8] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(3083372837U)))), (min((((/* implicit */long long int) (unsigned short)13127)), (5752504237106979431LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)19990))) : (1591954715U)));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((2147483647), (1687158770)))) ? (((-1408015969) & (-1687158772))) : (545937830))), (((/* implicit */int) ((short) var_9)))));
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned char) -1534482262))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 306143074)))) : (((((/* implicit */_Bool) (unsigned short)52422)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45068))) : (1591954715U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
}
