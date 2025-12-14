/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139493
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)123)), (16ULL)));
        arr_5 [(short)3] = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_3 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))) >= (max((((/* implicit */unsigned long long int) var_2)), (arr_3 [(signed char)7]))))))));
    }
    var_13 &= ((/* implicit */int) (unsigned char)14);
    var_14 = ((((/* implicit */int) ((((18446744073709551598ULL) >> (((/* implicit */int) var_9)))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)143)))))))) != (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))));
}
