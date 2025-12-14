/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106571
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)225)))))));
    var_15 = ((((/* implicit */long long int) ((/* implicit */int) var_8))) >= (var_0));
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) min((var_5), (max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10)))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_0 [(unsigned char)2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [(short)10])))))) ? (min((((/* implicit */unsigned int) (!(arr_1 [(short)8] [(unsigned char)8])))), (((arr_1 [(unsigned char)8] [(unsigned char)8]) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))) : (0U)));
        var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_1), (arr_0 [i_0])))), (min((((arr_2 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))))));
    }
    var_19 = ((/* implicit */short) (+(((/* implicit */int) var_2))));
}
