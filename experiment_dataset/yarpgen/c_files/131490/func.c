/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131490
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
    for (long long int i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_5 [i_0] [(short)6] [i_1]);
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) 8776867501120643086LL);
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -8776867501120643087LL)) ? (((/* implicit */int) ((unsigned char) (short)-26921))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) > (var_10))))))) - (((((/* implicit */_Bool) 1489649219U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 8776867501120643094LL)))))) : (((((/* implicit */_Bool) (short)21680)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
}
