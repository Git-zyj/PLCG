/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17571
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
    var_19 = (~((-(var_10))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned short) var_11);
        var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 3])) ? (arr_0 [i_0 + 2] [i_0 + 3]) : (arr_0 [i_0 + 2] [i_0 + 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 3])))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 3])) ? (arr_0 [i_0 + 2] [i_0 + 3]) : (arr_0 [i_0 + 2] [i_0 + 3])))));
        arr_3 [0] [i_0 - 2] = ((/* implicit */_Bool) (short)(-32767 - 1));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (short)32760))));
    }
    for (int i_1 = 4; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) (((-(((/* implicit */int) (short)-32744)))) - (((/* implicit */int) ((unsigned short) var_15)))));
        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [(unsigned short)2])) ? (arr_4 [i_1]) : (((((/* implicit */int) arr_6 [i_1 - 2] [(unsigned short)18])) & (((/* implicit */int) var_12)))))))));
    }
}
