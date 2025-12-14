/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150609
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_2 [i_0] [2]))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (arr_1 [i_0]))) >= (min((arr_1 [i_0]), (arr_1 [i_0]))))) ? (((long long int) ((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */int) (unsigned short)21)) : (((/* implicit */int) (short)22250))))) : (((long long int) max((arr_2 [i_0] [i_0]), (var_14))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_2 [10] [10]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) var_14);
        var_21 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((int) var_2)), ((-(((/* implicit */int) (unsigned short)65515))))))) - (arr_5 [i_1] [i_1])));
        var_22 = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_2 [4ULL] [4ULL])), (((arr_5 [i_1] [i_1]) - (((/* implicit */long long int) var_16))))));
        arr_9 [i_1] [i_1] = min((((long long int) (!(((/* implicit */_Bool) arr_0 [i_1]))))), (max((arr_0 [i_1]), (((/* implicit */long long int) arr_2 [i_1] [4U])))));
        var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((min((arr_7 [i_1]), (((/* implicit */long long int) (-2147483647 - 1))))) != (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
    {
        arr_13 [i_2] = ((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) (short)22250)) ? (((/* implicit */int) var_9)) : (var_14))))), (((/* implicit */int) (signed char)127))));
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 200447984)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))))), (var_12))))));
    }
    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) var_6))));
}
