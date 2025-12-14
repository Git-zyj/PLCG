/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115432
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
    var_15 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */unsigned long long int) -1564500630)) : (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) var_14)))))), (((/* implicit */unsigned long long int) var_2))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1564500629)) ? (((/* implicit */int) var_12)) : (-1)))) ? (arr_0 [i_0 + 2]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [4] [i_0])))))));
        arr_2 [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) (unsigned char)216))))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_1 [(unsigned char)20] [(_Bool)1]))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_7 [4] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) - (((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [(unsigned char)13])) >> (((1564500629) - (1564500628))))))))));
        var_18 += var_12;
    }
    var_19 ^= ((/* implicit */unsigned char) var_8);
}
