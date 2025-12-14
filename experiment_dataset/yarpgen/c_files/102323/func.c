/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102323
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */int) (unsigned char)24)) * (((/* implicit */int) (unsigned char)22)))) : (((/* implicit */int) var_6))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_3)) << ((((((~(((/* implicit */int) (unsigned char)232)))) + (253))) - (14)))));
                arr_8 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (arr_2 [i_1 + 1])));
                arr_9 [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_2)))) + (((((/* implicit */int) arr_4 [i_1 + 3] [i_1 - 1] [i_1 + 2])) * (((/* implicit */int) arr_4 [i_1 + 3] [i_1 + 1] [i_1 - 1]))))));
            }
        } 
    } 
    var_10 &= (signed char)98;
}
