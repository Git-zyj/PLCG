/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126960
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) arr_4 [(unsigned char)24] [i_0]);
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */long long int) arr_0 [i_0] [i_1])) / (var_5))) / (((/* implicit */long long int) 2147483647))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_3);
}
