/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158558
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
    var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */short) var_19)), (var_14))))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))), (max((((/* implicit */unsigned int) var_19)), (var_13))))) : (((((/* implicit */_Bool) var_7)) ? (max((var_17), (2972870681U))) : (((2972870681U) << (((var_1) - (8391231108251606101LL)))))))));
    var_21 = ((/* implicit */long long int) var_10);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] |= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
        var_22 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) - (((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */int) var_16))))))) ? (max((((((/* implicit */_Bool) 2972870681U)) ? (673742829U) : (2972870699U))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (var_1)))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_1 [i_0]))))))))));
    }
    var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (_Bool)1)), (-1607518195976557263LL)));
}
