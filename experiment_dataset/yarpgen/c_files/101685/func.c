/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101685
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
    var_12 = ((/* implicit */_Bool) (short)19074);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = (~(min((var_11), (16145931162720610065ULL))));
                var_13 &= ((/* implicit */short) (((!(((/* implicit */_Bool) 9223372036854775807LL)))) || (((/* implicit */_Bool) (short)-2227))));
            }
        } 
    } 
}
