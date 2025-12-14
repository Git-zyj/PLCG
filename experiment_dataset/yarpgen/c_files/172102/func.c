/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172102
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) + (2147483647))) << (((18446744073709551607ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((((/* implicit */int) var_7)) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))))) : (var_9)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = min((((/* implicit */int) ((min((-6207597542358362262LL), (((/* implicit */long long int) (signed char)78)))) == (((/* implicit */long long int) ((((/* implicit */int) var_14)) & (((/* implicit */int) arr_2 [i_0] [(_Bool)1])))))))), (min((((((/* implicit */int) (signed char)-66)) & (((/* implicit */int) arr_2 [1LL] [i_1])))), (((/* implicit */int) var_4)))));
                var_18 = arr_2 [i_1 + 2] [i_0];
            }
        } 
    } 
}
