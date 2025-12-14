/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152466
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
    var_17 = var_15;
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (arr_0 [i_0] [i_0])))) ? (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : ((((~(arr_0 [5U] [i_0]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0]))))))));
        var_19 *= ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [(unsigned short)4] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_0 [12U] [12U]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))))) : (min((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0] [i_0])))));
        var_20 = ((/* implicit */unsigned char) ((int) ((arr_0 [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_13)))))));
    }
}
