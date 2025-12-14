/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118362
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
    var_13 = ((/* implicit */signed char) var_6);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) var_4);
        var_15 = min((max((((arr_1 [5ULL]) + (((/* implicit */int) arr_3 [(unsigned short)3])))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0])) : (var_2))))), (min((((((/* implicit */int) var_6)) / (var_1))), (((/* implicit */int) arr_2 [i_0])))));
        var_16 = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_4 [(signed char)5])))) / (((/* implicit */int) var_8))));
        arr_8 [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_4 [i_1 + 1])))) << (((((arr_5 [i_1 - 1]) + (274926098))) - (22)))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) | (((((/* implicit */_Bool) arr_5 [i_1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)-16384)))))));
        var_18 = (+(arr_6 [i_1 + 1] [i_1 - 1]));
        arr_9 [i_1 + 1] = ((/* implicit */unsigned long long int) 1503680121U);
    }
    for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (-(((unsigned int) (+(67076096))))));
        arr_14 [i_2] [(short)18] = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */unsigned int) min((arr_11 [i_2 + 2] [i_2]), (arr_11 [i_2] [(_Bool)1])))), (1503680128U))));
    }
    var_20 = ((/* implicit */unsigned long long int) 0U);
    var_21 = ((/* implicit */short) min((var_2), (((/* implicit */int) ((_Bool) var_1)))));
}
