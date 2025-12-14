/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126286
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
    for (long long int i_0 = 3; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (short)18941)) ? (((/* implicit */int) arr_1 [1] [1])) : (((/* implicit */int) (short)18926)))) : (((((/* implicit */_Bool) arr_2 [(signed char)7])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) (short)18951)))))));
        var_13 = ((/* implicit */int) 11289350671472979446ULL);
        var_14 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 14; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */signed char) arr_4 [i_1 - 2]);
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24653))) : (689675469633794906LL)));
    }
    for (long long int i_2 = 3; i_2 < 14; i_2 += 2) /* same iter space */
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned long long int) 1103940847);
        arr_9 [i_2] [i_2] = min((((/* implicit */int) var_8)), (max((((/* implicit */int) (!(var_3)))), (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) var_3)))))));
    }
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((15ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)255)))))))) ? (((/* implicit */long long int) (+(((((/* implicit */_Bool) 1411109962593303732LL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) : (min((var_2), (((/* implicit */long long int) min((((/* implicit */short) var_7)), (var_1)))))))))));
    var_17 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) (unsigned short)2659))));
    var_18 = ((/* implicit */int) (signed char)-1);
    var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_0)), (var_9)));
}
