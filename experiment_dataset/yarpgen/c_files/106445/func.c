/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106445
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
    var_10 |= ((/* implicit */int) var_9);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0]) : (arr_2 [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] |= ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)));
            var_11 = ((/* implicit */_Bool) ((signed char) ((short) var_6)));
            arr_8 [i_0] [i_1] [i_1] = ((/* implicit */short) arr_2 [i_1]);
        }
    }
    for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) var_8);
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [8U] [i_2])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2])))))) ? (((((/* implicit */_Bool) arr_10 [i_2] [(short)20])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) max((((short) ((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */long long int) var_5))))), (((/* implicit */short) arr_10 [i_2] [i_2])))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_14 |= ((/* implicit */unsigned int) var_5);
        var_15 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3]))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_5)) : (var_4)))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                {
                    var_16 = ((((/* implicit */_Bool) arr_13 [i_3])) ? (((var_5) | (((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > (var_0)))));
                    arr_20 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5]))) : (arr_15 [i_4] [i_4])));
                    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_14 [i_3] [i_3] [(short)6])))) | (((/* implicit */int) arr_13 [i_3]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
    {
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned int) var_8);
        var_18 = ((/* implicit */long long int) arr_22 [i_6] [i_6]);
        var_19 = ((/* implicit */short) ((unsigned short) arr_22 [i_6] [i_6]));
        arr_25 [i_6] = ((/* implicit */unsigned int) ((unsigned long long int) var_5));
    }
}
