/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151819
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
    var_15 = ((/* implicit */unsigned long long int) var_11);
    var_16 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) max((arr_2 [i_0]), (min((((/* implicit */long long int) ((signed char) (unsigned short)57512))), (((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (arr_2 [i_0])))))));
        arr_4 [12LL] [12LL] |= ((/* implicit */unsigned char) (signed char)11);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))));
    }
}
