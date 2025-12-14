/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179386
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
    var_12 += ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) var_2)))));
    var_13 -= ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_14 -= ((((/* implicit */_Bool) arr_1 [i_0])) ? ((~((~(((/* implicit */int) (unsigned char)96)))))) : ((~(arr_1 [i_0]))));
        arr_2 [6LL] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) ^ (((((/* implicit */_Bool) (unsigned char)159)) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
}
