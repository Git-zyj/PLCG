/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169466
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
    var_17 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-3))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) % (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-3)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-3))) : (((long long int) ((_Bool) (unsigned char)220)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_19 = ((unsigned int) min((((var_2) ? (arr_2 [i_0 - 2] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((unsigned int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
        var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)2))))) / (((((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_1 [i_0 - 1])))), (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))) / ((~(((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))) : (var_6)))))));
    }
}
