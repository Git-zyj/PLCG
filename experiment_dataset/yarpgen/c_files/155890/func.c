/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155890
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((short) ((short) arr_2 [(short)6])))));
        arr_4 [i_0] = arr_2 [i_0];
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (((((+(((/* implicit */int) max((arr_3 [i_0] [(short)4]), (arr_3 [i_0] [(short)6])))))) + (2147483647))) << (((((/* implicit */int) max((arr_1 [i_0] [(short)1]), (arr_2 [(short)6])))) - (25845))))))));
    }
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) var_2)))))));
}
