/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149075
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0] [i_0])), (arr_1 [i_0])))) : (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */short) arr_0 [i_0] [i_0])))))))));
        var_18 = ((/* implicit */unsigned short) max((max((((/* implicit */int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))), (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] = max((((/* implicit */int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0] [i_0])), (arr_1 [i_0])))))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) min((var_4), (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */long long int) var_7))))))));
    var_20 = ((/* implicit */long long int) max((var_20), (var_4)));
    var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */unsigned int) var_2)), (var_12))) : (((/* implicit */unsigned int) min((var_7), (((/* implicit */int) var_10)))))));
    var_22 = ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_12));
}
