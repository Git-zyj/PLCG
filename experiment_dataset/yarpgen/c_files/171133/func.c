/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171133
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (unsigned short)24367);
        arr_3 [i_0] = ((/* implicit */int) var_13);
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (-7253528495515776459LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41159)))))) && (((/* implicit */_Bool) (unsigned char)4))));
    }
    var_20 = ((/* implicit */int) var_16);
    var_21 = ((/* implicit */unsigned char) (unsigned short)24367);
    /* LoopSeq 1 */
    for (short i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        arr_9 [i_1] = ((/* implicit */short) 225040395);
        arr_10 [i_1] = ((/* implicit */_Bool) min((arr_8 [i_1 + 1] [i_1 - 1]), (arr_8 [i_1] [i_1])));
        var_22 ^= ((/* implicit */unsigned long long int) ((unsigned char) arr_8 [i_1 - 1] [i_1 - 1]));
    }
}
