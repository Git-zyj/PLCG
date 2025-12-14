/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157792
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
    var_11 = ((/* implicit */unsigned char) var_7);
    var_12 = ((/* implicit */short) ((int) min((((/* implicit */unsigned int) var_5)), (var_3))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((arr_0 [(short)6] [(short)6]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (4322338762149789997LL) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_5)) ? (3272868061U) : (((/* implicit */unsigned int) var_8))))))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_3) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))))) << (((((((/* implicit */unsigned long long int) var_3)) + (arr_0 [i_0] [i_0]))) - (2622967099498022309ULL)))))) ? (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_2))))), (arr_1 [i_0] [i_0])))) : (-1427482424)));
        arr_3 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0] [i_0]);
    }
}
