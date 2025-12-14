/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147745
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
    var_14 = (~(((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) var_9)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [3ULL])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [12LL])))) : (((/* implicit */int) arr_0 [i_0 + 1]))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [3U]))) != (arr_1 [1LL] [1LL]))) ? (((/* implicit */unsigned long long int) var_9)) : (((((/* implicit */_Bool) arr_0 [11U])) ? (var_1) : (((/* implicit */unsigned long long int) var_7))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) + (arr_1 [3LL] [i_0 + 2])));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) (((-(arr_5 [(signed char)4] [3ULL] [(_Bool)1]))) != (((/* implicit */unsigned long long int) (+(var_13))))));
                    var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [(short)7])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2])))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0]))))) : (((arr_2 [10U]) ? (arr_9 [(unsigned short)10]) : (((/* implicit */long long int) var_9))))));
                    arr_10 [i_0 - 1] [i_1] [i_2] = ((/* implicit */unsigned char) ((long long int) arr_5 [i_0 + 2] [i_2 - 1] [(short)6]));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_1))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))))));
}
