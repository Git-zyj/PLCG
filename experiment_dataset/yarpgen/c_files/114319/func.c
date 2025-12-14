/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114319
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0 + 1])))) & (((/* implicit */int) arr_1 [i_0 - 1]))));
        var_15 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        var_16 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) != (((/* implicit */int) arr_3 [i_0]))))) != (((/* implicit */int) var_12))));
        var_17 = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1]))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2]))) % (((unsigned long long int) var_2))));
    }
    for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) /* same iter space */
    {
        var_19 |= (-(((((/* implicit */int) arr_3 [i_1 + 2])) | (((/* implicit */int) arr_2 [i_1 + 2])))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1 - 1]))))) ? (arr_4 [i_1] [i_1]) : ((+((-(((/* implicit */int) (signed char)95))))))));
        var_20 &= ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_1 + 2])), (arr_3 [i_1 + 1])))) * (((((/* implicit */int) arr_1 [i_1 + 2])) & (((/* implicit */int) arr_1 [i_1 + 2]))))));
    }
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(var_2))), (var_4)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) var_11)))) : ((+(min((((/* implicit */int) var_7)), (var_8)))))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_2) - (((/* implicit */long long int) (+(var_8))))))) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-89))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_23 -= (signed char)-95;
}
