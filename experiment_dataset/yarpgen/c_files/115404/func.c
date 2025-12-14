/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115404
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
    var_15 = ((/* implicit */short) max((((int) (+(579989276)))), (-303284752)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 -= ((/* implicit */short) (-((((((-(((/* implicit */int) arr_3 [i_0] [i_1])))) + (2147483647))) >> (((((arr_6 [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-25136))))) - (5629323256025874626LL)))))));
                var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(min((((/* implicit */int) (short)32767)), (303284747)))))) ? (303284773) : (((/* implicit */int) ((short) (short)19577)))));
                var_18 &= ((/* implicit */unsigned short) arr_5 [i_0] [i_0]);
            }
        } 
    } 
}
