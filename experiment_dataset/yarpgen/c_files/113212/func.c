/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113212
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (((-(524287U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
        var_12 += ((/* implicit */int) ((unsigned int) arr_1 [i_0]));
        arr_4 [i_0] [1U] = ((/* implicit */int) 5862313261529385432LL);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_0 [(short)4])))) ? (((524287U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [1U] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_1]))));
    }
    var_14 = ((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned char) ((((4294443008U) ^ (877873828U))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
    var_15 = ((/* implicit */long long int) ((var_9) / (((/* implicit */int) var_1))));
}
