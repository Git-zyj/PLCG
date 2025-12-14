/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172705
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
    var_11 = ((/* implicit */_Bool) ((short) ((((((/* implicit */_Bool) (signed char)14)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)1303))))) >= (((/* implicit */long long int) (+(((/* implicit */int) (signed char)22))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [10U])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) max((((/* implicit */short) arr_1 [i_0] [i_0])), ((short)1329))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        arr_6 [(short)3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) (short)1329)))))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */int) (short)-5967)) > (((/* implicit */int) (short)-1))));
    }
    var_14 = ((/* implicit */unsigned long long int) var_2);
}
