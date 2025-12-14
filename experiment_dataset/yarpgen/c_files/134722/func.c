/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134722
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 4832057251462426771LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */long long int) (signed char)126)), (var_10))) != (((/* implicit */long long int) ((((/* implicit */int) (signed char)10)) - (((/* implicit */int) var_4))))))))) : ((~(-4832057251462426771LL)))));
        var_17 = (+(((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_0 [i_0] [i_0 + 1]))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) ((short) var_0))) ? (arr_3 [i_1]) : (((/* implicit */long long int) (~(2147483647)))));
        /* LoopNest 3 */
        for (signed char i_2 = 4; i_2 < 15; i_2 += 2) 
        {
            for (int i_3 = 4; i_3 < 16; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_2 + 1] [(signed char)15] [i_1] [15ULL] = ((/* implicit */long long int) arr_13 [i_1] [i_2] [i_3 - 2] [i_3 - 2] [i_3] [i_4]);
                        arr_16 [i_2] = ((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
                        var_18 = (~(((/* implicit */int) var_4)));
                    }
                } 
            } 
        } 
        var_19 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-11)) / (((/* implicit */int) (unsigned short)5)))))));
        arr_17 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) << (((arr_13 [4ULL] [5] [5] [5] [i_1] [5U]) - (2716625713141546994ULL)))));
        var_20 = ((/* implicit */unsigned int) (+((-(var_1)))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_21 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) min((arr_20 [i_5]), (((/* implicit */unsigned short) arr_12 [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5]))) : (arr_4 [i_5])))));
        arr_21 [i_5] [i_5] |= ((arr_19 [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((min((arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned int) (signed char)-10)))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65531))))))))));
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_0)));
}
