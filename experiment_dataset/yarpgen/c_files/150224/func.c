/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150224
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */short) var_1);
                var_12 ^= ((unsigned short) max((((-7561632490831557057LL) <= (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned short)17))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_7);
}
