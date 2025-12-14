/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145395
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [17ULL] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_0]));
        arr_4 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        var_19 = ((/* implicit */short) arr_1 [i_1 + 1]);
        arr_7 [(_Bool)0] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_2 [13]), (((((/* implicit */int) (unsigned char)72)) < (((/* implicit */int) (signed char)-58)))))))) <= (arr_1 [i_1 - 1])));
        var_20 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 - 1]))))));
        var_21 |= ((/* implicit */signed char) var_4);
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 10890934519893848407ULL)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) var_8))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) var_2);
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2612320878543659510ULL))));
        var_24 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_2]))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 4) 
    {
        var_25 += (~(max((arr_1 [i_3 + 1]), (((/* implicit */unsigned long long int) var_15)))));
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_5 [i_3] [(short)6])) : (((((/* implicit */int) (signed char)1)) / (((/* implicit */int) arr_5 [1ULL] [i_3])))))) != (((/* implicit */int) arr_10 [i_3])))))));
    }
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            for (signed char i_6 = 1; i_6 < 13; i_6 += 1) 
            {
                {
                    var_27 = ((/* implicit */signed char) min((((/* implicit */int) arr_19 [i_4] [i_5] [i_6 + 1] [i_4])), ((+(((/* implicit */int) arr_19 [i_4] [i_6] [i_6 + 1] [i_6]))))));
                    arr_22 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)13))))), ((((!(arr_14 [i_4] [i_6]))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (var_7)))) : (arr_1 [2])))));
                    var_28 = ((/* implicit */unsigned long long int) ((min((var_0), (6ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)67))))), (((((/* implicit */int) (signed char)-40)) != (arr_20 [(short)13])))))))));
                }
            } 
        } 
    } 
}
