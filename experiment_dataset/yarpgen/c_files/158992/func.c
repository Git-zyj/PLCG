/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158992
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
    var_11 *= var_0;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */int) max((var_12), (((((/* implicit */int) max((((/* implicit */short) arr_3 [i_0] [i_0] [i_1])), (arr_1 [i_0])))) - (((/* implicit */int) ((((/* implicit */int) (signed char)45)) < (((/* implicit */int) (short)-30850)))))))));
                var_13 ^= ((/* implicit */int) arr_1 [i_0]);
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_10);
    var_15 = ((/* implicit */short) ((68719476735ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30829)))));
}
