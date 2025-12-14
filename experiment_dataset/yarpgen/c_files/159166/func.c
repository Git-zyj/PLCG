/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159166
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
    var_11 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((arr_1 [i_0] [8]) ? (((/* implicit */int) arr_1 [i_0] [(_Bool)1])) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_0 [(_Bool)1]))) && (((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_6)))))))));
        var_12 = ((/* implicit */unsigned char) min((var_12), (arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_1 [i_0] [1LL]))))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(_Bool)1])) ? (((/* implicit */int) min((arr_6 [i_1]), (arr_6 [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(unsigned char)10])) ^ (((/* implicit */int) arr_7 [9]))))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [(unsigned char)6])))) : (((/* implicit */int) var_5))))));
        arr_8 [i_1] = max((((/* implicit */unsigned char) arr_1 [i_1] [i_1])), (max((min((((/* implicit */unsigned char) arr_7 [i_1])), (var_10))), (((unsigned char) arr_5 [i_1])))));
        var_14 = ((/* implicit */_Bool) min((var_14), (arr_6 [i_1])));
        var_15 *= ((/* implicit */_Bool) arr_5 [i_1]);
    }
}
