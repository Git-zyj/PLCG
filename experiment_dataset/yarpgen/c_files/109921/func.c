/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109921
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
    var_18 = ((/* implicit */short) var_13);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) max((((/* implicit */short) (signed char)3)), (min((arr_1 [i_0]), (arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) ((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) arr_0 [i_0] [(signed char)3]))))))));
        arr_4 [i_0] = ((/* implicit */signed char) arr_0 [i_0] [(unsigned short)8]);
        var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))), ((~(((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)3))) : (var_13)))))));
    }
}
