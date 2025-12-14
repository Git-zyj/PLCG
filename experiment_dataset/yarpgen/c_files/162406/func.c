/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162406
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
    var_17 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */signed char) arr_6 [i_2] [9LL] [i_0]);
                    arr_9 [i_0] [i_1 + 1] [i_2 - 1] [i_1 + 1] = ((/* implicit */unsigned short) (-(max((((/* implicit */int) (unsigned short)12317)), ((~(((/* implicit */int) (_Bool)0))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (+(var_10))))));
}
