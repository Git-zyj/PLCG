/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176934
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [(short)3] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) ((short) ((((/* implicit */int) (short)32767)) << ((((((-2147483647 - 1)) - (-2147483634))) + (14))))))), (872452995)));
                arr_6 [7] = var_10;
                arr_7 [(short)5] [(short)5] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0] [i_1]) : (-828021449)))), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)21267))) : (var_8)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)10927)) : (899687248))))) / (((/* implicit */int) (short)-21284))));
    var_17 = ((/* implicit */int) (((-(((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15861))))))) >= (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 11924912124774378565ULL)) ? (67076096) : (var_5)))))));
    var_18 = ((/* implicit */unsigned long long int) var_5);
}
