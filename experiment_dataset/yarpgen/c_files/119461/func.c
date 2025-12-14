/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119461
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
    var_10 = ((/* implicit */int) var_8);
    var_11 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [(short)12] = ((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (signed char)-1)))) + (((unsigned long long int) ((short) 3938044115476453559LL))));
        arr_3 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_0 [4U])), (((((/* implicit */_Bool) 1792248717U)) ? (3938044115476453572LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)5)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))), (min((((/* implicit */int) arr_0 [i_0])), (var_5)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_7 [i_1] [(_Bool)1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_1] [i_1]))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            arr_10 [i_1] = ((/* implicit */unsigned long long int) (+(var_3)));
            arr_11 [4LL] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (short)15432)) ? (3938044115476453538LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-15459))))));
            arr_12 [i_2] [i_2] [(signed char)11] = ((/* implicit */_Bool) ((((/* implicit */int) (short)15432)) ^ (((/* implicit */int) arr_6 [i_1] [i_2]))));
            arr_13 [i_1] [i_2] = ((/* implicit */long long int) ((int) var_4));
        }
    }
    for (unsigned char i_3 = 4; i_3 < 14; i_3 += 1) 
    {
        arr_16 [i_3] [(unsigned char)0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) (short)-15467)) ^ (((/* implicit */int) (unsigned char)233))))));
        arr_17 [i_3] = ((/* implicit */int) min((-3938044115476453546LL), (((/* implicit */long long int) (signed char)-21))));
    }
}
