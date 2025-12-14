/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174890
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
    var_13 = ((/* implicit */signed char) var_10);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 3])))) & (((/* implicit */int) arr_0 [i_0 - 2] [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) max((arr_0 [i_0 - 3] [i_0]), (arr_1 [i_0]))))))));
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3835449824U)) ? (459517472U) : (3835449824U)))) ? (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_11))), (((/* implicit */long long int) (unsigned short)21056)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [(short)10] [i_0 - 3])))))));
        var_14 |= ((/* implicit */unsigned long long int) arr_0 [i_0 + 1] [i_0 - 1]);
    }
    var_15 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 748878570)) : (var_11))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0)))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned int) var_8)), (var_12))) : (min((((/* implicit */unsigned int) var_5)), (var_10))))))));
    var_16 = ((/* implicit */signed char) var_6);
}
