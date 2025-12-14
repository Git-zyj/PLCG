/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14635
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
    var_14 += ((/* implicit */unsigned int) ((signed char) var_1));
    var_15 = ((/* implicit */signed char) var_3);
    var_16 = ((/* implicit */signed char) var_2);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_17 = arr_1 [(signed char)14];
        var_18 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 4294967280U)))) && (((/* implicit */_Bool) -1))));
    }
    for (short i_1 = 3; i_1 < 17; i_1 += 4) 
    {
        arr_6 [i_1 + 1] = ((/* implicit */signed char) arr_3 [i_1]);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((137170518016LL) << (((((/* implicit */int) (short)-29882)) + (29884)))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 1]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_1]))))) : ((-(var_0)))));
    }
    var_20 = ((/* implicit */long long int) var_12);
}
