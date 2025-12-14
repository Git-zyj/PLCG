/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173195
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) - (((/* implicit */int) ((((/* implicit */_Bool) 1852881496)) && (((/* implicit */_Bool) -1852881496)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) 1852881477)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 4]))) : (((((/* implicit */unsigned long long int) var_2)) - (arr_0 [i_0 + 3] [i_0])))));
        var_12 = ((/* implicit */long long int) ((arr_0 [i_0 + 2] [i_0]) | (((/* implicit */unsigned long long int) 1852881496))));
        var_13 = var_9;
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 - 2])) ? (var_1) : (((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1 - 2]))));
        var_14 = ((/* implicit */short) ((((/* implicit */long long int) 511U)) | (arr_3 [i_1 - 1])));
    }
    var_15 = ((/* implicit */unsigned char) var_5);
}
