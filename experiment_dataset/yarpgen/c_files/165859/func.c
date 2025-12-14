/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165859
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
        arr_5 [i_0] &= ((/* implicit */unsigned char) var_3);
        arr_6 [i_0] [14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)132)) ? (arr_0 [i_0]) : (((/* implicit */int) arr_3 [i_0])))) : (max((arr_0 [(short)8]), (((/* implicit */int) arr_2 [i_0]))))));
        arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (arr_0 [3ULL]) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
    }
    var_10 = ((/* implicit */signed char) (+(var_6)));
}
