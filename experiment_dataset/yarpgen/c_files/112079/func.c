/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112079
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_20 ^= ((/* implicit */unsigned short) ((int) (~(-1289560482))));
                var_21 ^= ((/* implicit */unsigned short) arr_5 [i_0] [i_0]);
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 1])) ? (2139095040) : (((/* implicit */int) ((unsigned short) var_7))))), (((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) ((unsigned short) arr_3 [i_0] [i_0]))))))))));
            }
        } 
    } 
    var_23 = ((signed char) (~(((/* implicit */int) (unsigned short)28123))));
}
