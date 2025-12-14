/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125233
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6)))), (((var_12) + (arr_0 [i_0])))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)31)) ? (var_12) : (-1404654041))) <= (-1165584833))))) & (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -1165584833)), (2861809781U))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) var_14)) ? (arr_5 [i_1]) : (min((((/* implicit */int) (short)-19470)), (arr_5 [(short)3]))))), (((/* implicit */int) (short)-13))));
        var_19 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) (((~(2861809781U))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_5)))))))), (((((/* implicit */_Bool) arr_3 [6U])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1])) & (((/* implicit */int) (_Bool)1))))) : (var_11)))));
        var_20 = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_1 [i_1]), (arr_4 [i_1]))))));
    }
    var_21 = ((/* implicit */short) var_14);
    var_22 = ((/* implicit */int) var_14);
}
