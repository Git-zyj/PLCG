/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188794
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
    var_20 = var_11;
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((arr_1 [(unsigned char)6] [i_0]) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_7)))))) : (max((((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 + 1])), (arr_0 [i_0 + 1]))))))));
        arr_2 [i_0] &= (_Bool)1;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = arr_3 [i_1];
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_4 [i_1]))) ? (max(((-(((/* implicit */int) arr_4 [i_1])))), (((/* implicit */int) arr_3 [i_1])))) : (min((((/* implicit */int) arr_4 [i_1])), (((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (var_5) : (((/* implicit */int) (short)6448))))))));
        var_24 += ((/* implicit */unsigned int) min((9LL), (9223372036854775807LL)));
        arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_18), (arr_4 [i_1])))) ? ((~(((/* implicit */int) max(((signed char)7), (arr_3 [i_1])))))) : (((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */signed char) ((_Bool) var_11))))))));
        var_25 = ((/* implicit */unsigned char) min((var_25), (((unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (short)-2229)) : (((/* implicit */int) arr_3 [i_1])))))));
    }
    var_26 = ((/* implicit */int) var_8);
    var_27 = ((/* implicit */signed char) var_11);
}
