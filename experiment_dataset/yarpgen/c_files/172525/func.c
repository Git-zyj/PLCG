/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172525
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((short) ((unsigned long long int) (short)0)))), (max((arr_0 [i_0]), (((/* implicit */long long int) max((arr_1 [17LL] [i_0]), (arr_1 [i_0] [i_0]))))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_1 [i_0] [i_0]))));
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((long long int) ((((/* implicit */int) max((((/* implicit */short) var_13)), (arr_3 [i_0] [i_0])))) << (((((long long int) var_13)) - (3LL)))))))));
        arr_5 [13LL] [13LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) max((max((2584921806U), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))), (((/* implicit */unsigned int) max((arr_3 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))))));
    }
    var_22 = ((/* implicit */_Bool) ((unsigned short) min((max((((/* implicit */int) var_4)), (-651888778))), (((/* implicit */int) var_13)))));
    var_23 = ((/* implicit */short) ((unsigned int) var_0));
}
