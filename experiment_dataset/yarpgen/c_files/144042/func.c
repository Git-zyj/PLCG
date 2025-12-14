/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144042
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((((arr_2 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (arr_3 [i_0] [i_0]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_0]) | (arr_1 [i_0])))) && (((/* implicit */_Bool) (-(arr_3 [i_0] [i_0])))))))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */short) arr_2 [(signed char)2])), (arr_0 [i_0])))) ? ((-(arr_1 [8]))) : (((arr_1 [(_Bool)1]) * (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned char)6]))))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (arr_3 [i_0] [i_0])))) & (((((/* implicit */_Bool) arr_1 [(unsigned char)10])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0]))))))))))));
    }
    var_19 = ((/* implicit */short) min(((+(var_1))), (((/* implicit */long long int) var_6))));
    var_20 = ((/* implicit */long long int) max((max((var_14), (((/* implicit */unsigned long long int) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) var_7)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_16)) + (2147483647))) << (((((/* implicit */int) var_6)) - (35)))))) >= (((var_12) - (((/* implicit */unsigned long long int) var_10)))))))));
}
