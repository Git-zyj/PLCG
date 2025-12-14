/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11556
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned short) min((var_10), (((unsigned short) arr_3 [i_0 - 1]))));
        arr_4 [i_0] = ((int) ((((/* implicit */int) (unsigned char)95)) * (((/* implicit */int) ((unsigned char) (unsigned short)65535)))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1 - 1])) ? (arr_8 [i_1 + 2]) : (arr_8 [i_1 + 1])));
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) arr_6 [(_Bool)1]))));
        var_12 += ((/* implicit */int) ((((/* implicit */int) (signed char)-121)) < (-1321786502)));
    }
    var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
}
