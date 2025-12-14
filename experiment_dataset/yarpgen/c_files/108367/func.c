/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108367
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)9)) && (((/* implicit */_Bool) (short)3536)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_1)))) ? (-9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) arr_2 [i_1 - 2] [i_1 + 1])))))));
                arr_6 [i_0] [i_0] [(signed char)6] = ((/* implicit */unsigned long long int) (((~(9223372036854775807LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_3 [i_0])) < (((((/* implicit */_Bool) 15504365802852963594ULL)) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)62)))))))))));
            }
        } 
    } 
}
