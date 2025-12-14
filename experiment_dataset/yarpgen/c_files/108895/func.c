/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108895
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
    var_20 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (unsigned short)10460)) * (((/* implicit */int) ((_Bool) var_12))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_21 -= ((/* implicit */unsigned int) ((long long int) ((long long int) ((arr_1 [i_0 + 3] [i_0 + 3]) | (((/* implicit */int) arr_0 [i_0 + 2]))))));
                arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_0 + 1]))))) ? (((/* implicit */int) arr_0 [i_1])) : (arr_1 [i_0 - 3] [i_1])));
                var_22 = arr_5 [i_0 + 1] [i_0 + 2] [i_0 - 2];
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_13);
}
