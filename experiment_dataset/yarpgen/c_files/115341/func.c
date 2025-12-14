/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115341
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
    var_10 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
    var_11 ^= ((/* implicit */short) ((((/* implicit */unsigned int) (~((-(((/* implicit */int) var_9))))))) & (4190968301U)));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_12 = ((((/* implicit */unsigned long long int) 4190968291U)) | (((unsigned long long int) arr_1 [i_0 - 3] [i_0 - 2])));
        var_13 = ((/* implicit */int) arr_0 [i_0] [i_0 - 1]);
    }
    for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) min(((short)-2), (arr_2 [i_1]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))));
        var_15 = ((/* implicit */int) max((max((arr_3 [i_1]), (((/* implicit */unsigned short) arr_2 [i_1])))), (min((((/* implicit */unsigned short) arr_2 [i_1])), (arr_3 [i_1 + 2])))));
    }
}
