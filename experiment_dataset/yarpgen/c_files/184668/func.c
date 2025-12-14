/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184668
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
    var_20 = ((/* implicit */unsigned int) var_15);
    var_21 = ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_7)));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) min(((~(max((((/* implicit */long long int) arr_1 [i_0 + 2])), (9223372036854775807LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) -1674081977)), (arr_0 [i_0 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -9144175352205330063LL)))))) : (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(arr_1 [i_0]))), ((+(arr_1 [i_0])))))) ? (arr_0 [(short)1]) : (min((min((arr_1 [i_0 + 1]), (((/* implicit */unsigned int) arr_2 [i_0])))), (arr_0 [i_0 + 2])))));
        arr_4 [i_0] = ((/* implicit */long long int) arr_0 [i_0 + 3]);
    }
    for (long long int i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        var_23 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_5 [i_1 + 1] [i_1 + 1]), (arr_5 [i_1 + 1] [i_1 + 1]))))));
        var_24 = min((((/* implicit */short) min((arr_6 [i_1 + 1]), (arr_6 [i_1 + 1])))), (min((arr_7 [i_1 + 1]), (arr_5 [i_1 - 1] [i_1 - 1]))));
        var_25 = min((((min((((/* implicit */int) (short)-20713)), (-1674081983))) ^ (((/* implicit */int) arr_5 [i_1 + 1] [i_1])))), (((arr_6 [i_1 + 1]) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1])) : (((/* implicit */int) arr_6 [i_1 - 1])))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_11 [i_2] [i_2] = ((/* implicit */_Bool) 3983084669762674461LL);
            var_26 = ((/* implicit */int) arr_7 [i_1]);
            arr_12 [i_2] [i_2] = ((/* implicit */long long int) arr_8 [i_2]);
        }
        for (unsigned int i_3 = 1; i_3 < 23; i_3 += 2) 
        {
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((((/* implicit */int) (signed char)28)), (1674081996)))))) || (((/* implicit */_Bool) arr_10 [i_1] [10LL]))));
            var_28 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) arr_5 [i_3 + 1] [i_1 + 1])), (((arr_9 [i_1] [i_3 + 1]) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_3]))))))));
        }
        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            var_29 = ((/* implicit */_Bool) min((min((((((/* implicit */long long int) -1674081977)) - (-9116872347730975787LL))), (((/* implicit */long long int) -555476339)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1674081977)), (13ULL)))))))));
            var_30 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (((~(((/* implicit */int) arr_16 [i_1])))) & (((/* implicit */int) (short)-26061))))), (max((((/* implicit */long long int) (!(arr_6 [i_1])))), (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 1]))) - (arr_13 [i_4] [i_1 + 1])))))));
        }
        var_31 = ((/* implicit */signed char) min((((/* implicit */int) arr_16 [i_1 - 1])), ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1 + 1])) || (((/* implicit */_Bool) 9144175352205330063LL)))))))));
    }
}
