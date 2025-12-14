/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184339
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) ^ (var_1))) : (((/* implicit */unsigned long long int) var_0))))) ? (var_9) : ((((~(((/* implicit */int) var_16)))) & (((/* implicit */int) max((((/* implicit */unsigned short) var_16)), (var_6)))))))))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (var_13))))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) /* same iter space */
    {
        var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (short)16320)) ? (1311397000) : (((/* implicit */int) (unsigned short)15210))))))) : (((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (arr_0 [i_0 + 4]) : (arr_0 [i_0 - 1])))));
        var_21 = ((/* implicit */short) 2147483647);
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0 - 2])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (max((((/* implicit */int) arr_1 [i_0] [(signed char)13])), (-2147483630)))))) : (arr_0 [i_0])));
        arr_2 [(unsigned short)18] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_2), (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1]))))) ? (arr_0 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0 + 4] [i_0 + 2]), (arr_1 [i_0 + 4] [i_0 + 3])))))));
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 16; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) arr_5 [i_1])) : (var_17))) * (((/* implicit */int) arr_1 [16ULL] [i_1 + 3]))));
        var_24 &= ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (0ULL) : (((/* implicit */unsigned long long int) var_17)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 3])))));
    }
    var_25 &= ((/* implicit */unsigned long long int) 33292288);
}
