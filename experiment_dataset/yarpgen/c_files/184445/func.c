/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184445
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_16 = arr_1 [i_0] [i_0];
        var_17 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned long long int) 2147483647)) : (arr_2 [i_0] [i_0])))) ? (-2147483647) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [18LL] [i_0])))))))), (max((((/* implicit */long long int) (unsigned char)4)), ((-9223372036854775807LL - 1LL))))));
        var_18 = ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (signed char)98))))) ? (((arr_2 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) : (max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) 2147483646);
        var_20 -= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) < (arr_2 [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (5210578180319435403ULL)));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
    {
        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2])) << (((/* implicit */int) arr_6 [i_2]))));
        arr_7 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)67)))));
    }
    var_22 += ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_13)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (var_10))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) : (max((((/* implicit */unsigned int) var_2)), (((unsigned int) var_2)))));
    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14)))) <= (((/* implicit */int) var_14))))) | (((/* implicit */int) var_0))));
}
