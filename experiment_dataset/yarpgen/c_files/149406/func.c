/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149406
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
    var_10 = ((/* implicit */signed char) var_3);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] |= ((/* implicit */long long int) ((((/* implicit */int) var_9)) >> ((((+(9223372036854775807LL))) - (9223372036854775790LL)))));
                    arr_10 [i_0] [17LL] [i_0] [i_0] = max(((!(((/* implicit */_Bool) 268435455LL)))), ((!(((/* implicit */_Bool) (short)32767)))));
                }
            } 
        } 
    } 
}
