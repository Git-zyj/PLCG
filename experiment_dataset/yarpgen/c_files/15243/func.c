/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15243
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
    var_14 = ((/* implicit */unsigned char) ((signed char) (((!(((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5)))) : (max((((/* implicit */int) var_5)), (var_12))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 1713679568029223285LL)) : (arr_1 [i_0]))))))));
                var_16 = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (short)-11120)) : (((/* implicit */int) (unsigned short)12288))));
            }
        } 
    } 
    var_17 ^= ((/* implicit */unsigned short) min((5085329313846672628LL), (((/* implicit */long long int) var_11))));
}
