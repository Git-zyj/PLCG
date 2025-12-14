/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147449
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
    var_20 = ((/* implicit */unsigned char) 2098200765);
    var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_4)) : (((((/* implicit */unsigned long long int) var_17)) + (var_6))))))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_8)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_24 = ((/* implicit */_Bool) max(((signed char)-105), (((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0 + 1])) >= ((~(arr_2 [i_0]))))))));
                var_25 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_0 [i_0 + 1])))), (((/* implicit */int) (unsigned char)244))));
            }
        } 
    } 
}
