/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107937
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((unsigned char) (unsigned char)10)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) arr_2 [i_1] [i_0] [i_0])) : (((/* implicit */int) (short)24519))))))))) : (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)23316)) / (var_6)))), (max((((/* implicit */long long int) (short)-26848)), (arr_3 [i_0] [i_1])))))));
                var_13 = ((/* implicit */unsigned short) ((int) (!(((/* implicit */_Bool) ((5037390440110442182ULL) | (((/* implicit */unsigned long long int) var_10))))))));
                var_14 = ((/* implicit */_Bool) 1674786757);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_8);
}
