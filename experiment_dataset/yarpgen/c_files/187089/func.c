/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187089
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (17962665855243486364ULL)))) && (((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_0 [(short)2]);
                var_14 = ((/* implicit */short) arr_0 [i_0]);
                arr_6 [(signed char)5] [3U] = ((((/* implicit */_Bool) 2049664962)) ? (0ULL) : (6369320611244583794ULL));
            }
        } 
    } 
}
