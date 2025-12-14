/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136856
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) | (arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)50735)))))) ^ (min(((-(arr_0 [i_0] [(unsigned short)4]))), (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */int) var_9);
    }
    var_16 = ((/* implicit */long long int) (((((~(((/* implicit */int) (unsigned short)50735)))) + (2147483647))) << (((((/* implicit */int) ((_Bool) (unsigned short)14801))) - (1)))));
}
