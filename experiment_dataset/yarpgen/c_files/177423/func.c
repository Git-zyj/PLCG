/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177423
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
    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)95)) ? ((+(var_1))) : (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_1))))) ? (((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19118))) : (var_6))) : (((/* implicit */unsigned long long int) var_1)))) | (((/* implicit */unsigned long long int) min((3129780191U), (((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))))));
                var_16 = ((/* implicit */signed char) 13079782370516079497ULL);
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (3839890576U) : (4262371332U)));
            }
        } 
    } 
}
