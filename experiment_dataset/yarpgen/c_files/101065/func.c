/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101065
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
    var_10 = ((/* implicit */long long int) ((((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (2081702052U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)84)))))) ^ (arr_0 [i_0 - 1])));
        var_12 |= ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
        var_13 = ((/* implicit */int) arr_0 [i_0 + 1]);
    }
    for (short i_1 = 1; i_1 < 9; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)172), ((unsigned char)84))))) ^ (-4244732446178290134LL)));
        var_15 = ((/* implicit */long long int) var_2);
    }
    for (short i_2 = 1; i_2 < 9; i_2 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_9) : (var_9)))) ? (((var_3) ^ (((/* implicit */unsigned long long int) 9223372036854775807LL)))) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) var_1)))))));
        var_17 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (max((((arr_0 [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [10]))))), (((/* implicit */unsigned long long int) max((arr_4 [8]), ((unsigned short)8781)))))) : (((/* implicit */unsigned long long int) var_0))));
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 9; i_3 += 2) /* same iter space */
    {
        var_18 *= ((/* implicit */unsigned short) arr_6 [i_3 - 1]);
        var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))))) : (((/* implicit */unsigned long long int) arr_3 [i_3 - 1] [i_3 + 2]))));
    }
    var_20 = ((/* implicit */unsigned short) var_1);
}
