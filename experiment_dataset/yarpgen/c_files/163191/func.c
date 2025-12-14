/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163191
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
    var_19 = ((/* implicit */long long int) var_6);
    var_20 = ((/* implicit */short) var_15);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0 - 3] [i_0 + 2]))) ? (((/* implicit */long long int) ((int) arr_1 [i_0 - 3]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_1 [i_0 - 1])) : (arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */_Bool) (~(arr_2 [i_0] [i_0 + 3])));
        var_22 = ((/* implicit */int) arr_1 [(short)16]);
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_13))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_2 [i_0 + 2] [i_0 + 1]) << (((arr_2 [19ULL] [i_0 - 2]) - (911253141554850278LL)))))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0 - 1])) ? (arr_2 [i_0 - 3] [i_0 - 1]) : (arr_2 [i_0 - 3] [i_0 - 1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [19ULL])))) ? (((/* implicit */long long int) (~(arr_1 [i_0 - 1])))) : (((long long int) var_0))))));
    }
    var_23 = ((/* implicit */_Bool) var_2);
}
