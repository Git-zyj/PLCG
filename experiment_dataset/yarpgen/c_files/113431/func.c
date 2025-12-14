/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113431
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
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_11))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_15 = ((((/* implicit */int) (unsigned short)12288)) >= (((/* implicit */int) (unsigned char)111)));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48488)) ? (-8151337541335866765LL) : (((/* implicit */long long int) (-2147483647 - 1)))))) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 1966489743496549743LL)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (!(arr_5 [i_1])));
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 1] [(short)4]))) != (((unsigned long long int) (unsigned short)56592))));
    }
}
