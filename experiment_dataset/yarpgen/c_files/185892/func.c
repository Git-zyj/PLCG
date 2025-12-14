/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185892
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
    var_19 += ((/* implicit */short) min((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) ((signed char) ((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_20 &= ((/* implicit */short) (unsigned char)100);
        var_21 = ((/* implicit */unsigned long long int) var_2);
    }
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [(signed char)2])) : (((/* implicit */int) arr_2 [6]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(short)14])) ? (((/* implicit */int) arr_2 [2ULL])) : (((/* implicit */int) (unsigned char)100)))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (arr_1 [i_1 + 1]) : (max((arr_1 [i_1 - 1]), (((/* implicit */int) (unsigned char)254))))));
    }
    for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_2 [i_2]), (arr_2 [i_2])))), (min((((/* implicit */int) (short)12856)), (2147483647)))));
        var_23 ^= ((/* implicit */unsigned short) arr_3 [i_2 - 1] [i_2]);
    }
    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) var_6))));
}
