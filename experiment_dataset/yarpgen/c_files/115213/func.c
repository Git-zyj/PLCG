/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115213
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
    var_12 = ((/* implicit */int) ((short) min(((+(((/* implicit */int) var_4)))), (min((var_0), (((/* implicit */int) var_6)))))));
    var_13 = ((/* implicit */unsigned char) 2147483640);
    var_14 = ((/* implicit */short) 2147483644);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), (var_4)))) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0]))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((2147483612) & (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */long long int) var_6);
        arr_4 [i_0] [i_0] = ((/* implicit */short) var_9);
        arr_5 [i_0] |= ((unsigned char) (~(min((((/* implicit */unsigned int) 1945310777)), (arr_1 [i_0])))));
    }
}
