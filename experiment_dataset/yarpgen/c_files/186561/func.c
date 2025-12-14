/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186561
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
    var_11 -= ((unsigned long long int) (_Bool)1);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : ((((_Bool)0) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) arr_5 [i_1] [i_0]))));
                    var_12 = arr_2 [i_0] [(unsigned char)9];
                    arr_9 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (~(max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))));
                }
            } 
        } 
    } 
}
