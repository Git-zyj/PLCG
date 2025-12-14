/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106530
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
    var_11 = ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
    var_12 = ((/* implicit */long long int) ((unsigned short) var_2));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] [6ULL] = ((/* implicit */_Bool) (unsigned char)31);
                arr_8 [i_1] = ((/* implicit */long long int) arr_4 [i_1]);
            }
        } 
    } 
}
