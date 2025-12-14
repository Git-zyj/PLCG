/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126242
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
    var_13 |= 368396489U;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */_Bool) 14U);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) -1);
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) 1451644016);
            var_16 ^= ((/* implicit */unsigned int) -1);
        }
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 10; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */int) 4294967282U);
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (_Bool)0))));
    }
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (_Bool)1))));
    var_20 = ((/* implicit */unsigned long long int) 14U);
}
