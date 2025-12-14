/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118522
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        var_12 = ((/* implicit */long long int) ((int) arr_0 [i_0] [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */int) var_10);
        /* LoopSeq 1 */
        for (int i_2 = 3; i_2 < 10; i_2 += 4) 
        {
            arr_12 [i_1] = arr_11 [i_1] [i_2 - 2];
            var_13 = (short)16069;
            var_14 = arr_11 [(short)2] [i_2 - 2];
        }
    }
    var_15 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
    var_16 = ((/* implicit */int) max((((/* implicit */long long int) ((((int) var_6)) | (((((/* implicit */int) (short)24753)) / (var_7)))))), (var_9)));
}
