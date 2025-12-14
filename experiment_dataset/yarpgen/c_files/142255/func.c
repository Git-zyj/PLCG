/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142255
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
    var_12 = ((/* implicit */long long int) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((arr_1 [i_0 + 1]) ? (((/* implicit */int) arr_1 [i_0 - 3])) : (((/* implicit */int) arr_1 [i_0 + 1]))));
        arr_2 [i_0] [i_0 - 2] = ((/* implicit */unsigned char) var_11);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */int) var_11);
        var_15 = ((((/* implicit */int) var_10)) == (((/* implicit */int) var_5)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        arr_7 [i_2] = ((/* implicit */unsigned int) arr_5 [i_2]);
        arr_8 [i_2] = ((/* implicit */_Bool) arr_6 [i_2]);
    }
}
