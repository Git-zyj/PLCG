/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147966
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 = min(((~(((/* implicit */int) (unsigned short)50147)))), (max((2147483643), (((((/* implicit */_Bool) (unsigned short)53857)) ? (var_5) : (((/* implicit */int) arr_2 [i_1 - 2])))))));
                var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)11679)) ? (min((4294967286U), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2)))))) >> (((((/* implicit */_Bool) 807402580)) ? (((/* implicit */unsigned long long int) 9U)) : (18446744073709551615ULL)))));
            }
        } 
    } 
    var_15 = ((((/* implicit */int) (unsigned short)53854)) - (2147483643));
}
