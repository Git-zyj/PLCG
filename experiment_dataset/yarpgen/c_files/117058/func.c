/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117058
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_3))))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)0))))));
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned char)7)), ((-9223372036854775807LL - 1LL))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            var_17 = max((((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (arr_2 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) arr_3 [i_0] [i_1])))))), (max((((arr_1 [i_0] [i_1]) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)37563))))))));
            arr_4 [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1 + 2])) ? (((/* implicit */long long int) (+(352725144)))) : ((-((+(arr_2 [i_1] [i_1] [i_0 + 1])))))));
            var_18 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_1]), (((/* implicit */unsigned int) arr_1 [i_0] [i_1]))))) && (((/* implicit */_Bool) 125829120U))))) > (((/* implicit */int) (short)-7224))));
        }
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((_Bool) arr_0 [i_0 + 1]))), (max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1]))))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        arr_7 [i_2] &= arr_5 [i_2];
        arr_8 [i_2] [i_2] &= ((/* implicit */_Bool) (+(((unsigned int) var_9))));
    }
    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */short) ((_Bool) 4169138202U));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (-9223372036854775807LL - 1LL)))));
        var_21 = ((((/* implicit */_Bool) min((arr_10 [i_3]), (((/* implicit */unsigned int) arr_5 [i_3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3])) ? (arr_10 [i_3]) : (arr_10 [i_3])))) : (((((/* implicit */unsigned long long int) arr_10 [i_3])) / (1494370299415240167ULL))));
    }
}
