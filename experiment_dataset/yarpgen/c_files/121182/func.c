/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121182
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
    var_17 += ((/* implicit */short) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (short)-27313)) ? (((/* implicit */int) (short)8887)) : (((/* implicit */int) (unsigned short)14917)))));
        var_18 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)-32756)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-10626))) >= (arr_1 [i_0])))) : (((/* implicit */int) arr_2 [i_0]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) (_Bool)1);
        var_19 = ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_1]))));
        var_21 = ((/* implicit */unsigned char) arr_2 [i_1]);
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((/* implicit */int) var_2)) - (1028)))));
    }
}
