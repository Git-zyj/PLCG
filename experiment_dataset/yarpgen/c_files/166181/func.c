/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166181
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
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_0] [i_0])) > (((((/* implicit */int) (unsigned short)47486)) / (((/* implicit */int) (unsigned short)47486)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_0])) - (28467)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)47476)) ^ (((/* implicit */int) (unsigned short)47486))));
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) arr_6 [i_1]);
    }
    var_20 = ((/* implicit */unsigned short) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
}
