/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148638
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
    var_13 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44324)) ? (((/* implicit */int) (unsigned short)21218)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_6)) : (-2147483628))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [9LL])) ? (arr_0 [i_0]) : (arr_0 [i_0 + 1]))));
        arr_2 [(_Bool)1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */long long int) min((arr_1 [3LL] [i_0]), (arr_1 [i_0] [(signed char)7])))) < (((var_0) / (var_11)))))), (((unsigned int) (unsigned char)213))));
    }
    for (unsigned char i_1 = 4; i_1 < 13; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1]))))), (1376041069U)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) arr_0 [12U])) : (8816039273919697528LL)))) ? (((((/* implicit */long long int) var_10)) - (arr_4 [i_1]))) : (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-12)) + (2147483647))) >> (((var_11) + (2286174869492452584LL))))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_1 - 1])), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2359988285U)))))) : (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))) : (arr_0 [i_1 - 1])))));
    }
    for (unsigned char i_2 = 4; i_2 < 13; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2 - 3] [i_2] = ((/* implicit */signed char) ((unsigned char) ((max((((/* implicit */unsigned int) (unsigned short)42225)), (var_12))) == (arr_0 [i_2 - 1]))));
        arr_10 [i_2] = ((/* implicit */long long int) (unsigned char)14);
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_0))));
    }
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) max((((_Bool) (unsigned char)29)), (var_3)))))));
}
