/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145083
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [(unsigned char)14] = ((/* implicit */short) arr_1 [4U]);
        arr_3 [i_0] [(short)5] = ((((((/* implicit */int) var_9)) | (1622866048))) + (((/* implicit */int) (signed char)97)));
        arr_4 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(unsigned char)11])) || (((/* implicit */_Bool) var_2)))))));
        arr_5 [(signed char)15] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) var_1));
    }
    var_13 = ((/* implicit */_Bool) ((long long int) -1878989460));
    var_14 = ((/* implicit */unsigned long long int) -1878989460);
}
