/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16888
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
    var_11 &= ((/* implicit */unsigned short) var_9);
    var_12 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (var_9)))), (var_7))), (((((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) (unsigned char)63)))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
                arr_7 [14U] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_3))))) ? (var_7) : (((/* implicit */unsigned long long int) ((arr_3 [i_1] [i_1 + 2] [i_0]) | (((/* implicit */int) var_5)))))))));
                arr_8 [i_0] [i_1 - 3] = ((/* implicit */unsigned short) min(((~((-(((/* implicit */int) (unsigned char)184)))))), (((/* implicit */int) var_5))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_10);
    var_14 = ((/* implicit */int) max((((18446744073709551603ULL) % (((/* implicit */unsigned long long int) -797764885)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-1110)) : (var_9)))))))));
}
