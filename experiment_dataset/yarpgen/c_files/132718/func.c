/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132718
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) (unsigned char)6)))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32747)))))));
        var_12 *= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)4])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [(unsigned short)12] [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_13 |= ((/* implicit */unsigned int) (unsigned char)178);
        arr_5 [i_1] |= ((/* implicit */long long int) (signed char)0);
    }
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
    var_15 = ((/* implicit */_Bool) (unsigned char)19);
}
