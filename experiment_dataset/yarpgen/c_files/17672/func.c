/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17672
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
    var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_0] [(unsigned char)12]);
        arr_4 [i_0] [i_0] = ((/* implicit */short) max((((((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_0])))) + (2147483647))) << (((((/* implicit */int) (short)32767)) - (32767))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) ((short) arr_2 [i_0] [i_0]))))) + ((~(((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (arr_2 [i_0] [i_0])))))))))));
        var_15 = ((/* implicit */int) (short)-29151);
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */short) arr_0 [i_1]);
        var_16 |= ((/* implicit */unsigned short) min((2147483647), (-2094745035)));
    }
}
