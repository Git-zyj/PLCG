/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115947
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
    for (long long int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_14 ^= ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)254)) && (((/* implicit */_Bool) 72793945717146709ULL))))));
                var_15 = arr_7 [i_1] [i_1] [i_0 - 1];
                var_16 ^= ((/* implicit */unsigned short) ((arr_5 [i_0 + 1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
            }
        } 
    } 
    var_17 = min((((/* implicit */unsigned int) var_1)), (max((((((/* implicit */_Bool) 4088901547U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2048))) : (2621531917U))), (((/* implicit */unsigned int) var_13)))));
}
