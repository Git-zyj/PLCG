/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136702
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
    var_13 = ((((/* implicit */_Bool) max((((unsigned long long int) (short)13494)), (((((/* implicit */_Bool) 11255272559272516656ULL)) ? (var_5) : (var_8)))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))))) : (var_8));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */int) arr_1 [i_0]))))) & (max((((/* implicit */unsigned long long int) 827926089U)), (5080536138216205764ULL)))))));
                var_15 = ((/* implicit */long long int) var_0);
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) ((unsigned char) (short)(-32767 - 1)))))))) <= ((-(var_3)))));
            }
        } 
    } 
}
