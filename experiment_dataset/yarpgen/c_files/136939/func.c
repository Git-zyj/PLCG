/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136939
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 6; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] |= ((arr_1 [i_0 + 1] [0]) > (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-11049)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-11049)) >= (((/* implicit */int) var_9)))))) : (max((4294967288U), (4294967275U)))))));
                arr_5 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((int) 751391625U))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1 + 4])))))));
                arr_6 [i_0 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) arr_0 [i_0 - 3]))))) ? (max((((/* implicit */int) (_Bool)1)), (arr_3 [i_0] [i_0 + 1] [i_0]))) : (max((((((/* implicit */_Bool) 4U)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (short)-17599)))), (((/* implicit */int) var_0))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) 1683002029);
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_0))));
}
