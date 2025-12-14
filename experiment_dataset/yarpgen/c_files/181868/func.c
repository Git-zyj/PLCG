/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181868
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 -= ((/* implicit */unsigned char) var_13);
                arr_4 [i_0] [i_0] &= ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_1])) ^ (((/* implicit */int) ((unsigned short) arr_2 [i_0] [i_0] [i_1])))))) & (min((((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0])), (arr_0 [i_0] [i_1]))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (unsigned char)127))));
}
