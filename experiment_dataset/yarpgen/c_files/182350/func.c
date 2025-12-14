/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182350
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
    for (int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 |= ((/* implicit */long long int) ((unsigned char) ((arr_1 [i_0 + 3]) | (arr_1 [i_0 + 3]))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_5 [i_0 + 3] [i_0] [i_0 + 1]), (arr_5 [i_0 + 3] [i_0] [i_0 + 1]))))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_0 + 2] [i_0] [i_0])), ((unsigned short)4)))) & (((((/* implicit */int) (unsigned short)5746)) + (((/* implicit */int) arr_4 [i_0 + 3] [i_0] [i_0]))))));
                var_17 = ((/* implicit */signed char) var_12);
            }
        } 
    } 
    var_18 ^= ((/* implicit */int) var_0);
    var_19 = ((/* implicit */signed char) var_14);
}
