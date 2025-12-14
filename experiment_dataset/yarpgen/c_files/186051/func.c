/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186051
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((long long int) min((((/* implicit */unsigned char) arr_1 [i_0] [i_0])), (var_4))))));
        var_12 = ((/* implicit */int) arr_0 [i_0] [(short)3]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */short) (_Bool)0);
        var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_4 [i_1] [i_1]), (arr_4 [12] [i_1]))))));
    }
    for (short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) ((int) arr_5 [i_2] [i_2]))))));
        var_14 = ((/* implicit */_Bool) 2083054869);
    }
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((max((((/* implicit */long long int) (_Bool)0)), (var_5))), (((/* implicit */long long int) ((_Bool) var_5))))))));
    var_16 = ((/* implicit */unsigned long long int) var_4);
    var_17 = ((/* implicit */unsigned long long int) (!((_Bool)0)));
    var_18 = ((/* implicit */unsigned long long int) var_1);
}
