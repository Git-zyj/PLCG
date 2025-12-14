/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106947
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = arr_2 [i_0];
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8)))))))));
    }
    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4647085823925795088ULL)) ? (9116537681910494697LL) : (((/* implicit */long long int) 0)))) - (((/* implicit */long long int) ((/* implicit */int) var_5)))));
}
