/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133420
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
    var_11 = (-(((var_2) << (((((var_3) % (var_2))) - (85422131))))));
    var_12 = (+(((unsigned long long int) var_10)));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) arr_2 [i_0]);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (-(((((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_5 [i_0]) : (arr_5 [i_0]))) / (arr_2 [i_0]))))))));
            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_7 [i_1 + 1] [i_1 - 1])))) || (((/* implicit */_Bool) 14704760063904624091ULL))));
            arr_8 [i_1] [i_1 - 1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((3741984009804927520ULL) >= (((/* implicit */unsigned long long int) 1208934910))))), ((~(max((15979025172043310285ULL), (1352037906648143706ULL)))))));
            arr_9 [i_1] [i_1] [i_0] |= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_1 + 1])))) ? (((/* implicit */unsigned long long int) (+(arr_6 [i_1 + 3] [i_1 + 3])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [16ULL]) == (arr_0 [i_0]))))) + ((+(arr_0 [i_1])))))));
            var_15 = ((/* implicit */int) ((arr_1 [i_0] [i_0]) > (max((arr_7 [i_1 + 1] [i_1 + 1]), (arr_7 [i_1 + 3] [i_1 + 3])))));
        }
    }
    for (int i_2 = 3; i_2 < 15; i_2 += 2) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -893596950)) ? (8017472030848471304ULL) : (9345535300180070453ULL))))));
        var_16 = ((int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_4 [19ULL])) ? (arr_1 [i_2] [2]) : (arr_7 [i_2] [17]))) : (min((arr_7 [i_2] [i_2 - 3]), (arr_0 [19ULL])))));
    }
    for (int i_3 = 4; i_3 < 16; i_3 += 3) 
    {
        var_17 = ((((/* implicit */_Bool) arr_1 [i_3 - 1] [i_3 - 3])) ? (((1352037906648143732ULL) * (arr_4 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3 - 1] [16])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_4 = 2; i_4 < 16; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    {
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4 + 2])) ? (arr_1 [i_4 + 3] [i_3 + 1]) : (arr_13 [i_3 - 1])));
                        var_19 = ((/* implicit */int) arr_13 [i_3 - 1]);
                        arr_22 [i_4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_0 [i_5])))))) % (((((/* implicit */_Bool) -6573846)) ? (arr_18 [i_3] [6] [i_5 + 4] [1]) : (var_10))));
                        arr_23 [i_4] [i_4] [5ULL] [i_4] = ((/* implicit */int) arr_13 [i_4 + 1]);
                    }
                } 
            } 
            var_20 = ((/* implicit */int) ((arr_0 [i_3 - 3]) >> (((11766897151212641773ULL) - (11766897151212641737ULL)))));
            arr_24 [i_3 - 4] [i_3] [i_4] = ((/* implicit */int) ((arr_7 [i_4] [i_4 - 2]) == (arr_5 [i_3 + 2])));
        }
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 9; i_7 += 2) 
    {
        var_21 &= ((arr_15 [i_7 + 1] [i_7 - 2]) / (arr_15 [i_7 + 2] [6ULL]));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (16474187437886482483ULL) : (arr_1 [i_7] [i_7]))))));
    }
}
