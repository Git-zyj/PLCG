/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159368
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
    var_11 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (max((var_6), (var_10))) : (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 ^= ((/* implicit */_Bool) (unsigned short)22132);
                arr_7 [i_1] [(_Bool)1] = ((/* implicit */long long int) ((unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [(short)1])) - (((/* implicit */int) (unsigned short)43394))))), (min((((/* implicit */long long int) arr_5 [i_0])), (-4498721809375225574LL))))));
                var_13 -= ((/* implicit */unsigned int) arr_1 [i_1]);
            }
        } 
    } 
}
