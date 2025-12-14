/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169025
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
    var_15 = ((/* implicit */_Bool) var_0);
    var_16 = ((/* implicit */_Bool) 9223372036854775807LL);
    var_17 = ((/* implicit */unsigned char) -1119218832321487030LL);
    var_18 = ((/* implicit */unsigned int) (_Bool)0);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_19 = (unsigned char)252;
                arr_4 [i_0] [i_0] = (unsigned char)52;
                var_20 *= ((/* implicit */unsigned long long int) arr_2 [i_1 + 1]);
            }
        } 
    } 
}
