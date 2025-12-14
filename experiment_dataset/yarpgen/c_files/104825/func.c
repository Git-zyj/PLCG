/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104825
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
    var_20 ^= ((/* implicit */unsigned short) var_3);
    var_21 = ((/* implicit */int) var_11);
    var_22 = ((/* implicit */int) 2139095040U);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [12] [12] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_2 [i_0 + 1] [i_0 - 2] [i_0 - 2])))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0 + 2]))) : (-1498445793)));
                var_23 = ((/* implicit */unsigned long long int) 3724401244U);
                arr_6 [i_1] = ((/* implicit */unsigned long long int) (unsigned char)198);
                var_24 = ((/* implicit */unsigned short) (unsigned char)203);
            }
        } 
    } 
}
