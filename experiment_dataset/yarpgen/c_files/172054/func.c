/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172054
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
    var_11 = ((/* implicit */int) var_2);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((5938248773572710173ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236)))))))) ? (((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3]))))) : (((/* implicit */unsigned long long int) arr_5 [i_0 - 3]))));
                    var_13 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (5938248773572710172ULL))) / (min((((/* implicit */unsigned long long int) var_10)), (15064359471513153375ULL)))));
                }
            } 
        } 
    } 
}
