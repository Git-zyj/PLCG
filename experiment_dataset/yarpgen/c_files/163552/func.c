/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163552
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
    var_10 ^= ((/* implicit */int) ((signed char) var_4));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_11 = arr_3 [i_0];
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((int) (_Bool)1)))));
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((int) var_9))) ? (max((var_6), (((/* implicit */long long int) arr_1 [i_1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_1]))) : (2053525537U))))))))));
                var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 966638449U)) * (5537434665942797749ULL)));
                var_15 = ((/* implicit */short) (~(((int) 2241441753U))));
            }
        } 
    } 
}
