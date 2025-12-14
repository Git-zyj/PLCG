/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189174
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
    var_19 = ((/* implicit */int) 4248728655U);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_20 *= ((/* implicit */unsigned int) ((int) (!((!((_Bool)1))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [(_Bool)1])) : (-763772427))) <= (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */short) max((((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (arr_4 [i_1] [i_1]))))))), ((+(408103356)))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_3 [i_1])) ? (max((((/* implicit */int) (_Bool)1)), (arr_3 [i_1]))) : (((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_1])) ? (((/* implicit */int) (unsigned short)61542)) : (((/* implicit */int) (_Bool)1))))))));
        var_21 = ((/* implicit */int) arr_4 [i_1] [i_1]);
    }
}
