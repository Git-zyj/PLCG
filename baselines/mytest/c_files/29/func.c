/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/29
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
    for (int i_0 = 1; i_0 < 6; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((arr_0 [i_0 + 4] [i_0 + 1]) ? (arr_3 [i_0 + 4] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))))));
        var_14 = ((/* implicit */unsigned int) ((arr_3 [4U] [i_0 + 1]) & (((((/* implicit */_Bool) arr_3 [i_0 + 4] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_3 [i_0] [i_0])))));
    }
    for (int i_1 = 1; i_1 < 6; i_1 += 2) /* same iter space */
    {
        var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))) >= (10580293716431278915ULL)));
        arr_6 [(unsigned short)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max((arr_2 [4]), (((/* implicit */unsigned char) min((((/* implicit */signed char) arr_1 [6ULL])), (var_2)))))))));
        arr_7 [i_1] = ((/* implicit */signed char) max(((((+(((/* implicit */int) arr_0 [i_1] [i_1])))) & (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_5 [i_1 + 3])) : (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [(signed char)8])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_1])))) > (((/* implicit */int) ((_Bool) arr_0 [i_1] [i_1 + 1]))))))));
        var_16 = var_5;
    }
    var_17 *= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (var_4))))) / (min((((/* implicit */unsigned long long int) var_10)), (var_0))))) >= (((((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) & (((1218358400389621610ULL) % (var_0)))))));
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) 9339811147929953547ULL))));
    var_19 = ((((/* implicit */int) var_7)) * (((/* implicit */int) (unsigned short)37788)));
}
